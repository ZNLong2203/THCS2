#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int n;
	scanf("%d\n",&n);
	while(n--) {
		char str1[10000];
		gets(str1);
		char str2[10000];
		int dem=(int)strlen(str1);
		int somoi=0;
		int count=0;
		for(int i=dem-1;i>=0;i--) {
			str2[dem-i-1]=str1[i];
			if(str1[i]%2!=0) {
				count++;
				break;
			}
		}
		if(strcmp(str1,str2)==0 && count==0) {
			printf("YES\n");
		}	else printf("NO\n");
	}
}
