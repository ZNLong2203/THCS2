#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,min,max,xet;
		scanf("%d",&n);
		min=pow(10,n-1);
		max=pow(10,n);
		for(int i=min+1;i<max;i++) {
			int check;
		    int dem=0;
			xet=i;
			while(xet>0) {
				check=xet%10;
				xet/=10;
				if(check-(xet%10)<0) {
					dem++;
					break;
				}
			}
			if(dem==0) {
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
