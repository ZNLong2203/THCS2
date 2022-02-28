#include<stdio.h>
int check(int x,int y) {
	while(x!=y) {
		if(x>y) {
			x-=y;
		} else {
			y-=x;
		}
	}
	if(x==1) {
		return 1;
	}	else return 0;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for(int i=a;i<b;i++) {
		for(int j=i+1;j<=b;j++) {
			if(i<j && check(i,j)==1) {
				printf("(%d,%d)\n",i,j);
			}
		}
	}
}
