#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *fix(char *str) {
	int i=0,j=0;
	while(str[i]) {
		if(str[i]!=' ') {
			if(isupper(str[i])) {
				str[i]+=32;
			}
			if(str[i-1]==' ') {
				if(islower(str[i])) {
					str[i]-=32;
				}
			}
			str[j]=str[i];
			j++;
		}
		if(str[i]!=' '&& str[i+1]==' ') {
			str[j]=' ';
			j++;
		}
		i++;
	}
	if(islower(str[0])) {
		str[0]-=32;
	}
	str[j]='\0';
	return str;
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[10000];
		gets(str);
		printf("%s\n",fix(str));
	}
}
