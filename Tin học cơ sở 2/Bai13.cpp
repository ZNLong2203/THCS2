#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[10000][10000];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				printf("%d",a[i][j]);
			}
		}
	}
}
