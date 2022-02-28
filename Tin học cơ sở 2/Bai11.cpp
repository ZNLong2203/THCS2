#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		long long tong=0;
		for(long long i=n;i!=0;i/=10) {
			long long du=i%10;
			tong+=du;
		}
		printf("%lld\n",tong);
	}
}
