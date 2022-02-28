#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
		scanf("%d%d",&a,&b);
		while (a*b !=0) {
			if(a>b) {
				a%=b;
			} else {
				b%=a;
			}
		}
		int tong=a+b;
		printf("%d\n ",tong);
	}
}
