#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t); 
	while(t--) {
		int n,k;
		scanf("%d%d",&n,&k);
		int sum1=0;
		int sum2=0;
		int a[1000000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int count=0;
		for(int i=0;i+1<n;i++) {
			sum1=a[i]+a[i+1];
			if(sum2<sum1) {
				sum2=sum1;
			}
		} 
		for(int i=0;i+1<n;i++) {
			if(sum2==a[i]+a[i+1]) {
				k=i;
			}
		} 
		for(int i=k;i<k+2;i++) {
			printf("%d ",a[i]);
		} 
		printf("\n");
	}
}

