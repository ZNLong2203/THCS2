#include <stdio.h>

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int a[4][3];
		for(int i = 0; i< 4; i++){
			for(int j = 0; j< 3; j++){
				scanf("%d", &a[i][j]);
			}
		}
		int ab1 = a[1][0] - a[0][0], ab2 = a[1][1] - a[0][1], ab3 = a[1][2] - a[0][2];
		int ac1 = a[2][0] - a[0][0], ac2 = a[2][1] - a[0][1], ac3 = a[2][2] - a[0][2];
		int ad1 = a[3][0] - a[0][0], ad2 = a[3][1] - a[0][1], ad3 = a[3][2] - a[0][2];
		int abc1 = ab2*ac3 - ac2*ab3;
		int abc2 = ab3*ac1 - ac3*ab1;
		int abc3 = ab1*ac2 - ac1*ab2;
		int abcd = abc1*ad1 + abc2*ad2 + abc3*ad3;
		if(abcd == 0) printf("YES\n");
		else printf("NO\n");
	}
}
