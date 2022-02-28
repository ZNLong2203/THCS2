#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int dem=1;
	for(int i=0;i<n-1;i++) {
		int min=10000;
		int temp=0;
		int chiso=0;
		int count=0;
		for(int j=i;j<n;j++) {
			if(a[j]<min) {
				min=a[j];
				chiso=j;
				count++;
			}
		}
		if(count==0) {
			break;
		}
		temp=a[i];
		a[i]=min;
		a[chiso]=temp;
		printf("Step %d: ",dem);
		for(int i=0;i<n;i++) {
			printf("%d ",a[i]);
		}
		dem++;
		printf("\n");	
	}
}
