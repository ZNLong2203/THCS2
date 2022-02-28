#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) 
        if (a[i]==2) {
            printf("%d ",a[i]);
        }
        else if (a[i]==3) {
            printf("%d ",a[i]);
        }
        for (int j=2;j <= sqrt(a[i]);j++) {
            if (a[i] % j != 0 ) {
                printf("%d ",a[i]);
            }
        }
    }
}