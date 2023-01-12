#include "math.h"
#include  <iostream>
#include <stdio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<" ingrese el numero a descomponer: ";
	cin>>n;
	for(int i = 2; n > 1; i++){
		
		int exponente = 0;
		while(n%i == 0){
			
			exponente++; 
			n= n/i; // se obtiene el residuo de la division si non es exacta para seguir dividiendo
			if(n%i != 0){
				
				if(exponente > 1) cout<< i <<"^"<<exponente<<" x ";
				else if(n>1) cout<<i<<"x";
				else cout<<i;
			}
			
		}
	}
	if(n == 1){
		cout<<"x 1";
	}
}
