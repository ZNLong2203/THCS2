#include<stdio.h>
int main() {
	int n,xet;
	scanf("%d",&n);
	int count=1;
	int xetle=0;
	for(int i=0;i<n;i++) {
		xet=count+i;
		for(int j=0;j<=i;j++) {
			if(i%2==1) {
				printf("%d ",xet);
				xet--;
				xetle++;
			} else {
				if(xetle!=0) {
					count=xet;
				}
				xetle=0;
				printf("%d ",count);
				count++;
			}
		}
		printf("\n");
	}
}
