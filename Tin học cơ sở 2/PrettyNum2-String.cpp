#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int n;
	scanf("%d\n",&n);
	while(n--) {
		char str1[10000];
		gets(str1);
		int dem=(int)strlen(str1);
		int tong=0;
		int count=0;
		int xet;
		if(str1[dem-1]-'0'!=8) {
			count++;
		}
		for(int i=0;i<dem;i++) {
			xet=(int)str1[i]-'0';
			tong+=xet;
			if(count!=0) {
				break;
			}
		}
		if(tong%10==0 && count==0) {
			printf("YES\n");
		}	else printf("NO\n");
	}
}
