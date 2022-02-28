#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long a,b,c,d;
		scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
		while(a!=b) {
			if(a>b) {
				a-=b;
			} else {
				b-=a;
			}
		}
		while(c!=d) {
			if(c>d) {
				c-=d;
			} else {
				d-=c;
			}
		}
		if(a==d) {
			printf("YES\n");
		}	else printf("NO\n");
	}
}
