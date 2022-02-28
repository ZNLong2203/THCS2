#include<stdio.h>
#include<math.h>
int main() {
	int n;
	int count=0;
	scanf("%d",&n);
	int a[100];
	int b[100]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(int i=1;i<n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
	}
	for(int j=0;j<n;j++) {
		b[a[j]] ++;
	}
	for(int k=0;k<n;k++) {
		if(b[a[k]]!=0) {
			printf("%d %d\n",a[k],b[a[k]]);
			b[a[k]]=0;
		}
	}
}
