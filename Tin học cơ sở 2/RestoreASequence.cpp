#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[1000][1000];
	int b[1000];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int xet;
	if(n==2) {
		if(a[0][1]%2==0) {
			xet=a[0][1]/2;
			printf("%d %d",xet,xet);
			return 0;
		}
	} else {
		b[0]=(a[0][1]+a[0][n-1]-a[1][n-1])/2;
		for(int i=1;i<n;i++) {
			b[i]=a[0][i]-b[0];
		}
	}
	for(int i=0;i<n;i++) {
		printf("%d ",b[i]);
	}
}
