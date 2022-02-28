#include<stdio.h>
int main() {
	int a,b;
	int xet1,xet2;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b-1;i++) {
		for(int j=a+1;j<=b;j++) {
			int count=0;
			if(i<j) {
				xet1=i;
				xet2=j;
				while(xet1>0 && xet2>0) {
					if(xet1>xet2) {
						xet1-=xet2;
					} else {
						xet2-=xet1;
					}
					if(xet1==xet2 && xet1!=1) {
						count++;
					}
				}
				if(count==0) {
					printf("(%d,%d)",i,j);
					printf("\n");
				}
			}
		}
	}
}
