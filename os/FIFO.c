//
// Created by Matrix on 2023/12/2.
//
#include <stdio.h>
#include <stdlib.h>

// 定义页面结构体
typedef struct {
    int pageNumber;
} Page;

// FIFO算法实现
void FIFO_PageReplacement(int pages[], int n, int frameSize) {
    // 初始化页面框架，初始值设为-1表示空
    Page *frame = (Page*)malloc(frameSize * sizeof(Page));
    for (int i = 0; i < frameSize; i++) {
        frame[i].pageNumber = -1;
    }

    int pageFaults = 0; // 页面错误计数
    int pos = 0;        // 用于跟踪最早进入的页面

    for (int i = 0; i < n; i++) {
        int found = 0;
        // 检查当前页面是否已在框架中
        for (int j = 0; j < frameSize; j++) {
            if (frame[j].pageNumber == pages[i]) {
                found = 1;
                break;
            }
        }

        // 如果页面不在框架中，则进行替换
        if (!found) {
            frame[pos].pageNumber = pages[i];
            pos = (pos + 1) % frameSize; // 移动到下一个位置
            pageFaults++;                // 增加页面错误计数
        }

        // 打印当前框架状态
        for (int k = 0; k < frameSize; k++) {
            if (frame[k].pageNumber != -1) {
                printf("%d ", frame[k].pageNumber);
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }

    printf("Total Page Faults: %d\n", pageFaults);
    free(frame);
}

int main() {
    // 示例页面引用串
    int pages[] = {1, 3, 0, 3, 5, 6, 3};
    int n = sizeof(pages) / sizeof(pages[0]);
    int frameSize = 3; // 页面框架大小

    FIFO_PageReplacement(pages, n, frameSize);
    return 0;
}