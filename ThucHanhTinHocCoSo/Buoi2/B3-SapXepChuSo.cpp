#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,count,dv,xet;
		scanf("%lld",&n);
		int a[100000];
		int b[100000]={};
		count=0;
		for(int i=0;i<100000;i++) {
			b[i]=-1;
		}
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			while(a[i]>0) {
				xet=0;
				dv=a[i]%10;
				for(int j=0;j<=count;j++) {
					if(dv==b[j]) {
						xet++;
					}
				}
				if(xet==0) {
					b[count]=dv;
					count++;
				}
				a[i]/=10;
			}
		}
		long long temp=0;
		for(int i=0;i<count-1;i++) {
			for(int j=0;j+1<count;j++) {
				if(b[j]>b[j+1]) {
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
		for(int i=0;i<count;i++) {
			printf("%d ",b[i]);
		}
		printf("\n");
	}
}
