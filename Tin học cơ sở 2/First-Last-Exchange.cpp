#include<stdio.h>
int main() {
	long long n,xet;
	scanf("%lld",&n);
	long long somoi=0;
	int a[10000];
	int dem=0;
	xet=n;
	while(xet!=0) {
		xet/=10;
		dem++;
	}
	for(int i=dem-1;i>=0;i--) {
		a[i]=n%10;
		n/=10;
	}
	if(a[dem-1]==0) {
		a[dem-1]=a[0];
		a[0]=0;
	} else {
		xet=a[0];
		a[0]=a[dem-1];
		a[dem-1]=xet;
	}
	for(int i=0;i<dem;i++) {
		somoi=somoi*10+a[i];
	}	
	printf("%lld",somoi);
}

