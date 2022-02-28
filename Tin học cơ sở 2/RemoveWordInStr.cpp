#include<stdio.h>
#include<string.h>
int main() {
   char str[100], word[20];
   int i, j, ls, lw, temp, chk=0;
   gets(str);
   gets(word);
   ls = strlen(str);
   lw = strlen(word);
   for(i=0; i<ls; i++) {
      	temp = i;
    	for(j=0; j<lw; j++) {
	        if(str[i]==word[j])
	            i++;
	      	}
        chk = i-temp;
        if(chk==lw) {
        i = temp;
	        for(j=i; j<(ls-lw); j++)
	        	str[j] = str[j+lw];
        ls = ls-lw;
        str[j]='\0';
      }
   }
   printf("%s", str);
}
