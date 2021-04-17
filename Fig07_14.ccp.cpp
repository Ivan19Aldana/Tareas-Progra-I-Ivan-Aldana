//Fig. 7.14: fig07_14.cpp
//paso de arreglos y elementos individuales de arreglos a funciones
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modificarArreglo(int [], int); //se ve extra�o; arreglo y tama�o
void modificarElemento(int); //recibe el valor del elemento del arreglo

int main()
{
	const int tamanioArreglo = 5; //tamano del arreglo a
	int a[ tamanioArreglo ] = {0, 1, 2, 3, 4}; //inicializa el arreglo a
	
	cout << "Efectos de pasar todo el arreglo por referencia:"
		<< "\n\nLos valores del arreglo origianl son:\n";
		
		//imprime los elementos originales del arreglo
		for (int i = 0; i < tamanioArreglo; i++)
			cout << setw( 3 ) << a[ i ];
		
		cout<<endl;
		
		//pasa el arreglo a a modificarArreglo por referencia
		modificarArreglo( a, tamanioArreglo );
		cout << "los valores del arreglo modificado son:\n";
		
		//imprime los elemntos modificados del arreglo
		for ( int j = 0; j < tamanioArreglo; j++ )
			cout << setw( 3 ) << a [ j ];
			
		cout<< "\n\n\nEfectos de pasar el elemto del arreglo por valor:"
			<< "\n\na[3] antes de modificarElemento: " << a [ 3 ] << endl;
			
			modificarElemento( a[ 3 ] ); // pasa el elemento a[ 3 ] del arreglo por valor
			cout << "a[3] despues de modificarElemento: " << a[ 3 ] << endl;
			
			return 0; // indica que termin� correctamente	
} // fin de main

// en la funcion modificarArreglo, "b" apunta el arreglo "a" original en la memoria
void modificarArreglo( int b[], int tamanioDeArreglo )
{
	//multiplica cada elemento del arreglo por 2
	for (int k = 0; k < tamanioDeArreglo; k++)
		b[ k ] *= 2;
} // fin de la funcion modificarArreglo

// en la funcion modificarElemento, "e" es una copia local del
// elemento a[ 3 ] del arreglo que se pasa de main
void modificarElemento( int e )
{
	// multiplica el parametro por 2
	cout << "Valor del elemento modifiarElemento: " << ( e *= 2 ) << endl;
}// fin de la funcion modificarElemento
