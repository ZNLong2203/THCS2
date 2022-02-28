#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[100];
	int b[100]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		b[i]=a[n-1-i];
	}
	for(int i=0;i<n;i++) {
		printf("%d ",b[i]);
	}
}
