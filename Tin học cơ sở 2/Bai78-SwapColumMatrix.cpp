#include<stdio.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[100][100];
	int b[100][100]= {};
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int x,y,count;
	scanf("%d%d",&x,&y);
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			count=0;
			if(j==x-1) {
				j=y-1;
				printf("%d ",a[i][j]);
				j=x-1;
				count++;
			}
			if(j==y-1) {
				j=x-1;
				printf("%d ",a[i][j]);
				j=y-1;
				count++;
			}
			if(count==0) {
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
}
