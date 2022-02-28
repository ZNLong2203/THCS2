#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[100][100];
	for(int i=0;i<n;i++) {
		for(int j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++) {
		
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<3;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
