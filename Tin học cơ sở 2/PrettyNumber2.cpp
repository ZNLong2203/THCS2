#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,kq;
		scanf("%d",&n);
		if(n==2) {
			kq=1;
		} else {
			if(n%2==0) {
				n=(n-2)/2;
				kq=9;
				if(n>=2) {
					for(int i=1;i<n;i++) {
						kq*=10;
					}
				}
				kq*=2;
			} else {
				n=n/2;
				kq=9;
				if(n>=2) {
					for(int i=1;i<n;i++) {
						kq*=10;
					}
				}
			}
		}
		printf("%d",kq);
		printf("\n");
	}
}
