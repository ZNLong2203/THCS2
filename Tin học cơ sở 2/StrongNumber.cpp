#include<stdio.h>
int main() {
	int n,dv;
	scanf("%d",&n);
	int xet=n;
	long long dapan=0;
	while(xet>0) {
		long long tinh=1;
		dv=xet%10;
		xet/=10;
		for(int i=2;i<=dv;i++) {
			tinh*=i;
		}
		dapan+=tinh;
	}
	if(dapan==n) {
		printf("1");
	}	else printf("0");
}
