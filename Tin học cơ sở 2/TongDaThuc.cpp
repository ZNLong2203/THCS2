#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char a[10000]={};
		char b[10000]={};
		gets(a);
		gets(b);
		int mang1[1000];
		int max1=0,max2=0;
		int max3=0,max4=0,max,xet,somoi;
		for(int i=0;i<strlen(a);i++) {
			if(a[i]=='^') {
				xet=i;
				somoi=0;
				while(a[xet-3]!=' ') {
					xet--;
				}
				for(int j=xet+1;j<=i-3;j++) {
					somoi=somoi*10+(a[j]-'0');
				}
				mang1[a[i+1]-'0']+=somoi;
				max1=a[i+1]-'0';
			}
			if(max2<max1) {
				max2=max1;
			}
		}	
		for(int i=0;i<strlen(b);i++) {
			if(b[i]=='^') {
				xet=i;
				somoi=0;
				while(b[xet-3]!=' ') {
					xet--;
				}
				for(int j=xet+1;j<=i-3;j++) {
					somoi=somoi*10+(b[j]-'0');
				}
				mang1[b[i+1]-'0']+=somoi;
				max3=b[i+1]-'0';
			}
			if(max4<max3) {
				max4=max3;
			}
		}	
		if(max4>max2) {
			max=max4;
		}	else max=max2;
		for(int i=max;i>=0;i--) {
			if(mang1[i]!=0) {
				printf("%d*x^%d ",mang1[i],i);	
			}
		}	
	}
}
