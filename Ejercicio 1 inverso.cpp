#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main(){
	
string frase; 

cout<<"Escriba una frase"<<endl;
cin >>frase;
 reverse(frase.begin(), frase.end()); 
 
cout<<"Frase inversa: "<<frase;	

	
} 
