#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,dv,xet;
		scanf("%lld",&n);
		int count=0;
		int sum=0;
		int a[10000];
		int dem=0;
		xet=n;
		while(n>0) {
			dv=n%10;
			sum+=dv;
			a[dem]=dv;
			dem++;
			if(dv%2==0) {
				count++;
				break;
			}
			n/=10;
		}
		dv=0;
		for(int i=0;i<dem;i++) {
			dv=dv*10+a[i];
		}
		if(count!=0 || sum%2==0 || dv!=xet) {
			printf("NO\n");
		}	else if(count==0 && sum%2==1 && dv==xet) {
			printf("YES\n");
		}
	}
}
