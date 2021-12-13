#include <stdio.h>
int main(){
	int x;
	int n;
	scanf("%d%d",&x,&n);
	double xx = x;
	for (int i = 0; i < n;++i) {
		xx = (2 * xx + x / (xx * xx)) / 3;
	}
	printf("%.5lf",xx);
	return 0;
}