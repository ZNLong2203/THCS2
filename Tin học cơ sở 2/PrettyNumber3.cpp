#include<stdio.h>
int main() {
	long long a,b,min,max,xet;
	scanf("%lld%lld",&a,&b);
	if(a>b) {
		max=a;
		min=b;
	} else {
		max=b;
		min=a;
	}
	for(int i=min;i<=max;i++) {
		xet=i;
		long long sum=0;
		long long somoi=0;
		long long count=0;
		while(xet>0) {
			somoi=somoi*10+xet%10;
			sum+=xet%10;
			if(xet%10==6){
				count++;
			}
			xet/=10;
		}
		sum=sum%10;
		if(i==somoi && sum==8 && count!=0) {
			printf("%lld ",i);
		}
	}
}

