//
// Created by Matrix on 2021/12/28.
//
#include <stdio.h>
struct student {
    char id[10];
    char name[10];
    int score[3] = {0};
    int sum = 0;
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student student[n];
    //input data
    for (int i = 0; i < n; ++i) {
        scanf("%s%s%d%d%d",student[i].id,student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
        student[i].sum = student[i].score[0] + student[i].score[1] + student[i].score[2];
    }
    //find max
    int max = 0;
    int ave[3] = {0};
    for (int i = 0; i < n; ++i) {
        if (student[i].sum > student[max].sum) max = i;
        ave[0] += student[i].score[0];
        ave[1] += student[i].score[1];
        ave[2] += student[i].score[2];
    }
    ave[0] /= n;
    ave[1] /= n;
    ave[2] /= n;
    printf("%d %d %d\n",ave[0],ave[1],ave[2]);
    printf("%s %s %d %d %d\n",student[max].id,student[max].name,student[max].score[0],student[max].score[1],student[max].score[2]);
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    struct student {
        char id[10];
        char name[10];
        int score[3] = {0};
        int sum = 0;
    } student[n];
    //input data
    for (int i = 0; i < n; ++i) {
        scanf("%s%s%d%d%d",student[i].id,student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
        student[i].sum = student[i].score[0] + student[i].score[1] + student[i].score[2];
    }
    //find max
    int max = 0;
    int ave[3] = {0};
    for (int i = 0; i < n; ++i) {
        if (student[i].sum > student[max].sum) max = i;
        ave[0] += student[i].score[0];
        ave[1] += student[i].score[1];
        ave[2] += student[i].score[2];
    }
    ave[0] /= n;
    ave[1] /= n;
    ave[2] /= n;
    printf("%d %d %d\n",ave[0],ave[1],ave[2]);
    printf("%s %s %d %d %d\n",student[max].id,student[max].name,student[max].score[0],student[max].score[1],student[max].score[2]);
    return 0;
}
*/