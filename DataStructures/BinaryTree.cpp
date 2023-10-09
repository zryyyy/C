//
// Created by Matrix on 2023/4/8.
//
#include <iostream>

using namespace std;

class binaryTreeNode {
public:
    int parent, left, right, flag;
    // flag 用于标记节点为左子树还是右子树
    // 0 代表左子树 1 代表右子树
    binaryTreeNode() {
        parent = left = right = flag = -1;
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int m, n;
        cin >> m >> n; // m代表二叉树节点的个数 n代表操作的次数
        binaryTreeNode tree[m];
        for (int j = 0; j < m; ++j) {
            int x, y, z;
            cin >> x >> y >> z;
            tree[x].left = y;
            tree[x].right = z;
            tree[y].parent = x;
            tree[y].flag = 0;
            tree[z].parent = x;
            tree[z].flag = 1;
        }
        for (int j = 0; j < n; ++j) {
            int type;
            cin >> type;
            if (type == 1) {
                int x, y;
                cin >> x >> y;
                // 若 x y 具有相同的父节点
                if (tree[x].parent == tree[y].parent) {
                    int swap;
                    int parent = tree[x].parent;
                    // 交换子树
                    swap = tree[parent].left;
                    tree[parent].left = tree[parent].right;
                    tree[parent].right = swap;
                    // 交换子树的标记
                    swap = tree[tree[parent].left].flag;
                    tree[tree[parent].left].flag = tree[tree[parent].right].flag;
                    tree[tree[parent].right].flag = swap;
                } else {
                    int swap, xPar, yPar, xFlag, yFlag;
                    xPar = tree[x].parent;
                    yPar = tree[y].parent;
                    xFlag = tree[x].flag;
                    yFlag = tree[y].flag;
                    // 交换父节点子树
                    if (xFlag) {
                        tree[xPar].right = y;
                    } else {
                        tree[xPar].left = y;
                    }
                    if (yFlag) {
                        tree[yPar].right = x;
                    } else {
                        tree[yPar].left = x;
                    }
                    // 交换子树的标记
                    swap = tree[x].flag;
                    tree[x].flag = tree[y].flag;
                    tree[y].flag = swap;
                }
            } else if (type == 2) {
                int x;
                cin >> x;
                while (tree[x].left != -1) {
                    x = tree[x].left;
                }
                cout << x << endl;
            }
        }
    }
    return 0;
}