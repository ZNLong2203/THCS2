#include<stdio.h>
#include<string.h>
int main() {
	char str[100];
	gets(str);
	int xet;
	xet=(int)str[0]*100;
	xet+=str[1];
	xet=xet%19;
	if(xet==0 || xet==3 || xet==7 || xet==9 || xet==11 || xet==14 || xet ==17) {
		printf("YES");
	}	else printf("NO");
}
