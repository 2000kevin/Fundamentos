#include<iostream>
using namespace std;

int main ()
{
	float v,d,t;
	cout<<"Ingrese la distancia (en km) d=";cin>>d;
	cout<<"Ingrese el tiempo (en segundo) t=";cin>>t;
	v=d/t;
	cout<<"La velocidad calculada es de v="<<v<<endl<<endl;

	return 0;
}