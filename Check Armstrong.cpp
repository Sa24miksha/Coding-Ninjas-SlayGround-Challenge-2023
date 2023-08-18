bool checkArmstrong(int n){
	int size = to_string(n).length();
	int temp = n;
	int sum = 0;
	while(n>0){
		int last = n%10;
		last = pow(last,size);
		sum+=last;
		n/=10;
	}
	 if(temp == sum){
		 return true;
	 }
	 else{
		 return false;
	 }
}
