#include<stdio.h>
int main() {
    long long int n;
    scanf("%lld",&n);
    int a[100000];
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                int tt = a[i];
                a[i] = a[j];
                a[j] = tt;
            }
        }
    }
    printf("%d",a[n-1] - a[0]);
    return 0;
}
