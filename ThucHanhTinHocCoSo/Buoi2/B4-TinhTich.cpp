#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,m,kq,temp;
		scanf("%lld%lld",&n,&m);
		int a[100000];
		int b[100000];
		for(int i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
		for(int i=0;i<m;i++) {
			scanf("%lld",&b[i]);
		}
		temp=0;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(a[j]<a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		temp=0;
		for(int i=0;i<m-1;i++) {
			for(int j=0;j+1<m;j++) {
				if(b[j]>b[j+1]) {
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
		kq=a[0]*b[0];
		printf("%lld",kq);
		printf("\n");
	}
}
