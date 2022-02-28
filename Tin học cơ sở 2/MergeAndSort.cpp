#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int count=1;
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		int b[10000];
		int c[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++) {
			scanf("%d",&b[i]);
		}
		int temp;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(b[j]<b[j+1]) {
					temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
			}
		}
		int countA=0;
		int countB=0;
		for(int i=0;i<n+n;i++) {
			if(i%2==0) {
				c[i]=a[countA];
				countA++;
			}	else {
				c[i]=b[countB];
				countB++;
			}
		}
		printf("Test %d:\n",count);
		for(int i=0;i<n+n;i++) {
			printf("%d ",c[i]);
		}
		count++;
		printf("\n");
	}
}
