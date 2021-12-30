//
// Created by Matrix on 2021/12/29.
// 13.罗马数字转整数
int romanToInt(char * s){
    /**
     * IV = 4       IX = 9
     * XL = 40      XC = 90
     * CD = 400     CM = 900
     * 使用官方思路
     * 通常情况下，罗马数字中小的数字在大的数字的右边
     * 若输入的字符串满足该情况，那么可以将每个字符视作一个单独的值，累加每个字符对应的数值即可
     * 若存在小的数字在大的数字的左边的情况，根据规则需要减去小的数字
     * 对于这种情况，也可以将每个字符视作一个单独的值，若一个数字右侧的数字比它大，则将该数字的符号取反
     */
    int i = 0,sum = 0,num[128] = {0};
    num['I'] = 1;
    num['V'] = 5;
    num['X'] = 10;
    num['L'] = 50;
    num['C'] = 100;
    num['D'] = 500;
    num['M'] = 1000;
    while (s[i] != 0) {
        int x = 1;
        while (s[i] == s[i + x]) ++x;
        int value = num[s[i]] * x;
        if (num[s[i]] < num[s[i + x]]) value = -value; //若右侧数字更大则取反
        sum += value;
        i += x;
    }
    return sum;
}