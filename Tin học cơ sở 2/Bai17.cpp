#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		long long t;
		scanf("%lld",&t);
		int a,b;
		int even = 0;
		int odd = 0;
		while(t!=0) {
			int pt =t%10;
			if(pt%2==0) {
				even++;
			} else {
				odd++; 
			}
			t=t/10;	
		}
		printf("%d %d\n",odd ,even);	
	}
}
