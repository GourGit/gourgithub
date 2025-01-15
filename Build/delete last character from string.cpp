#include<iostream>
using namespace std;
int main(){
	string name;
	cout<<"Enter String: "<<endl;
	getline(cin,name);
	cout<<"\n"<<endl;
	cout<<"You entered: "<<endl;
	cout<<name<<endl;
	cout<<"\n"<<endl;
	//Delete last character from string
	cout<<"The string after deleting the last character: "<<endl;
	name.pop_back();
	cout<<name<<endl;
	return 0;
}