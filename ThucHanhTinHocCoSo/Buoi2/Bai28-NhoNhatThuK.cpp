#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,temp,k;
		scanf("%d%d",&n,&k);
		int a[1000];
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
		printf("%d",a[k-1]);
		printf("\n");
	}
}
