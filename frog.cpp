#include <iostream>
using namespace std;

long long frog_stair(int n){  //The number of stair;
	if(n == 1){
	return 1;
	}
	if (n == 2){
	return 2;
	}
	else {
	return frog_stair(n-2)+frog_stair(n-1);
	}
}

int main(){
  cout<<"Please input one number of stair:";
  int a;
  cin>>a;
  cout<<"The number of frog to go up stairs is:"<<frog_stair(a)<<endl;
  return 0;
}
