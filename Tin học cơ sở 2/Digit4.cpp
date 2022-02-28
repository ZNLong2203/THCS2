#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		long long dau=pow(10,n-1);
		long long cuoi=pow(10,n);
		for(long long i=dau;i<cuoi;i++) {
			long long xet=i;
			long long somoi=0;
			long long sum=0;
			int count=0;
			while(xet>0) {
				somoi=somoi*10+xet%10;
				sum+=xet%10;
				if(xet%10==4) {
					count++;
					break;
				}
				xet/=10;
			}
			if(somoi==i && count==0 && sum%10==0) {
				printf("%lld ",i);
			}
		}
		printf("\n");
	}
}
