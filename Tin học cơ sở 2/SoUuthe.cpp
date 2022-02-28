#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char str[10000];
		scanf("%s",&str);
		int odd=0,even=0;
		int count=0,demodd=0,demeven=0;
		int xet=(int)strlen(str);
		if(xet%2!=0) {
			demodd++;
		} else demeven++;
		for(int i=0;i<strlen(str);i++) {
			if(isdigit(str[i])) {
				if((str[i]-'0')%2==0) {
					even++;
				}	else {
					odd++;
				}
			}	else {
				count++;
				break;	
			}
		}
		if(count!=0 || str[0]-'0'==0) {
			printf("INVALID\n");
		}	else if(demodd!=0 && even<odd) {
			printf("YES\n");
		} 	else if(demeven!=0 && even>odd) {
			printf("YES\n");
		}	else  printf("NO\n");
	}	
}
