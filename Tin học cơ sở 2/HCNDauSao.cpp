#include<stdio.h>
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int min,max;
	if(n>m) {
		max=n;
		min=m;
	}	else {
		max=m;
		min=n;
	}
	for(int i=1;i<=min;i++) {
		for(int j=1;j<=max;j++) {
			if(i==1 || i==min || j==1 || j==max) {
				printf("*");
			}	else printf(" ");
		}
		printf("\n");
	}
}
