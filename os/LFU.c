//
// Created by Matrix on 2023/12/2.
//

#include <stdio.h>
#include <stdlib.h>

// 检查页面是否已在框架中，并返回其位置
int isPageInFrame(int page, const int frame[], int frameSize, int *position) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i] == page) {
            *position = i;
            return 1;
        }
    }
    return 0;
}

// 查找最不经常使用的页面索引
int findLFU(const int frequency[], int frameSize) {
    int min = frequency[0], pos = 0;
    for (int i = 1; i < frameSize; i++) {
        if (frequency[i] < min) {
            min = frequency[i];
            pos = i;
        }
    }
    return pos;
}

// LFU页面置换算法
void LFU_PageReplacement(int pages[], int n, int frameSize) {
    int frame[frameSize], frequency[frameSize];
    int pageFaults = 0, pos, found;

    for (int i = 0; i < frameSize; i++) {
        frame[i] = -1; // 初始化页面框架为-1
        frequency[i] = 0; // 初始化频率为0
    }

    for (int i = 0; i < n; i++) {
        found = 0;
        // 检查页面是否在框架中
        if (isPageInFrame(pages[i], frame, frameSize, &pos)) {
            found = 1;
            frequency[pos]++; // 增加页面频率
        }

        if (!found) {
            // 页面不在框架中
            if (isPageInFrame(-1, frame, frameSize, &pos)) {
                // 查找空闲位置
                frame[pos] = pages[i];
                frequency[pos] = 1; // 初始化频率
                pageFaults++;
            } else {
                // 执行置换
                pos = findLFU(frequency, frameSize);
                frame[pos] = pages[i];
                frequency[pos] = 1; // 重置频率
                pageFaults++;
            }
        }

        // 打印当前框架状态
        for (int j = 0; j < frameSize; j++) {
            if (frame[j] != -1) {
                printf("%d ", frame[j]);
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", pageFaults);
}

int main() {
    // 示例页面引用串
    int pages[] = {2, 3, 2, 1, 5, 2, 4, 5, 3, 2, 5, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frameSize = 3; // 页面框架大小

    LFU_PageReplacement(pages, n, frameSize);
    return 0;
}