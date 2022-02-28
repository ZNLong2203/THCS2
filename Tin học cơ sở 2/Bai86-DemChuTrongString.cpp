#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[10000];
		gets(str);
		int count=1;
		for(int i=0;i+1<strlen(str);i++) {
			if(str[i]==' ') {
				if(str[i+1]!=' ') {
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}
