#include<stdio.h>
#include<string.h>
char XoaTu(char s[],char s1[]) {
	int len=strlen(s);
	int len2=strlen(s1);
	int i;
	for(i=0;i<len;i++) {
	    if((s[i]==s1[0]) && (s[i+len2-1]==s1[len2-1])) {
	    	int j;
	    for(j=i;j<len;j++) {
	       s[j]=s[j+len2];
	    }
	       s[j+len2]='\0';
	        break;
	    }
	}
	    printf("%s",s);
}
int main() {
	char s[10000];
	char s2[10000];
	int a[10000];
	gets(s);
	gets(s2);
	XoaTu(s,s2);
}
