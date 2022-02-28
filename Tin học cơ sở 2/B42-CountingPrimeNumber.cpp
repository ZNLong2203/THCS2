#include<stdio.h>
#include<math.h>
int checkprime(int n) {
	int count=0;
	if(n>=2) {
		for(int i=2;i<=sqrt(n);i++) {
			if(n%i==0) {
				count++;
			}
		}
		if(count==0) {
			return 1;
		} else return 0;
	} else return 0;
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b,xet,dv;
		scanf("%d%d",&a,&b);
		int arr[10000];
		int countprime=0;
		for(int i=a;i<a+10;i++) {
			int dem=0;
			for(int j=2;j<=sqrt(a);j++) {
				if(i%j==0) {
					dem++;
				}
			}
			if(dem==0 && i>2) {
				xet=i;
				break;
			}
		}
		for(int i=xet;i<=b;i+=2) {
			if(checkprime(i)==1) {
				xet=i;
				int test=0;
				while(xet>0) {
					dv=xet%10;
					if(checkprime(dv)==0) {
						test++;
					}
					xet/=10;
				}
				if(test==0) {
					countprime++;
				}
			}
		}
		printf("%d\n",countprime);
	}	
}
