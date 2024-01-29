//
// Created by Matrix on 2023/12/2.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int pageNumber;
    int used; // 使用位
} PageFrame;

// 检查页面是否已在框架中
int isPageInFrame(int page, PageFrame frame[], int frameSize, int *position) {
    for (int i = 0; i < frameSize; i++) {
        if (frame[i].pageNumber == page) {
            *position = i;
            return 1;
        }
    }
    return 0;
}

// Clock页面置换算法
void Clock_PageReplacement(int pages[], int n, int frameSize) {
    PageFrame frame[frameSize];
    int pointer = 0; // 指针用于循环遍历页面框架
    int pageFaults = 0, pos, found;

    for (int i = 0; i < frameSize; i++) {
        frame[i].pageNumber = -1; // 初始化页面框架为-1
        frame[i].used = 0;        // 初始化使用位为0
    }

    for (int i = 0; i < n; i++) {
        found = 0;
        // 检查页面是否在框架中
        if (isPageInFrame(pages[i], frame, frameSize, &pos)) {
            found = 1;
            frame[pos].used = 1; // 设置使用位
        }

        if (!found) {
            while (frame[pointer].used) {
                frame[pointer].used = 0; // 清除使用位
                pointer = (pointer + 1) % frameSize; // 移动指针
            }

            // 替换页面
            frame[pointer].pageNumber = pages[i];
            frame[pointer].used = 1;
            pointer = (pointer + 1) % frameSize; // 移动指针
            pageFaults++;
        }

        // 打印当前框架状态
        for (int j = 0; j < frameSize; j++) {
            if (frame[j].pageNumber != -1) {
                printf("%d ", frame[j].pageNumber);
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
    int pages[] = {1, 2, 3, 4, 2, 1, 5, 6, 2, 1, 2, 3, 7};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frameSize = 4; // 页面框架大小

    Clock_PageReplacement(pages, n, frameSize);
    return 0;
}