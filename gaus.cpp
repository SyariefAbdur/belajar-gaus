#include <iostream>
using namespace std;

int main(){
	int a,b,n;
	int m[5][5];
	cout<<"massukkan nilai a = "; cin>>n; 
	
	for(int b=0; b<n; b++ ){
	for(int a=0; a<=n; a++ ){
		cout<<"nilai= "<< b,a; cout<<"=";
		cin>>m[b][a];
	}	
	}
 for(int b=0; b<n; b++ ){
	for(int a=0; a<=n; a++ ){
		cout<< m[b][a]<<""; 
	}
	cout<<endl;
	}
	
}
