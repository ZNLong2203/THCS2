#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[100][100];
	int vong=0;
	int so=1;
	int chay=n;
	while(vong<=n) {
		for(int i=vong;i<n;i++) {
			a[vong][i]=so;
			so++;
		}
		for(int i=vong+1;i<n;i++) {
			a[i][n-1]=so;
			so++;
		}
		for(int i=n-2;i>=vong;i--) {
			a[n-1][i]=so;
			so++;
		}
		for(int i=n-2;i>vong;i--) {
			a[i][vong]=so;
			so++;
		}
		vong++;
		n--;
	}
	for(int i=0;i<chay;i++) {
		for(int j=0;j<chay;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
