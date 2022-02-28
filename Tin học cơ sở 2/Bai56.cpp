#include<stdio.h>
#include<math.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[100];
	int b[100]={};
	int c[100]={};
	int countodd = 0;
	int counteven = 0;
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
		if(a[i]%2==0) {
			b[countodd] = a[i];
			countodd++;
		} else {
			c[counteven] = a[i];
			counteven++;
		}
	}
	for(int j=0;j<countodd;j++) {
		printf("%d ",b[j]);
	}
	printf("\n");
	for(int j=0;j<counteven;j++) {
		printf("%d ",c[j]);
	}
}
