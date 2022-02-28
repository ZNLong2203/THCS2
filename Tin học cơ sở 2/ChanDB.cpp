#include <stdio.h>
int main () {
	int t;
	scanf ("%d",&t);
	while (t--)	{
		long long n;
		scanf ("%lld",&n);
		int count=0;
		while (n > 0 ) {
			int c;
			c = n % 10;
			n /= 10;
			if (c % 2 != 0) {
				count++;
				break;
			}
		}
		if(count==0) {
			printf("YES");
		}	else printf("NO");
		printf ("\n");
	}
}
