#include <stdio.h>
#include <math.h>
int checkprime(int n) {
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            return 0;
        }
    }
    if (n>=2){
        return 1;
 	}
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--){
        int n;
        scanf("%d",&n);
        int count = 0;
        int a[10000];
        for(int i=0;i<n;i++) {
        	scanf("%d",&a[i]);
        	if(checkprime(a[i])==1) {
        		count++;
        		printf("%d ",a[i]);
			}
		}
		if(count==0) {
			printf("-1");
		}
    	printf("\n");
    }
}
