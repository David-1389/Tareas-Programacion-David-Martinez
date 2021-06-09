#include<iostream>
#include<conio.h>
#include <stdlib.h>


using namespace std;

void mostrarFechaHora(int anio,int mes,int dia,int hora,int minuto);

int main()
{
int a,*dir_a;
int m,*dir_m;
int d,*dir_d;
int h,*dir_h;
int mi,*dir_mi;

dir_a=&a;
dir_m=&m;
dir_d=&d;
dir_h=&h;
dir_mi=&mi;


cout<<"Ingrese anio:";cin>>a;
cout<<"Ingrese mes:";cin>>m;
cout<<"Ingrese dia:";cin>>d;
cout<<"Ingrese hora:";cin>>h;
cout<<"Ingrese minuto:";cin>>mi;
cout<<"\n";

mostrarFechaHora(*dir_a,*dir_m,*dir_d,*dir_h,*dir_mi);

getch();
return 0;
}

void mostrarFechaHora(int anio,int mes,int dia,int hora,int minuto)
{

char cadena[32];
itoa(anio,cadena,10);
itoa(mes,cadena,10);
itoa(dia,cadena,10);
itoa(hora,cadena,10);
itoa(minuto,cadena,10);
cout<<dia;cout<<"/";cout<<mes;cout<<"/";cout<<anio;cout<<" ";cout<<hora;cout<<":";cout<<minuto<<endl;


}
