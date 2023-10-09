//
// Created by Matrix on 2023/3/7.
//

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main()
{
    const int MAXN = 1e6;
    int n, k;
    int a[MAXN+5];
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    /* min */
    deque<int> q;
    for (int i = 0; i < k-1; ++i) {
        while (!q.empty() && a[q.front()] > a[i])
            q.pop_front();
        q.push_front(i);
    }
    for (int i = k-1; i < n; ++i) {
        if (!q.empty() && i - q.back() >= k)
            q.pop_back();
        while (!q.empty() && a[q.front()] > a[i])
            q.pop_front();
        q.push_front(i);
        printf("%d ", a[q.back()]);
    }
    printf("\n");

    /* max */
    q.clear();
    for (int i = 0; i < k-1; ++i) {
        while (!q.empty() && a[q.front()] < a[i])
            q.pop_front();
        q.push_front(i);
    }
    for (int i = k-1; i < n; ++i) {
        if (!q.empty() && i - q.back() >= k)
            q.pop_back();
        while (!q.empty() && a[q.front()] < a[i])
            q.pop_front();
        q.push_front(i);
        printf("%d ", a[q.back()]);
    }
    printf("\n");

    system("pause");
    return 0;
}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    // 给定一个长度为n（n<=10^6）的数组。有一个大小为k的滑动窗口从数组的最左端移动到最右端。你可以看到窗口中的k个数字。窗口每次向右滑动一个数字的距离。
//    // 下面是一个例子：
//    // 数组是 [1 3 -1 -3 5 3 6 7]， k = 3
//    int n,k;
//    cin >> n >> k;
//    int a[n];
//    for(int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    int max[n - k + 1],min[n - k + 1];
//    for (int i = 0; i < n - k + 1; ++i) {
//        max[i] = a[i];
//        min[i] = a[i];
//        for (int j = i + 1; j < i + k; ++j) {
//            if (a[j] > max[i]) {
//                max[i] = a[j];
//            }
//            if (a[j] < min[i]) {
//                min[i] = a[j];
//            }
//        }
//    }
//    for (int i = 0; i < n - k + 1; ++i) {
//        cout << min[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < n - k + 1; ++i) {
//        cout << max[i] << " ";
//    }
//    cout << endl;
//    return 0;
//}