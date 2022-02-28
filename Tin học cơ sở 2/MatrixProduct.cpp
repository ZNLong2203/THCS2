#include<stdio.h>
int main() {
	int n,m,p;
	scanf("%d%d%d",&n,&m,&p);
	int a[100][100];
	int b[100][100];
	int c[100][100];
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<p;j++) {
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<p;j++) {
			long long sum=0;
			for(int k=0;k<m;k++) {
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<p;j++) {
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
