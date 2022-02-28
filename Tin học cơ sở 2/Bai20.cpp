#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	while(n--) {
		long long t;
		scanf("%lld",&t);
		int countco=0;
		while(t!=0) {
			int pt1 = t%10;
			int pt2 = (t/10)%10;
			if(pt1-pt2<0) {
				countco++;
			} 
			t=t/10;	
		}
		if(countco != 0) {
			printf("NO\n");
		}	
		else {
			printf("YES\n");
		}
	}
}
