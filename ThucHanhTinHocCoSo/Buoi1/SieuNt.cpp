#include<bits/stdc++.h>
using namespace std;

int dem(int n){
	int count = 0;
	
	for(int i = 2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}
	return count;
}

int check(int n){
	int count = 0;
	int r;
	while(n!=0){
		r=(n-n%10)/10;
		if(r==1){
			count = 1;
			break;
		}
		for(int i = 2;i<=sqrt(r);i++){
			if(r%i==0){
				count++;
			}
		}
		n/=10;
	}
	return count;
} 

int main(){
	int n;
	int count = 0;
	cin >> n;
	for(int i = 2;i<=n;i++){
		if(dem(i)==0&&check(i)==0) cout << i << " ";
		count++;
	}
	if(count==0) cout << "-1";
	return 0;
}
