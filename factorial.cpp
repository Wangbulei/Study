#include <iostream>
using namespace std;

int factorial(int n){

	if(n == 0){
	return 1;
	}
	else if (n == 1){
	return 1;
	}
	else{
	return n*factorial(n-1);
	}
}

int main(){
	cout<<"Please input the number of factorial:";
	int a;
	cin>>a;
	if(a < 0){
	cout<<"The number is error!"<<endl;
	}
	else
	cout<<"The result of"<<a<<"'s factorial is:"<<factorial(a)<<endl;
	return 0;
}
