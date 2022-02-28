#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	int so=1;
	while(t--) {
		int n;
		int count=0;
		scanf("%d",&n);
		int a[10000];
		int b[10000]={};
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		int max=a[0];
		for(int i=1;i<n;i++) {
			if(a[i]>max) {
				max=a[i];
			}
		}
		for(int j=0;j<n;j++) {
			b[a[j]] ++;
		}
		printf("Test %d:\n",so);
		for(int k=0;k<n;k++) {
			if(b[a[k]]!=0) {
				printf("%d appears %d times\n",a[k],b[a[k]]);
				b[a[k]]=0;
			}
		}
		so++;
	}
}

