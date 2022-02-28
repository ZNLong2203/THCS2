#include<stdio.h>
int n, kq[11], dd[10];
void xuat() {
    for (int j=1; j<=n; j++) {
        printf("%d",kq[j]);
    }
    printf(" ");
}
 
void backtrack(int i) {
    if (i>n) xuat();
    for (int j=1; j<=n; j++){
        if (dd[j]==0) {
            dd[j]=1;
            kq[i]=j;
            backtrack(i+1);
            dd[j]=0;
        }
    }
}
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
    	for (int i=1; i<=9; i++)
        dd[i]=0;
    	backtrack(1);
		printf("\n");
	}
}
