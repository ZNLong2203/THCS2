#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,temp;
		scanf("%d%d",&n,&m);
		int a[100000];
		int b[100000];
		int count=0;
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<m;i++) {
			scanf("%d",&b[i]);
		}
		for(int i=n;i<m+n;i++) {
			a[i]=b[i-n];
		}
		temp=0;
		for(int i=0;i<n+m-1;i++) {
			for(int j=0;j+1<n+m;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n+m;i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
	}
}
