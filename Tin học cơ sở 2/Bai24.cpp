#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int dieukien=2;
	int sum=0;
	while(dieukien<=n) {
		while(n>1) {
			int tich=1;
			if(n%dieukien) {
				n/=dieukien;
				if(n%dieukien!=0) {
					for(int i=2;i<=dieukien;i++) {
						tich*=i;
					}
					sum+=tich;
				}
				dieukien++;
			}	
		}
	}
	printf("%d",sum);
	if(sum+1==n) {
		printf("1");
	}	else printf("0");
}
