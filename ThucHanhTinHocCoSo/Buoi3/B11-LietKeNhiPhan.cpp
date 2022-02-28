#include<stdio.h>
#include<math.h>
void gen(int A[], int n) {
    A[n-1]++;
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++) {
    	printf("%d",A[i]);	
	}
    printf(" ");
}
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
	    scanf("%d",&n);
	    int A[10000];
	    for (int i = 0; i < n; i++) A[i] = 0;
	    for (int i = 0; i < pow(2, n); i++) {
	        xuat(A, n);
	        gen(A, n);
	    }	
	    printf("\n");
	}
}
