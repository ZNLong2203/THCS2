#include <stdio.h>
int main ()
{
	int n;
	int max1=0,max2=0;
	scanf ("%d",&n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf ("%d",&a[i]);
	}
	for (int i = 0; i < n; i++) {
		if (max1 < a[i]) {
			max2 = max1;
			max1 = a[i];
		}
		if (max1 > a[i] && max2 < a[i]) {
			max2 = a[i];
		}
	}
	printf ("%d %d",max1,max2);
}
