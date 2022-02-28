#include<stdio.h>
#include<math.h>
int transfer(long long n) {
    long long p = 0;
    long long decNumber = 0;
    while (n > 0) {
        decNumber+=(n % 10)*pow(2, p);
        ++p;
        n/=10;
    }
    return decNumber;
}
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
	    long long n;
	    scanf("%lld", &n);
	    if(transfer(n)%5==0) {
	    	printf("YES\n");
		}	else printf("NO\n");
	}
}
