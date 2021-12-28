//
// Created by Matrix on 2021/12/28.
//
#include <stdio.h>
struct student {
    char id[10];
    char name[10];
    int score[3];
};
int main()
{
    int n;
    scanf("%d",&n);
    struct student student[n];
    for (int i = 0; i < n; ++i) {
        scanf("%s%s%d%d%d",student[i].id,student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%s,%s,%d,%d,%d\n",student[i].id,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
    }
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
        int score[3];
    } student[n];
    for (int i = 0; i < n; ++i) {
        scanf("%s%s%d%d%d",student[i].id,student[i].name,&student[i].score[0],&student[i].score[1],&student[i].score[2]);
    }
    for (int i = 0; i < n; ++i) {
        printf("%s,%s,%d,%d,%d\n",student[i].id,student[i].name,student[i].score[0],student[i].score[1],student[i].score[2]);
    }
    return 0;
}
*/