#include<stdio.h>
#include<string.h>
#include<ctype.h>
void count(char s[100][20], char size){
	int m=0;
	int count=0;
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(strcmp(s[i],s[j])==0)	count++;
		}
		for(int k=0;k<i;k++){
			if(strcmp(s[i],s[k])==0){
				m=1;
				break;
			}
		}
		if(m==0)
		printf("%s %d \n",s[i],count);
		count=0;
		m=0;
	}
}
void split(char s[]){
	char res[100][20];
	int i=0;
	char *p;
	const char delim[]=" ,.;:\t\n";
	for(p=strtok(s,delim);p!=NULL;p=strtok(NULL,delim)){
		strcpy(res[i],p);
		i++;
	}
	count(res,i);
}

int main(){
	char s[1000];
	gets(s);
	for(int i=0;i<strlen(s);i++) {
		if(isupper(s[i])) {
			s[i]+=32;
		}
	}
	split(s);
	return 0;
}
