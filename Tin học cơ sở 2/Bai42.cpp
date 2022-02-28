#include<stdio.h>
#include<math.h>
int checkprime(int i) {
	int count=0;
	for(int j=0;j<=sqrt(i);j++) {
		if(i%j==0) {
			count++;
			return 0;
		}
	}
	if(i>=2 && count==0) {
		return 1;
	}	else return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b,xet,donvi;
		scanf("%d%d",&a,&b);
		int countprime=0;
		for(int i=a;i<=b;i++) {
			int countdv=0;
			if(checkprime(i)==1) {
				xet=i;
				while(xet>0) {
					donvi=xet%10;
					if(checkprime(donvi)==1) {
						countdv++;
					}
					xet/=10;
				}
				if(countdv!=0) {
					countprime++;
				}
			}
		}
		printf("%d",countprime);
	}
}
