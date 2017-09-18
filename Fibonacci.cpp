#include <iostream>
using namespace std;

long long Fibonacci(int n){
	if (n == 0){
	   return 0;
	}
	else if(n == 1){
	   return 1;
	}
	else {
	return Fibonacci(n-1)+Fibonacci(n-2);
	}	
} 

int main(){
 cout<<"Please input a integer of Fibonacci:";
 int a;
 cin>>a;
 cout<<"The Fibonacci's n iterm is :"<<Fibonacci(a)<<endl;
 return 0;
}
