#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		char chuoi[10000];
		gets(chuoi);
		int count=0;
		for(int i=0;i<strlen(chuoi);i++) {
			if(chuoi[i]== ' ' && chuoi[i+1]!= ' ') {
				count++;
			}	else if(chuoi[i]== ' ' && chuoi[i+1]== ' ') {
				break;
			}
		}
		printf("%d",count);
	}
}
