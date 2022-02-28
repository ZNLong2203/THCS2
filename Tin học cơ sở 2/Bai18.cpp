#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		long long sum=1;
		for(int i=2;i<=n;i++) {
			int count=0;
			while(n%i==0) {
				n/=i;
				if(count==0) {
					sum*=i;	
				}
				count++;
			}
		}
		printf("%lld\n",sum);
	}
}