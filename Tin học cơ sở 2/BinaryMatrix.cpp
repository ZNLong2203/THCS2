#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[n+5][n+5];
	for(int i=0;i<n;i++) {
		for(int j=0;j<3;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	int count=0;
	for(int i=0;i<n;i++) {
		int count1=0;
		int count0=0;
		for(int j=0;j<3;j++) {
			if(a[i][j]==1) {
				count1++;
			}	else count0++;
		}
		if(count1>count0) {
			count++;
		}
	}
	printf("%d",count);
}
