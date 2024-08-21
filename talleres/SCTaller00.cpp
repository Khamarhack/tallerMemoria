/**************************|
|* Fecha: 21 de agosto 2024|
|* Autor: Santiago Camargo | 
|* Tema: Taller 01	   |		
|* Estructuras de datos    |
**************************/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
	struct Cliente{
		string nombre;
		string direccion;
		double montoTotal;
	};
	void capturarDatos(Cliente *cliente){
		cout<<"Ingrese el nombre del cliente: ";
		getline(cin, cliente->nombre);
		cout<<"ingrese la dirección del cliente: ";
		getline(cin, cliente->direccion);
		cout <<"Ingrese el monto total de la factura: ";
		cin>>cliente->montoTotal;
		cin.ignore();
	}
	void imprimirFactura(Cliente *cliente, const string &nombreFichero){
		ofstream Factura(nombreFichero);
		if(Factura.is_open()){
			Factura<<"Factura del cliente"<<endl;
			Factura<<"Factura del cliente"<<endl;
			Factura<<"Factura del cliente"<<endl;
			Factura<<"Factura del cliente"<<endl;
			Factura.close();
			cout<<"Factura escrita en "<<nombreFichero<<endl;
			}else{
				cout<<"No se pudo abrirel archivo."<<endl;
			}
		}
	
int main(){
	Cliente cliente;
	string nombreFichero="factura.txt";
	capturarDatos(&cliente);
	imprimirFactura(&cliente, nombreFichero);
	return 0;
	
	
	
}
	
