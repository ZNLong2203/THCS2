#include<stdio.h>
#include<math.h>
int main() {
	int x1,y1,x2,y2;
	int x3,y3,x4,y4;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int xet1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));	
	int xet2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));	
	int xet3=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));	
	int xet4=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));	
	int xet5=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
	int xet6=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
	int max=xet1;
	if(xet2>max) {
		max=xet2;
	}		
	if(xet3>max) {
		max=xet3;
	}
	if(xet4>max) {
		max=xet4;
	}
	if(xet5>max) {
		max=xet5;
	}
	if(xet6>max) {
		max=xet6;
	}
	printf("%d",max*max);
}
