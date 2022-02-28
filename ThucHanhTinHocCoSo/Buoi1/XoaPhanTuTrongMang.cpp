#include<stdio.h>
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int j=k;j+1<n;j++) {
		a[j] = a[j+1];
	}
	for(int i=0;i<n-1;i++) {
		printf("%d ",a[i]);
	}
}
