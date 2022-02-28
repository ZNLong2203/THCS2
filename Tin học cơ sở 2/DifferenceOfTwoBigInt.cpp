#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str1[10000];
		char str2[10000];
		gets(str1);
		gets(str2);
		int dema=strlen(str1);
		int demb=strlen(str2);
		int a[10000]={};
		int b[10000]={};
		int c[10000]={};
		if(dema>demb) {		//Nhap String Vao Mang
			for(int i=0;i<dema;i++) {
				a[i]=str1[i]-'0';
				if(i<demb) {
					b[i]=str2[i]-'0';	
				}
			}	
		} else {
			for(int i=0;i<demb;i++) {
				b[i]=str2[i]-'0';
				if(i<dema) {
					a[i]=str1[i]-'0';	
				}
			}	
		}
		if(dema>demb) {		//Truong hop Str1>Str2
			int x=0;
			for(int i=dema-1;i>=0;i--) {
				if(a[i]-b[demb-1-x]>=0) {
					c[i]=a[i]-b[demb-1-x];
					x++;
				}	else {
					c[i]=10+a[i]-b[demb-1-x];
					a[i-1]--;
					x++;
				}
			}	
			int i=0;
			if(c[0]==0) {
				i=1;		
			}
			for(i;i<dema;i++) {
				printf("%d",c[i]);
			}	
			printf("\n");
		}	else if(dema<demb) {	//Truong Hop Str2>Str1
				int x=0;
				for(int i=demb-1;i>=0;i--) {
					if(b[i]-a[dema-1-x]>=0) {
						c[i]=b[i]-a[dema-1-x];
						x++;
					}	else {
						c[i]=10+b[i]-a[dema-1-x];
						b[i-1]--;
						x++;
					}
				}	
				int i=0;
				if(c[0]==0) {
					i=1;		
				}
				for(i;i<demb;i++) {
					printf("%d",c[i]);
				}	
				printf("\n");
		}	else {		//Truong hop Str1=Str2
			int counta=0;
			int countb=0;
			for(int i=0;i<dema;i++) {
				if(a[i]>b[i]) {
					counta++;
					break;
				}	else if(b[i]>a[i]) {
					countb++;
					break;
				}
			}
			if(counta>countb) {		//So cua Str1>Str2
				for(int i=dema-1;i>=0;i--) {
					if(a[i]-b[i]>=0) {
						c[i]=a[i]-b[i];
					}	else {
						c[i]=10+a[i]-b[i];
						a[i-1]--;
					}
				}	
			}	else {		//So cua Str1<=Str2
				for(int i=demb-1;i>=0;i--) {
					if(b[i]-a[i]>=0) {
						c[i]=b[i]-a[i];
					}	else {
						c[i]=10+b[i]-a[i];
						b[i-1]--;
					}
				}
				int i=0;
				if(c[0]==0) {
					i=1;		
				}
				for(i;i<demb;i++) {
					printf("%d",c[i]);
				}	
				printf("\n");	
			}
		}
	}
}
