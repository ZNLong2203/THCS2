#include<stdio.h>
int main() {
	int n,k,so;
	scanf("%d%d%d",&n,&k,&so);
	int a[100];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int j=n;j-1>=k;j--) {
		a[j] = a[j-1];
	}
	a[k] = so;
	for(int i=0;i<n+1;i++) {
		printf("%d ",a[i]);
	}
}
