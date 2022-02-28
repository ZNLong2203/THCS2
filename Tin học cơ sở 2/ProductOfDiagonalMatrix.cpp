#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int count=1;
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[100][100];
		int b[100][100];
		int c[100][100]={};
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				if(i>=j) {
					a[i][j]=j;
					b[j][i]=j;
				}	else {
					a[i][j]=0;
					b[j][i]=0;
				}
			}
		}	
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				int sum=0;
				for(int k=1;k<=n;k++) {
					sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}	
		printf("Test %d:\n",count);
		count++;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=n;j++) {
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}	
	}
}
