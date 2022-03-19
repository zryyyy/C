//
// Created by Matrix on 2022/2/13.
// 121.买卖股票的最佳时机
// 一次遍历
int maxProfit(int* prices, int pricesSize){
    int max_diff = 0,min_price = prices[0];
    for (int i = 1; i < pricesSize; ++i) {
        // 每次在比较时只比较当前值与最小值的差价, 防止循环浪费资源
        // 去掉了自定义函数略微提升性能
        // min_price保存了历史的最低价格, max_diff保存了最大的差价
        min_price = min_price < prices[i] ? min_price : prices[i]; // 最小值 = Min(之前的最小值,当前值)
        max_diff = max_diff > prices[i] - min_price ? max_diff : prices[i] - min_price; // 最大差值 = Max(之前的最大差值,当前值减最小值)
    }
    return max_diff;
}

/**
 * 暴力穷举法（超时）
int maxProfit(int* prices, int pricesSize){
    int max = 0;
    for (int i = 0; i < pricesSize; ++i) {
        for (int j = i + 1; j < pricesSize; ++j) {
            if (prices[j] - prices[i] > max) max = prices[j] - prices[i];
        }
    }
    return max;
}
*/

/**
 * 下面是在IDE调试的参考代码
#include <stdio.h>
int max(int a,int b) {
    if (a > b) return a;
    else return b;
}
int min(int a,int b) {
    if (a < b) return a;
    else return b;
}
int maxProfit(int* prices, int pricesSize){
    int max_diff = 0,min_price = prices[0];
    for (int i = 1; i < pricesSize; ++i) {
        min_price = min(min_price,prices[i]); // 最小值 = Min(之前的最小值,当前值)
        max_diff = max(max_diff,prices[i]-min_price); // 最大差值 = Max(之前的最大差值,当前值减最小值)
        // 每次在比较时只比较当前值与最小值的差值
    }
    return max_diff;
}
int main()
{
    int prices[] ={7,1,5,3,6,4},priceSize = 6; // [7,6,4,3,1]
    printf("%d", maxProfit(prices,priceSize));
    return 0;
}
 */