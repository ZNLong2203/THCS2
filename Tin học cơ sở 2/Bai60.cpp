#include<stdio.h>
int main() {
	int n,k;
	scanf("%d",&n);
	int a[1000];
	int b[1000]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	int count=1;
	for(int j=0;j<n;j++) {
		if(j<k) {
			b[n-k+j] = a[j];
		} else if(j==(n-1-k)) {
			b[0] = a[k];
		} else {
			b[count] = a[j];
			count++;
		}
	}
	for(int k=0;k<n;k++) {
		printf("%d ",b[k]);
	}
}
