#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char nombre[5];
	
	for(int i = 0; i < 5; i++){
		cout<<"Ingrese un nombre: ";
		cin.getline(nombre, 5, '/n');

		cout <<nombre <<endl;
		
    	int distancia = strlen(nombre);
		cout<<"Numero de espacios: " <<distancia <<endl <<endl;
	} 
} 

