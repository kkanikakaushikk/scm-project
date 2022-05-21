#include <iostream>
using namespace std;
int main() {
	float a,b;
	cout<<"Enter values of a "<<endl;
	cin>>a;
	cout<<"Enter values of b "<<endl;
	cin>>b;
	try{
		if(b==0){
			throw 1;
		}
		float c=a/b;
		cout<<c;
	}
	catch(int a){
		cout<<"division by zero is not possible";
	}
	return 0;
}
