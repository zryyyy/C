//
// Created by Matrix on 2021/10/6.
//
using namespace std;
#include <string.h>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdio.h>
//struct student {
//    char id[10];
//    char name[10];
//    int score[3] = {0};
//    int sum = 0;
//};
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[200] = {0};
    for (int i = 0; i < n + m; ++i) {
        int x,y;
        scanf("%d%d",&x,&y);
        a[x] = y;
    }
    for (int i = 0; i < 200; ++i) {
        if (a[i] != 0) printf("%d %d\n",i,a[i]);
    }
    return 0;
}