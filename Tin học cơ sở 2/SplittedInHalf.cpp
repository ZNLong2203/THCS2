#include <stdio.h>
#include <string.h>
typedef long long ll;

int main(){
    int t; 
	scanf("%d\n", &t);
    while(t--){
        char a[18];
        gets(a);
        int check = 1;
        for(int i = 0; i< strlen(a); i++){
            if(a[i] == '1' ) a[i] = '1';
            else if(a[i] == '0' || a[i] == '8' || a[i] == '9') a[i] = '0';
            else check = 0;
        }
        if(check != 0){
            int j = 0;
            while(a[j] == '0'){
                j++;
            }
            if(j == strlen(a)){
            	printf("INVALID");
			}
			else{
	            for(int i = j; i< strlen(a); i++){
	                printf("%c", a[i]);
	            }
			}
        }
        else printf("INVALID");
        printf("\n");
    }
}
