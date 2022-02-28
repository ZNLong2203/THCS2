#include<stdio.h>
#include<math.h>
int main() {
	int w1,h1,w2,h2,w3,h3;
	scanf("%d%d%d%d%d%d",&w1,&h1,&w2,&h2,&w3,&h3);
	int dt1=w1*h1;
	int dt2=w2*h2;
	int dt3=w3*h3;
	int tongdt=dt1+dt2+dt3;
	int sqr=sqrt(tongdt);
	if(sqr*sqr==tongdt) {
		printf("YES");
	}	else {
		printf("NO");
	}
}
