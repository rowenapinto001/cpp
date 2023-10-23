#include<bits/stdc++.h>
using namespace std;

int main(){
	//int
	int x = 10;
	//long
	long x = 15;
	cin>> x;

	long long x = 150000000;

	// float, double
	float x = 5.6;
	double y = 5;
	cout<<"value of y: "<< y;

	//string and getline
	string s1;
	string s2;
	cin >> s1>> s2;
	cout<< s1<< " "<<s2;

	string str;
	getline(cin,str);
	cout<< str;

	// char 
	char ch = 'g';
	cin>>ch;
	cout<<ch;

	return 0;
}