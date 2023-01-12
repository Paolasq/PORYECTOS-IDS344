/*
LaHora.cpp

ASUNTOS: La profesora explicaba a sus alumnos las propiedades de los numeros enteros. Les mostro como el 
numero 8833 es igual a 88^2 + 33^2 y prosiguo su clase. Como es habitual Gleidy no prestaba atencion,
asi advirtio que la hora que marcaba el reloj sin coma mostraba la misma propiedad, esto quiere decir que el cuadrado de
los numeros que indicaba la hora al cuadrado mas los que indicaban los minutos al cuadrado daba el numero sin coma.
AUTOR: Paola Saldaña 1104081

ASIGNATURA: IDS344 Estructura de Datos y Algoritmos
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;



	int main(){
		
		int n = 0;
		int Numero = 0;
		int ValorHoras = 0;
		int ValorMinutos = 0;
		 
		for (int i = 0; i < 24; i++){ 
			for(int j = 0; j < 60; j++ ){
				
				if(i*i + j*j == (i *100) +j){
				   cout << "El numero con la mayor cadena es: " << i <<":"<< j <<endl;
					
					
				}
				

		
				
				
			}
		} return 0;
		


	}
