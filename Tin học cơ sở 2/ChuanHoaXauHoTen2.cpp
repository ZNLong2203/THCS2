#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[10000];
		char dem[10000];
		char ten[10000];
		gets(str);
		int j=0,k=0;
		int luui;
		for(int i=0;i+1<strlen(str);i++) {
			if(str[i]!=' ') {
				if(islower(str[i])) {
					str[i]-=32;
				}
				dem[j]=str[i];
				j++;
			}
			if(str[i-1]!=' ' && str[i]==' ' && i-1>0) {
				luui=i;
				break;
			}
		}
		dem[j]='\0';
		for(int i=luui+1;i<strlen(str);i++) {
			if(str[i]!=' ' && str[i-1]==' ') {
				if(islower(str[i])) {
					str[i]-=32;
				}
				ten[k]=str[i];
				k++;
			}
			else if(str[i]!=' ') {
				if(isupper(str[i])) {
					str[i]+=32;
				}
				ten[k]=str[i];
				k++;
			}
			if(str[i-1]!=' ' && str[i]==' ') {
				ten[k]=str[i];
				k++;
			}
		}
		if(ten[strlen(ten)-1]==' ') {
			ten[strlen(ten)-1]='\0';
		}
		ten[k]='\0';
		printf("%s, %s\n",ten,dem);
	}
}
