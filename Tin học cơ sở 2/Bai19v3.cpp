#include<stdio.h>
#include<math.h>
int main() {
	long long m,n,xet;
	scanf("%lld%lld",&m,&n);
	int count=0;
	long long sqr;
	int a[90000]={};
	for(int i=m;i<=n;i++) {
		sqr=sqrt(i);
		if(sqr*sqr==i) {
			xet=i;
			break;
		}
	}
	for(int i=xet;i<=n;i+=4) {
		sqr=sqrt(i);
		if(sqr*sqr==i){
			a[count]=i;
			count++;
		}
	}
	printf("%d\n",count);
	for(int i=0;i<count;i++) {
		printf("%lld\n",a[i]);
	}
}
