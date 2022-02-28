#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char str[10000];
		scanf("%s",&str);
		int a[100]={};
		int xet,count=0,dem=0;;
		for(int i=0;i<strlen(str);i++) {
			if(isdigit(str[i])) {
				a[str[i]-'0']++;
			}	else {
				count++;
				break;	
			}
		}
		for(int i=0;i<10;i++) {
			if(a[i]==0){
				dem++;
				break;
			}
		}
		if(count!=0 || str[0]-'0'==0) {
			printf("INVALID\n");
		}	else if(dem!=0) {
			printf("NO\n");
		}	else  printf("YES\n");
	}
}
