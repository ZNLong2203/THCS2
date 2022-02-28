#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,so1,so2,so;
		long long count=3;
		scanf("%lld",&n);
		if(n==1 || n==2) {
			printf("1\n");
		} else {
			so1=1;
			so2=1;
			so=so1+so2;
			while(count!=n) {
				so1=so2;
				so2=so;
				so=so1+so2;
				count++;
			}
			printf("%lld\n",so);	
		}
	}
}
