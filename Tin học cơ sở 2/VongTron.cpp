#include<stdio.h>
#include<string.h>
int main() {
	char str[10000];
	gets(str);
	int count=0;
	for(int i=0;i+1<strlen(str);i++) {
		if(str[i]==str[i+1]) {
			count++;
		}
	}
	count=(26-count);
	printf("%d ",count);
	count=(count*(count-1))/2;
	printf("%d",count);
}
