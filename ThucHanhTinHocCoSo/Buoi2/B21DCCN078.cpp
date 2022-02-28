#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[1000];
	    gets(str);
	   	int result[100]={0};
	    int n=0;
	    int count=0;
	    for(int i=0; i<=strlen(str);i++){
	        if(isdigit(str[i])){ 
	        	result[count] *=10;
	            result[count] += (int)str[i]-48;
	            if(not isdigit(str[i+1])) {
	            	count++;
				}
	    	}
	    }
	    int temp=0;
	    for(int i=0;i<count-1;i++) {
	    	for(int j=i+1;j<count;j++) {
	    		if(result[i]<result[i+1]) {
	    			temp =result[i];
	    			result[i]=result[i+1];
	    			result[i+1]=temp;
				}
			}	
		}
		for(int i=0; i<count;i++){
	        printf("%d ",result[i]);
	    }
	    printf("\n");
	}
}

