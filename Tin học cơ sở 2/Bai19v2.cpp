#include<stdio.h>
#include<math.h>
int main() {
	long long m,n;
	scanf("%lld%lld",&m,&n);
	int count=0;
	int a[100]={};
	for(int i=m;i<=n;i++) {
		long long sqr= sqrt(i);
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

