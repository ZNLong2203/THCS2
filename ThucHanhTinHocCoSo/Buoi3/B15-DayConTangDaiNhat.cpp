#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int temp=0;
		int count=1;
		int countmax=1;
		for(int i=0;i<n;i++) {
			count=0;
			for(int j=i;j+1<n;j++) {
				if(a[j]<a[j+1]) {
					count++;
				}
			}
			if(count>countmax) {
				countmax=count;
			}
		}
		printf("%d\n",countmax);
	}
}
