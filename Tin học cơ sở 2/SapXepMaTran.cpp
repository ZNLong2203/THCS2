#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int count=1;
	while(t--) {
		int n,m;
		scanf("%d%d",&n,&m);
		int a[10000];
		int b[100][100];
		for(int i=0;i<n*m;i++) {
			scanf("%d",&a[i]);
		}
		int temp;
		for(int i=0;i+1<n*m;i++) {
			for(int j=0;j+1<n*m;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		int hang=0;
		int cot=0;
		int dem=0;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				if(i==0 || j==m-1) {
					hang=i;
					cot=j;
					b[hang][cot]=a[dem];
					dem++;
					while(hang<=n-1 && cot<=m-1 && hang>=0 && cot>=0) {
						hang++;
						cot--;
						b[hang][cot]=a[dem];
						if(hang<=n-1 && cot<=m-1 && hang>=0 && cot>=0) {
							dem++;
						}
					}
				}
			}
		}
		printf("Test %d:\n",count);
		count++;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	}
}
