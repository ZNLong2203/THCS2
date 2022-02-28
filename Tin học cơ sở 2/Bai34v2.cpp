#include<stdio.h>
int F(long long n) {   
	if(n==1 || n==2) return 1;
    else return F(n-2) +F(n-1);
}
int main() {
	long long n;
	scanf("%lld",&n);
	if(F(n)==n) {
		printf("YES");
	}	else printf("NO");
}

