#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	   	long long n,k;
		scanf("%lld%lld",&n,&k);
	   int a[1000005];
	   for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
	   }
	   for (int i=k;i<n;i++)
	   printf("%d ",a[i]);
	   for (int i=0;i<k;i++)
	   printf("%d ",a[i]);
	}
} 

