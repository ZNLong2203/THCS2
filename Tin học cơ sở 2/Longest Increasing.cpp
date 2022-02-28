#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,k;
		scanf("%d",&n);
		int a[100000];
		int b[100]={};
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int count=1;
		int countkl=1;
		for(int i=0;i+1<n;i++) {
			if(a[i]<a[i+1]){
				count++;
				if(countkl<count) {
					countkl=count;
					k=i+1;
				}
			}	else {
				count=1;
			}
		}
		count=1;
		int demb=0;
		for(int i=0;i+1<n;i++) {
			if(a[i]<a[i+1]){
				count++;
				if(countkl==count) {
					b[demb]=i+1;
					demb++;
				}
			}	else {
				count=1;
			}
		}
		printf("\n");
		printf("%d\n",countkl);
		long long sum=0;
		for(int j=0;j<demb;j++) {
			if(b[j]!=0) {
				for(int i=b[j]-countkl+1;i<=b[j];i++) {
					sum+=a[j];
				}		
			}
		}
		printf("%lld",sum);
		printf("\n");
	}
}
