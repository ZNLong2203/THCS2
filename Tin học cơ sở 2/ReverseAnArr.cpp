#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[10000];
	int b[10000];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		b[n-i-1]=a[i];
	}
	for(int i=0;i<n;i++) {
		printf("%d ",b[i]);
	}
}

