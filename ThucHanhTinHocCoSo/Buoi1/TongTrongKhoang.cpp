#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,k;
		scanf("%d%d",&n,&k);
		int a[100000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		while(k--) {
			int x,y;
			scanf("%d%d",&x,&y);
			int tong=0;
			for(int i=x-1;i<y;i++) {
				tong+=a[i];
			}
			printf("%d\n",tong);
		}
	}
}
