#include<stdio.h>
#include<stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[100];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    bool dtang = true;
    bool dgiam = true;
    for (int i=1;i<n;i++) {
        if(a[i] >= a[i-1]) {
            dtang =false;
        }
        if(a[i] <= a[i-1]) {
            dgiam =false;
        }
    }
    if (dtang==false && dgiam==false) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}