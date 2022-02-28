#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int tonguoc=0;
	for(int i=1;i<n;i++) {
		if(n%i==0) {
			tonguoc+=i;
		}
	}
	if(tonguoc==n) {
		printf("1");
	}	else {
		printf("0");
	}
}
