#include<stdio.h>
int main() {
	long long t;
	scanf("%lld",&t);
	int tich=1;
	while(t!=0) {
		tich*=t%10;
		t=t/10;	
	}
	printf("%d",tich);
}
