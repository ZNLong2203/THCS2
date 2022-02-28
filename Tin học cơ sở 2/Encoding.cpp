#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[10000];
		gets(str);
		char xet=str[0];
		int count=1;
		for(int i=1;i<strlen(str);i++) {
			if(str[i]==xet) {
				count++;
			}	else {
				printf("%c%d",str[i-1],count);
				count=1;
				xet=str[i];
			}
		}
		printf("%c%d\n",str[strlen(str)-1],count);
	}
}
