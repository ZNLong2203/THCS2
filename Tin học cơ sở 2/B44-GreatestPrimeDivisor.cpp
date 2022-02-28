#include<stdio.h>
#include<math.h>
int check(long long n) {
	long long count=0;
	long long xet,kq;
	xet=n;
	for(int i=2;i<(sqrt(n)+10);i++) {
		while(xet%i==0) {
			count++;
			xet/=i;
			kq=i;
		}
		if(xet==1) {
			return kq;
		}
	}
	if(count==0) {
		return n;
	}
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n;
		scanf("%lld",&n);
		printf("%lld\n",check(n));
	}	
}
