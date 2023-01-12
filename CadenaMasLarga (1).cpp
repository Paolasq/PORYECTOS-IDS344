/*
CadenaMasLarga.cpp
Autor: Paola Saldaña: 1104081
Asunto: programa que calcule la decena de mayor cadena
*/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int CadenaMasLarga(int numero, int pasos){
	
	if(numero == 4) return pasos;
	else if (numero % 2 == 0) numero = numero/2; //si el modulo entre dos es igual a 0, dividir n entre dos
	else numero = (numero * 3) + 1; // si no es igual a cero multiplicar el numero por tres y sumarle uno
	return CadenaMasLarga (numero, pasos +1); //recursividad retornamos la misma funcion dentro de ella 
	
}

	int main(){
		
		int mayorCadena = 0;  //se inicializa la variable para el numero con cadena mas larga
		for (int i = 1; i < 100; i++){ // recorre hasta numeros de dos digitos
			
			if(CadenaMasLarga(i,0) >  mayorCadena) mayorCadena = i;
			 
		}
		
		cout << "El numero con la mayor cadena es: " << mayorCadena;
		
		return 0;
	}
