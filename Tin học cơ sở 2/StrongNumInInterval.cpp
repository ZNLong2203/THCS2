#include<stdio.h>
int check(int n) {
	int xet;
	int tong=0;
	while(n>0) {
		int tich=1;
		xet=n%10;
		for(int i=2;i<=xet;i++) {
			tich*=i;
		}
		tong+=tich;
		n/=10;
	}
	return tong;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int min,max;
	if(a>b) {
		max=a;
		min=b;
	}	else {
		max=b;
		min=a;
	}
	int temp,xet;
	for(int i=min;i<=max;i++) {
		temp=i;
		if(check(temp)==i) {
			printf("%d ",i);
		}
	}
}
