#include<stdio.h>
#include<math.h>
int soNT(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
 int n;
    scanf("%d", &n);
    int dem = 1; 
    int i = 2;  
    while (dem <= n) {
        if (soNT(i)==1) {
            printf("%d\n", i);
            dem++;
        }
        i++;
    }
}

