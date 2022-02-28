#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,k,temp;
		scanf("%lld%lld",&n,&k);
		int a[100000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		temp=0;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(abs(a[i]-a[j])==k) {
					printf("1");
					temp++;
					break;
				}
			}
		}
		if(temp==0) {
			printf("-1");
		}
		printf("\n");
	}
}
