#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		long long a[100000];
		long long sum1=0;
		long long sum2=-100000;
		for(long long i=0;i<n;i++) {
			scanf("%lld",&a[i]);
			sum1+=a[i];
			if(sum1<0) {
				sum1=0;
			}
			if(sum1>sum2) {
				sum2=sum1;
			}
		}
		printf("%lld\n",sum2);
	}
}
