#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d",&n);
	int dem = 0;
		for(int i=2;i<=n;i++) {
			int count = 0;
			for(int j=2;j<=sqrt(i);j++) {
				if(i%j==0) {
					count++;
				}
			}
			if(count==0) {
				dem++;
				printf("%d\n",i);
			}
			if(i>=n) {
				break;
			}
		}
}
