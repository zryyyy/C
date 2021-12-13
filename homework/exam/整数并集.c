#include <stdio.h>
int main()
{
	int x,y,swap;
	scanf("%d%d",&x,&y);
	int a[x+y];
    for (int i = 0; i < x; ++i) {
        scanf("%d",&a[i]);
    }
    for (int i = x; i < x + y; ++i) {
        scanf("%d",&a[i]);
    }
    int n = x + y;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] > a[j+1]) {
                swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }
    for (int i = 0; i < n - 1;++i) {
    	if (a[i] == a[i+1]) {
    		for (int j = i; j < n - 1;++j) a[j] = a[j+1];
    		--n;
		}
	}
	for (int i = 0; i < n; ++i) {
        printf("%d ",a[i]);
    }
    return 0;
}