//
// Created by Matrix on 2023/3/4.
//
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        map<int, int> m;
        int count = 0;
        int x,y;
        cin >> x >> y;
        while (count < 2) {
            if (y >= 0) {
                m[y] += x;
            } else if (++count == 2) break;
            cin >> x >> y;
        }
        for (auto it = m.rbegin(); it != m.rend(); ++it) {
            if (it->second != 0) {
                cout << "[ " << it->second << " " << it->first << " ] ";
            }
        }
        cout << endl;
    }
    return 0;
}