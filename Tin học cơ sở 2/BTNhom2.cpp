#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long keo=0;
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++) {
			long long tinh=1;
			for(int j=1;j<=i;j++) {
				tinh*=j;
			}
			keo+=tinh;
		}
		printf("%d\n",keo);
	}
}
