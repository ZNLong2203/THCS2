#include<stdio.h>

int main() {
    int n;
    printf("Nhap vao so N = ");
    scanf("%d",&n);
    int sum = 0;
    for (int i=0;i<=n/2;i++) {
        if (n % i ==0) {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}