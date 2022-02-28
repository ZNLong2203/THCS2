#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,k,xet;
		scanf("%lld",&n);
		int count = 0;
		if(n%2==0) {
			for(int i=30;i>=1;i--) {
			xet = n/pow(2,i);
			if(xet%2==1) {
				k=i;
				break;
			}
		}
		for(int i=1;i<=xet;i++) {
			if(xet%i==0) {
				count++;
			}
		}
		count=count*k;
		} 
		printf("%d\n",count);
	}
}

