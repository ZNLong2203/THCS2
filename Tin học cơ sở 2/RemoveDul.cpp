#include<stdio.h>
#include<string.h>
int main() { 
    int in=0,out=0,p=0,len1;
    char str[100]={0},sub_str[100][100]={0};
    gets(str);
    //splitting Input String into sub string
    while(str[p]!='\0') {
        out=0;
        while(str[p]!=' ' && str[p]!='\0') {
            sub_str[in][out]=str[p];
            p++;
            out++;
        }
        sub_str[in][out]='\0';
        in++;
        if(str[p]!='\0') {
            p++;
        }
    }
	len1=in;
    for(in=0;in<len1;in++) {
         for(out=in+1;out<len1;)
            if(strcmp(sub_str[in],sub_str[out])==0) {
             for(p=out;p<len1;p++) {
                strcpy(sub_str[p],sub_str[p+1]);
            }
            len1--;
         }
        else {
            out++;
        }
    }
   for(in=0;in<len1;in++) {
        printf("%s ",sub_str[in]);
    }
}
