/**************************|
|* Fecha: 21 de agosto 2024|
|* Autor: Santiago Camargo | 
|* Tema: Taller 01	   |		
|* Estructuras de datos    |
**************************/
#include<iostream>
#include<ctime>
#include<cstdlib>


using namespace std;
struct venta{
	int cantidad;
	double precio;
};
int numAleatorio(){

	return rand()%26;
	

}
int main(){
	
	
	//se crea un arreglo de 10 elementos
	int Array[10];
	
	//se crea el puntero (tipo entero)
	int *puntero;
	//se crea la semilla
	srand (time(0));
	
	
	
	//llenar el array con numeros aleatorios
	for(int i=0; i<10; i++){
		Array[i]=numAleatorio();
	}
	cout<<"Contenido del array"<<" ";
	puntero=Array;
	//se imprime usando el puntero
	for(int i=0; i<10;i++){
		cout<<"Valores en Array: "<<*puntero++<<"     "<<(puntero+i)<<" "<<endl;
		}

	cout<<endl;
	return 0;
	
	
}
	
