#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793238
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		float x1,y1,x2,y2,x3,y3;
		scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
		float a=sqrt(abs(x1-x2)*abs(x1-x2)-abs(y1-y2)*abs(y1-y2));
		float b=sqrt(abs(x2-x3)*abs(x2-x3)-abs(y2-y3)*abs(y2-y3));
		float c=sqrt(abs(x1-x3)*abs(x1-x3)-abs(y1-y3)*abs(y1-y3));
		if(a+b<=c || a+c<=b || b+c<=a) {
			printf("INVALID");
		}
		int s=1/4*(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b)));
		int r=(a+b+c)/4s;
		float dt=PI*r*r;
		printf("%f",dt);
	}
}
