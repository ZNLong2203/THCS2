#include<stdio.h>
int main() {
	int a,b;
	float x;
	scanf("%d%d",&a,&b);
	if (a==0) {
		if(b==0) {
		printf("Infinite solutions");
		}  else {
		printf("No solution");
		}
	}  
	else {
		x=(float)-b/a;
		printf("%0.2f",x);
	}
}
