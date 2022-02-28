#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		int a[100000];
		int b[100000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
			
		}
		int count=0,xet;
		for(int i=0;i<n;i++) {
			for(int j=i+1;j<n;j++) {
				if(a[i]==a[j]) {
					count++;
					xet=a[i];
					break;
				}
			}
			if(count!=0) {
				break;
			}
		}
		if(count==0) {
			printf("NO\n");
		}	else printf("%d\n",xet);
	}
}
