//
// Created by Matrix on 2021/11/22.
//
#include <stdio.h>
int main()
{
    int i = 0,j = 0;
    char s[100],t[100];
    while(scanf("%c", &s[i])&&s[i]!='\n') i++;
    while(scanf("%c", &t[j])&&t[j]!='\n') j++;
    int subscript = 0,length = 0;
    for (int k = 0; k < i; ++k) {
        for (int l = 0; l < j; ++l) {
            if (s[k] == t[l]) {
                int x = 0;
                while (k + x < i && l + x < j) {
                    if (s[k + x] == t[l + x]) x++;
                    else break;
                }
                if (x > length) subscript = k,length = x;
            }
        }
    }
    if (length == 0) printf("No Answer");
    else {
        for (int k = 0; k < length; ++k) {
            printf("%c",s[subscript+k]);
        }
    }
    return 0;
}