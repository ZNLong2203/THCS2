#include<stdio.h>
#include<math.h>
int check(int n) {
	int count=0;
	for(int i=2;i<=sqrt(n);i++) {
		if(n%i==0) {
			count++;
		}
	}
	if(count!=0 || n<2) {
		return 0;
	}	else return 1;
}
int main() {
	int n,so;
	scanf("%d",&n);
	int a[100][100];
	int b[10000];
	int max1;
	int max2=0;
	for(int i=0;i<n;i++) {
		max1=0;
		for(int j=0;j<n;j++) {
			scanf("%d",&a[i][j]);
			if(check(a[i][j])==1) {
				max1++;
			}	
		}
		if(max2<max1) {
			max2=max1;
			so=i+1;
		}
	}
	printf("%d\n",so);
	for(int i=so-1;i<=so-1;i++) {
		for(int j=0;j<n;j++) {
			if(check(a[i][j])==1) {
				printf("%d ",a[i][j]);
			}
		}
	}
}
