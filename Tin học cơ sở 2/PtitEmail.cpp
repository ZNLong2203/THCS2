#include<stdio.h>
#include<string.h>
int main() {
	char str[10000];
	gets(str);
	char print[10000];
	int count=0;
	for(int i=0;i<strlen(str);i++) {
		if(str[i]==' ' && str[i+1]!=' ') {
			count++;
		}
	}
	count--;
	print[0]=str[0];
	int dem=1;
	for(int i=0;i<strlen(str);i++) {
		if(str[i]==' ' && str[i+1]!=' ') {
			if(count==0){
				for(int j=i+1;j<strlen(str);j++) {
					print[dem]=str[j];
					dem++;
				}	
			} else {
				print[dem]=str[i+1];
				dem++;
			}
			count--;
		}
	}
	printf("%s@ptit.edu.vn",print);
}

