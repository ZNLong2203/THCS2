#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long x,y,p,kq;
		scanf("%lld%lld%lld",&x,&y,&p);
		kq=pow((x%p),y);
		kq%=p;
		printf("%lld\n",kq);
	}
}
