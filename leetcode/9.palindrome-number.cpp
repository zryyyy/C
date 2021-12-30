//
// Created by Matrix on 2021/12/29.
// 9.回文数
bool isPalindrome(int x){
    int a[40];
    int n = 0;
    if (x < 0) return false; //负数都不是回文数
    while (x != 0) {
        a[n++] = x % 10;
        x /= 10;
    }
    for (int i = 0;i < n / 2;++i) {
        if (a[i] != a[n - 1 - i]) return false;
    }
    return true;
}