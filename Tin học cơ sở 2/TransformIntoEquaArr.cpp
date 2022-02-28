#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	long long sum2=1000000;
	long long so;
	for(int i=0;i<n;i++) {
		int sum1=0;
		for(int j=0;j<n;j++) {
			if(a[i]!=a[j]) {
				if(a[i]>a[j]) {
					sum1+=a[i]-a[j];
				} else {
					sum1+=a[j]-a[i];
				}
			}
		}
		if(sum1<sum2) {
			sum2=sum1;
			so=a[i];
		}
	}
	printf("%lld %lld",sum2,so);
}
