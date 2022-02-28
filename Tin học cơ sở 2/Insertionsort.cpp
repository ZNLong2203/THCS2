#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	int b[10000]={};
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++) {
		b[i]=a[i];
		int temp;
		if(i>=1) {
			for(int j=0;j<=i;j++) {
				for(int k=0;k+1<=i;k++) {
					if(b[k]>b[k+1]) {
						temp=b[k];
						b[k]=b[k+1];
						b[k+1]=temp;
					}
				}
			}	
		}
		printf("Step %d: ",count);
		for(int s=0;s<=i;s++) {
			printf("%d ",b[s]);
		}
		count++;
		printf("\n");
	}
}
