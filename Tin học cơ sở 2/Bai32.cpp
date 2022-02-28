#include<stdio.h>
int main() {
	int a,b,be,lon;
	scanf("%d%d",&a,&b);
	if(a>b) {
		lon = a;
		be = b;
	}	else {
		lon = b;
		be = a;
	}
	for(int i=be;i<=lon;i++) {
	int dem = 0;
	for(int j=1;j<i;j++) {
		if(i%j==0) {
			dem+=j;
		}
	}
	if(dem==i && i!=1) {
		printf("%d ",i);
	}
	}
}


