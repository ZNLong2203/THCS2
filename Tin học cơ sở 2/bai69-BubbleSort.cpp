#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[100000];
	int count=1;
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int temp=0;
	for(int i=0;i<n-2;i++) {
		int what=0;
		for(int j=0;j+1<n;j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				what++;
			}
		}
		if(what==0) {
			break;
		}
		printf("Step %d: ",count);
		for(int k=0;k<n;k++) {
			printf("%d ",a[k]);
		}
		printf("\n");
		count++;
	}
}
