#include<stdio.h>
int main() {
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long bcnn = a*b;
	while(a!=b) {
		if(a>b) {
			a=a-b;
		}	else {
			b=b-a;
		}
	}
	bcnn=bcnn/a;
	printf("%lld\n",a);
	printf("%lld\n",bcnn);
}
