#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

void Sol(int d){
    int res=3,n=d,pos=100;
    while(res--)
    {
        {if(n>=pos) {
            int r=n/pos;
            printf("%d",r);
            n=n-pos*r;
        }
        else printf("0");
        }
        pos/=10;
    }
    printf(" ");
}
void Hoten(char *s1){
    char a[105][105];
    	int n=0;
		char *token;
		token = strtok(s1," ");
		while(token != NULL){
			strcpy(a[n],token);
			a[n][0] = toupper(a[n][0]);
			for(int j = 1 ; j < strlen(a[n]) ; j++){
				a[n][j] = tolower(a[n][j]);
			}
			n++;
			token = strtok(NULL," ");
		}
		for(int i = 0 ; i < n ; i++) {
			printf("%s ",a[i]);
		}
}
void Lop(char *s2){
        for(int i = 0 ; i < strlen(s2) ;i++) {
            printf("%c",s2[i]);
        }
        printf(" ");
}
void Ngaysinh(char *s3){
        char *token1,b[105][105],d=0;
		token1 = strtok(s3,"/");
		while(token1!=NULL){
			strcpy(b[d],token1);
			d++;
			token1 = strtok(NULL,"/");
		}
		int dem = 1 ;
		for(int i = 0 ; i < d ; i++) {
            char *pos = b[i];
			{
                if(strlen(pos)==1) printf("0") ;
            }
            if (dem < d) printf("%s/",b[i]);
            else printf("%s ",b[i]);
            dem++;
		}
        printf(" ");

}
void GPA(float diem){
    printf("%0.2f\n",diem);
}
int main(){
	//freopen("input.txt","r",stdin);
   	//freopen("output.txt","w",stdout);
    int t,d=1;
    scanf("%d",&t);
    getchar();
    while(t--){
        char s1[105],s2[105],s3[105];
        float diem ;
        gets(s1);
        gets(s2);
        gets(s3);
        scanf("%f",&diem);
        printf("B20DCCN");
        Sol(d);
        Hoten(s1);
        Lop(s2);
        Ngaysinh(s3);
        GPA(diem);
        d++;
        getchar();
    }
	return 0;
}
