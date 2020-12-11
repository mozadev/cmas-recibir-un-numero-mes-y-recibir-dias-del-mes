/*

Que lea el mes expresado como número, un valor entre 1 y 12, nos determine e imprima 
el número de días del mes. Recuerde que febrero tiene 28 días. Abril, junio, setiembre
y noviembre tienen 30 días. El resto de los meses tienen 31 días.
Ejemplo: Ingrese el mes: 8 Se mostrará: El mes 8 tiene 31 días

*/

#include<iostream>
#include<conio.h>


using namespace std;

int calculardias (int mes)
{
	int dias=0;

	dias = (mes==1||mes==3||mes==5||mes==7|| mes == 8 || mes ==10||mes==12)? 31 :dias;
	dias= (mes == 4 || mes == 6 || mes == 9 || mes == 11 ) ? 30 : dias;
	dias = (mes == 2 ) ? 28 : dias;

	return dias;
}


int main()
{
	int mes;
	
	cout << "ingrese el mes: "; cin >> mes;
	cout << "el mes :  " <<  mes << " tiene:" << calculardias(mes) << " dias";
	

	_getch();
	
}