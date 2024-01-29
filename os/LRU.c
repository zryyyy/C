//
// Created by Matrix on 2023/12/2.
//
#include <stdio.h>
#include <stdlib.h>

// 检查页面是否已在框架中
int isPageInFrame(int page, const int frame[], int frameSize) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i] == page)
            return 1;
    }
    return 0;
}

// 查找最少使用的页面索引
int findLRU(const int time[], int frameSize) {
    int min = time[0], pos = 0;
    for (int i = 1; i < frameSize; i++) {
        if (time[i] < min) {
            min = time[i];
            pos = i;
        }
    }
    return pos;
}

// LRU页面置换算法
void LRU_PageReplacement(const int pages[], int n, int frameSize) {
    int frame[frameSize], time[frameSize];
    int counter = 0, pageFaults = 0, pos, found;

    for (int i = 0; i < frameSize; i++) {
        frame[i] = -1; // 初始化页面框架为-1
    }

    for (int i = 0; i < n; i++) {
        found = 0;
        // 检查页面是否在框架中
        for (int j = 0; j < frameSize; j++) {
            if (frame[j] == pages[i]) {
                counter++;
                time[j] = counter; // 更新页面最后访问时间
                found = 1;
                break;
            }
        }

        if (!found) {
            // 页面不在框架中
            if (isPageInFrame(-1, frame, frameSize)) {
                // 查找空闲位置
                for (int j = 0; j < frameSize; j++) {
                    if (frame[j] == -1) {
                        counter++;
                        frame[j] = pages[i];
                        time[j] = counter; // 更新时间
                        pageFaults++;
                        break;
                    }
                }
            } else {
                // 执行置换
                pos = findLRU(time, frameSize);
                counter++;
                frame[pos] = pages[i];
                time[pos] = counter;
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
    int pages[] = {7, 0, 1, 2, 0, 3, 0, 4, 2, 3, 0, 3, 2};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frameSize = 4; // 页面框架大小

    LRU_PageReplacement(pages, n, frameSize);
    return 0;
}