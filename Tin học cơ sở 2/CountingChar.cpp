#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char str[10000];
	gets(str);
	int alpha=0;
	int num=0;
	int other=0;
	for(int i=0;i<strlen(str);i++) {
		if(isdigit(str[i])) {
			num++;
		}	else if(isalpha(str[i])) {
			alpha++;
		}	else {
			other++;
		}
	}
	printf("%d %d %d",alpha,num,other);
}
