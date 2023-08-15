#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int even=0;
	int odd=0;
	while(n){
		int num = n%10;
		if(num%2==0){
			even += num;
		}
		else{
			odd += num;
		}
		n /= 10;
	}

	cout<<even<<" "<<odd;
	
}
