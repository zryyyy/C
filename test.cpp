//
// Created by Matrix on 2021/10/6.
//
using namespace std;
#include <string.h>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <stdio.h>
char * addBinary(char * a, char * b){
    int len_a = strlen(a),len_b = strlen(b);
    int len = (len_a > len_b) ? len_a : len_b;
    char * ret = malloc(sizeof(char) * (len + 1));
    for (int i = 1; i < len; ++i) {
        if (a[len_a - i] == '1' && b[len_b - i] == '1') ret[]
    }
}
int main()
{
    char a[] = "11",b[] = "1";
    printf("%s", addBinary(a,b));
    return 0;
}
