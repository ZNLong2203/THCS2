#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int a[10000];
	int so1=0;a[1]=0;
	int so2=1;a[2]=1;
	int so=so1+so2;a[3]=1;
	int dem=4;
	int i=0;
	while(3+i!=n*n) {
		so1=so2;
		so2=so;
		so=so1+so2;
		a[dem]=so;
		dem++;
		i++;
	}
	int b[100][100];
	int count=1,s=0;
	for(int i=1;i<n;i++) {
		int hang=i-1,cot=i-1;
		while(hang>=i-1 && cot >=i-1 && hang<n-i+1 && cot<n-i+1) {
			b[hang][cot]=a[count];
			cot++;
			count++;
			if(count>n*n) {
				s++;
				break;
			}
		}
		if(s!=0) {
			break;
		}
		cot--;
		hang++;
		while(hang>=i-1 && cot >=i-1 && hang<n-i+1 && cot<n-i+1) {
			b[hang][cot]=a[count];
			hang++;
			count++;
			if(count>n*n) {
				s++;
				break;
			}
		}
		if(s!=0) {
			break;
		}
		hang--;
		cot--;
		while(hang>=i-1 && cot>=i-1 && hang<n-i+1 && cot<n-i+1) {
			b[hang][cot]=a[count];
			cot--;
			count++;
			if(count>n*n) {
				s++;
				break;
			}
		}
		if(s!=0) {
			break;
		}
		cot++;
		hang--;
		while(hang>=i && cot>=i-1 && hang<n-i+1 && cot<n-i+1) {
			b[hang][cot]=a[count];
			hang--;
			count++;
			if(count>n*n) {
				s++;
				break;
			}
		}
		if(s!=0) {
			break;
		}
		hang++;
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
