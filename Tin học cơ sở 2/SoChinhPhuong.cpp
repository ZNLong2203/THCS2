#include<stdio.h>
#include<math.h>
int main() {
	float m,n;
	scanf("%f%f",&m,&n);
	int count=0;
	long long sqr;
	int a[100000]={};
	m=round(sqrt(m)+0.5);
	n=sqrt(n);
	for(int i=m;i<=n;i++) {
		a[count]=i*i;
		count++;
	}
	printf("%d\n",count);
	for(int i=0;i<count;i++) {
		printf("%lld\n",a[i]);
	}
}
