#include<stdio.h>
#include<math.h>
int fibocheck(int i) {
	int dv;
	int kq = 0;
	int so1 = 0;
	int so2 = 1;
	int so = so1+so2;
	while(i>0) {
		dv=i%10;
		i/=10;
		kq+=dv;
	}
	while(so<kq) {
		so1=so2;
		so2=so;
		so=so1+so2;
	}
	if(so==kq) {
		return 1;
	} else return 0;
}
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	int xet=-1;
	int min,max;
	if(a<b) {
		max=b;
		min=a;
	} else {
		max=a;
		min=b;
	}
	for(int i=min;i<=max;i++) {
		int count=0;
		for(int j=2;j<=sqrt(i);j++) {
			if(i%j==0) {
				count++;
				break;		
			}
		}
		if(count==0 && i>2){
			xet=i;
			break;
		}
	}
	if(min<=2) {
		printf("2 ");
	}
	for(int i=xet;i<=max;i+=2) {
		int count=0;
		for(int j=2;j<=sqrt(i);j++) {
			if(i%j==0) {
				count++;
				break;	
		 	}
		}
		if(count==0 && fibocheck(i)==1) {
			printf("%d ",i);
		}
	}
}
