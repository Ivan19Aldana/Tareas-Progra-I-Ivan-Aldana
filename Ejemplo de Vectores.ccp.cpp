//Mynor Ivan Aldana Marin
//0909-20-5400
#include <iostream>
using namespace std;
void intercambia(int []); //declaración de la función.
                         //No es necesario poner el nombre del array
int main()
{
   int A[5]={3,5,7,9,11};
   intercambia(A); //en la llamada sólo se escribe el nombre
                   //del array, sin corchetes
   cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] <<endl; //muestra 5 3
   system("pause");
}
void intercambia(int a[]) //definición de la función
{                            
   int c=a[0];
   int d =a[1];
   a[0]=a[4];
   a[1]=a[3];
   a[3]=d;
   a[4]=c;
   
}

