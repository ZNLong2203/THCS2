#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	int b[10000]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	int count=0;
	for(int i=0;i<n;i++) {
		if(b[a[i]]==1) {
			count++;
		}
	}
	printf("%d\n",count);
	for(int i=0;i<n;i++) {
		if(b[a[i]]==1) {
			printf("%d ",a[i]);
		}
	}
}
