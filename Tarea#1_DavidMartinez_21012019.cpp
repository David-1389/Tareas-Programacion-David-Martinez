

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int peso=0;
	int altura=0;
	int altura2=0;
	float indice=0;

	cout<<"Ingrese el peso del usuario en Kg: " <<endl;
	cin>>peso;
	cout<<"Ingrese la altura del usuario en metros:"<<endl;
	cin>>altura;

	altura2=altura*altura ;
	indice=peso/altura2;
		
	if(indice<18){
        cout<<"Su IBM es de: "<<indice<<endl;
		cout<<"Su IBM indica que su estado es de BAJO PESO" ;
	} else
    	if(indice>=18&&indice<25){
        	cout<<"Su IBM es de:"<<indice<<endl;
			cout<<"Su IBM indica que su estado es NORMAL"<<endl;
        }
        else 
            if(indice>=25&&indice<=30){
            	cout<<"Su IBM es de: "<<indice<<endl;
				cout<<"Su IBM indica que su estado es SOBREPESO"<<endl;
            } else{
                cout<<"Su IBM es de: "<<indice<<endl;
				cout<<"Su IBM indica que su estado es OBESO";
            } 
			
	
    
			return 0;
      
}

