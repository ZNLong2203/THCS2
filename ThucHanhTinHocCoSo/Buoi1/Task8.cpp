#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int temp=0;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n;i++) {
			printf("%d",a[i]);
		}
		int hieu1=0;
		int hieu2=0;
		for(int i=0;i+1<n;i++) {
			hieu1 =a[i+1]-a[i];
			if(hieu2>hieu1) {
				hieu2=hieu1;
			}
		}
		printf("%d\n",hieu2);
	}
}
