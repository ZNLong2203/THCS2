#include<stdio.h>
#define max 20
int x[max];  int n, k;
void Xuatnghiem()  {
    for (int i = 1; i <= k; i++)
        printf ("%d", x[i]);
        printf(" ");
}
void ToHop (int i)  {
    for (int j = x[i-1] + 1; j <= n-k+i; j++)  {
        x[i] = j;
        if (i == k)
            Xuatnghiem();
        else
            ToHop(i+1);
    }
}
int main()  {
	int t;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&k);
    	x[0] = 0;  ToHop(1);
		printf ("\n");
	}
    return 0;  
}
