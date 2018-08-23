/*ICO 22
BRAYAM ULISES HERRERA SEGUNDO 
EJERCICIO APUNTADORES*/
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

const int n=10;
int *ap_arreglo;
double *ap_suma;
double *ap_promedio;

int main(){
	int arreglo[n];
	double suma=0;
	double promedio;
	ap_suma=&suma;
	ap_promedio=&promedio;
	srand (time(0));
	for(int i=0; i<n; i++){
		arreglo[i]=1 + (rand()%100);
		ap_arreglo=&arreglo[i];
		cout << *ap_arreglo;
		if(i<n-1){
			cout <<" , ";
		}
		*ap_suma+=*ap_arreglo;
	}
	*ap_promedio=*ap_suma/n;
	cout <<"\n\n La suma es:\t" << *ap_suma <<"\n";
	cout <<"\n El promedio es:\t" << *ap_promedio <<"\n\n";
	system("pause");
	return 0; 
}
