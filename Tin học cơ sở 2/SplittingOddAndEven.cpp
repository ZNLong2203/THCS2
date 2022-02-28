#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	int b[10000];
	int c[10000];
	int countodd=0;
	int counteven=0;
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if(a[i]%2==0) {
			b[counteven]=a[i];
			counteven++;
		} else {
			c[countodd]=a[i];
			countodd++;
		}
	}
	for(int i=0;i<counteven;i++) {
		printf("%d ",b[i]);
	}
	printf("\n");
	for(int i=0;i<countodd;i++) {
		printf("%d ",c[i]);
	}
}
