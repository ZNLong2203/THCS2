#include<stdio.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[1000];
	int b[1000];
	int c[1000]={};
	int d[1000]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		c[a[i]]++;
	}
	for(int i=0;i<m;i++) {
		scanf("%d",&b[i]);
		d[b[i]]++;
	}
	for(int i=1;i<1000;i++) {
		if(c[i]>=1 && d[i]>=1) {
			printf("%d ",i);
		}
	}
}
