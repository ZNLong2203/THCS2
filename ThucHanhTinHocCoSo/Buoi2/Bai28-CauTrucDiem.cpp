#include<stdio.h>
#include<math.h>
struct Point {
	double x,y;
} a,b;

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		double x1,y1,x2,y2;
		scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
		a.x=x1;
		a.y=y1;
		b.x=x2;
		b.y=y2;
		double khoangcach=sqrt(round((a.x-b.x)*(a.x-b.x))+round((a.y-b.y)*(a.y-b.y)));
		printf("%0.4lf",khoangcach);
		printf("\n");
	}
}
