#include<stdio.h>
int main() {
	int n,xet;
	int a[10000];
	int count=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++) {
		xet=i;
		int chiso=0;
		while(xet>0) {
			a[chiso]=xet%10;
			xet/=10;
			chiso++;
		}
		int somoi=0;
		int loai=0;
		for(int j=0;j<chiso;j++) {
			somoi=somoi*10+a[j];
			if(a[j]==9) {
				loai++;
			}
		}
		if(somoi==i && loai==0) {
			printf("%d ",i);
			count++;
		}
	}
	printf("\n");
	printf("%d",count);
}
