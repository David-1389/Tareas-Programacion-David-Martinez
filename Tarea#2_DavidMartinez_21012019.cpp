#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>


using namespace std;

int main()
{
    string liga[20]={"Atlético","Barcelona","Real Madrid","Sevilla","R. Sociedad",
                    "Betis","Villarreal","Celta","Athletic","Granada","Osasuna",
                    "Cádiz","Levante","Valencia","Alavés","Getafe","Valladolid",
                    "Huesca","Elche","Eibar"
                    };

    int op,p,puntos,equipo1,equipo2;
    int a=0;
    puntos=0;

    for(int i=0;i<20;i++){

		cout<<i;cout<<".";cout<<liga[i]<<" ";
		cout<<endl;
	}

	cout<<"SELECIONE UN EQUIPO:";cin>>op;


	if(op<0 || op>19){
	    cout<<"OPCION NO VALIDA";cout<<endl;
	    cout<<"SELECIONE UN EQUIPO:";cin>>op;

	}
	else{
		
		cout << "PUNTOS ACUMULADOS:";cin>>puntos;
		
		

        cout << "PARTIDOS PENDIENTES:";cin>>p;

        for(int i=p;i>=1;i--){
                a++;
                equipo1 = rand()%10;
                equipo2 = rand()%10;
                cout<<endl;
                cout<<"*******FECHA******* ";cout<<a<<endl;
                cout<<liga[op];cout<<":";cout<<equipo1;
                cout<<" ";cout<<"VS";cout<<" ";

                if(liga[op]==liga[i]){
                        cout<<liga[i+3];cout<<":";cout<<equipo2;
                        cout<<endl;

                }
                else{
                    cout<<liga[i];cout<<":";cout<<equipo2;
                    cout<<endl;


                }

                if(equipo1>equipo2){
                        puntos=puntos+3;
                        cout<<"       GANADO       "<<endl;

                }
                else if(equipo1<equipo2){

                    cout<<"       PERDIDO       "<<endl;


                }
                if(equipo1==equipo2){
                    puntos=puntos+1;
                    cout<<"       EMPATE       "<<endl;
                }

                cout<<endl;


        }
        cout<<endl;
        cout<<"TOTAL DE PUNTOS:";cout<<puntos;



	}




    return 0;
}
