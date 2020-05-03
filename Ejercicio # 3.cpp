
#include <fstream>
#include <iostream>

using namespace std;

int main(){
	char modelo; 
	int edad;     
	char color;   
	float precio; 
	
	string s;    
	int lineas;
	char lmodelo;
	int ledad;     
	char lcolor;   
	float lprecio; 
	
	cout<<"Datos para poliza de vehiculos:  "<<endl;
	cout<<"\nIngrese Modelo de Vehiculo:  "<<endl;
	cin>>modelo;
	cout<<"Ingrese Color de Vehiculo:  "<<endl;
	cin>>color;
	cout<<"Ingrese Edad del Conductor:  "<<endl;
	cin>>edad;

	modelo=toupper(modelo);
	color =toupper(color);
	if (modelo=='A'){
		if (color=='B')
			precio= 240.50;			
		else if (color=='M')
			precio=330.00;			
		else if (color=='O')
			precio=270.50;			
	}
	else if (modelo=='B'){
		if (color=='B')
			precio= 300.00;
		else if (color=='M')
			precio=360.50;
		else if (color=='O')
			precio=330;
	}
	else
		cout<<"Modelo Incorrecto";

	if (edad>=18 && edad < 31)
		precio= precio + (precio*0.25);
	else if (edad>65 && edad <= 80)
		precio= precio + (precio*0.30);
	
	cout.precision(5);
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Color:  "<<color<<endl;
	cout<<"Edad:   "<<edad<<endl;
	cout<<"\nPrecio de la poliza a pagar:  "<<precio;

	ofstream miarchivo;
	system("PAUSE");
	try {
		miarchivo.open("seguro.txt",ios::out);
		miarchivo<<modelo<<"\t"<<color<<"\t"<<edad<<"\t"<<precio<<endl;
		miarchivo.close();
		cout<<"Datos grabados en el archivo";
	}
	catch(exception X){
		cout<<"Error al grabar en el archivo";
		system("PAUSE");
	} 
	ifstream salidaarchivo; 
	salidaarchivo.open("seguro.txt",ios::in);
	salidaarchivo>>lmodelo>>lcolor>>ledad>>lprecio;	
	salidaarchivo.close();
	
	cout<<lmodelo<<lcolor<<ledad<<lprecio;

	}

