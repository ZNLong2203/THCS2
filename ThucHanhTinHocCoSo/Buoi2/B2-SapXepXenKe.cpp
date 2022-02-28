#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,temp,xet;
		scanf("%d",&n);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		temp=0;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		if(n%2==0) {
			xet=(n/2)-1;
		} else {
			xet=(n/2);
		}
		for(int i=0;i<=xet;i++) {
			if(i!=n-i-1) {
				printf("%d ",a[n-i-1]);
				printf("%d ",a[i]);
			} else {
				printf("%d",a[i]);
			}
		}
		printf("\n");
	}
}
