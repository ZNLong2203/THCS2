#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int count=0;
		int n;
		scanf("%d",&n);
		int a[1000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++) {
			if(a[i]!=a[n-1-i]) {
				count++;
			}
		}
		if(count==0) {
			printf("YES");
		}	else printf("NO");
		printf("\n");
	}
}
