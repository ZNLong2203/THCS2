#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int test=1;
	while(t--) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[100][100];
		int b[100][100]={};
		int c[100][100];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				scanf("%d",&a[i][j]);
				b[j][i]=a[i][j];
			}
		}	
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				int sum=0;
				for(int k=0;k<m;k++) {
					sum+=a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}	
		printf("Test %d:\n",test);
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}	
		test++;
	}
}
