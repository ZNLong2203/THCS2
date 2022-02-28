#include<stdio.h>
#include<math.h>
int checkprime(int n) {
	int count=0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			count++;
			break;
		}
	}
	if(count==0 && n>=2) {
		return 1;
	} else return 0;
}

int checkpal(int n) {
	if(checkprime(n)==1) {
		int xet,somoi;
		somoi=0;
		while(n>0) {
			xet=n%10;
			somoi=somoi*10+xet;
			n/=10;
		}
		return somoi;	
	}
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int a,b;
		scanf("%d%d",&a,&b);
		int dem=0;
		int temp,xet;
		for(int i=a;i<=b;i++) {
			if(checkpal(i)==i) {
				dem++;
				printf("%d ",i);
				if(dem%10==0) {
				printf("\n");
				}
			}	
		}
		printf("\n");
	}
}
