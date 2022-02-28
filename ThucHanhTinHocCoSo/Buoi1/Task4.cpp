#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int l,r;
		int countreal=0;
		scanf("%d%d",&l,&r);
		for(int i=l;i<=r;i++) {
			int count=0;
			if(i<2) {
				count++;
			}
			for(int j=2;j<=sqrt(i);j++) {
				if(i%j==0) {
					count++;
					break;
				}
			}
			if(count==0) {
				countreal++;
			}
		}
		printf("%d",countreal);
		printf("\n");
	}
}
