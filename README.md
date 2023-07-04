#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int opc; 

cout<<"Si quiere ingersar el nombre y el apellido, escriba 1. Si quiere ingresar las notas, escriba 2."<<endl;

cin>>opc;

switch(opc){


 
case 1:
	
string nombre[];

cout<<"Escriba un nombre"<<endl;

cin>>nombre[];

cout<<nombre;
break;

case 2:  

int notas[];

cout<<"Ingrese las notas"<<endl;

cin<<notas[];
	 
break;	 
	     default: 
		 cout<<"Esta opcion no es valida"; 
		 break; 	   

  }
}
