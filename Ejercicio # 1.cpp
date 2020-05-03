
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>

using namespace std;

int main () {
	
	int sueldo_fijo = 2500;		

	int edad; 
	int salario = 2500;
	
	/*
	//variable para bonificacion extrajero
	int salario_total;
	int extranjero;
	*/
	int i;
	int lista_fut;
	char nombre_lista;
	
	cout<<"Numero total de Futbolistas en planilla: \n";
	cin>>lista_fut;
	
	//ciclo
	for (i=0; i<lista_fut; i++ ){
		
		cout<<"Numero del jugador: ";
		cin>>lista_fut[i];
		
		cout<<"Ingrese la edad del jugador: \n";
		cin>>edad;
		if (edad<15)
			cout<<"Jugador muy joven\n "
			
		if (edad>14&&edad<21)
			sueldo = salario + 1400;
		else if (edad>20&&edad<26)
			sueldo = salario + 1500;
		else if (edad>25&&edad<31)
			sueldo = salario + 1200;
		else if (edad>30)
			sueldo = salario + 800;
		
		
			
	return 0;			
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	
	
	cout<<"\t\Bienvendio\n";
	
	
	cout<<"\n\nPor favor Ingrese la edad del jugador :\n";
	cin>>edad;
	cout<<"\n";

	//verificacion de bono por edad
	if (edad<15)
		cout<<"Ingrese una Edad Valida.\n";
	
	if (edad>14){
		if (edad>14&&edad<21)
			salario = sueldo_fijo + 1400;
		else if (edad>20&&edad<26)
			salario = sueldo_fijo + 1500;
		else if (edad>25&&edad<31)
			salario = sueldo_fijo + 1200;
		else if (edad>30)
			salario = sueldo_fijo + 800;
	
			
		cout<<"Sueldo  por bonificacion de edad: "<<endl;
		cout<<salario;
		cout<<"\n";
			
		
		cout<<"\nEl Jugador es Extranjero: "<<endl;
		cout<<"0. No   1. Si\n"<<endl;
		cin>>extranjero;
		cout<<"\n";
			
		//verificacion de bono por nacionalidad
		if (extranjero == 1)
			salario_total = salario + 500;
		else if (extranjero == 0)
			salario_total = salario;
		cout<<salario_total<<endl<<endl;
		
			system("pause");
			system("CLS");
				
		}
	

return 0;
}
*/

