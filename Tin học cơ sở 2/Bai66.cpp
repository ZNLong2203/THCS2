#include<stdio.h>
int main() {
	int n,temp;
	scanf("%d",&n);
	int a[100000];
	int count=1;
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("Step %d: ",count);
		for(int i=0;i<n;i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
		count++;
	}
}
