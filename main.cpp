#include <iostream>
#include <stdio.h> /* Librerias */ 

using namespace std;
int elec;

int main ()
{

	/* Menu principal*/
cout << " Ingrese el numero de la funcion que quiera realizar"<<endl <<endl;
cout << " 1. Factorial de un numero " << endl;
cout << " 2. Tabla de Multiplicar " << endl;  /* Menu principal*/
cout << " 3. Numeros Pares o inpares" << endl;
cout << " 4. Dia se Semana" << endl;
cout << " 5. Sistema  Bancario" << endl;

cin>>(elec);


switch (elec){
	
case  1 : 


   int z,i;
   long double factorial; // se declara long double para poder representar números grandes
   cout << "Introduce un numero: ";
   cin >> z;
   factorial=1; // funcion de la factorial
   for(i=1;i<=z;i++)
        factorial = factorial * i;
   cout << endl << "Factorial de " << z << " -> " << factorial << endl;
   system("pause"); // resultado de la factorial
   
	break;
    
  case 2 :
	 char seguir;
    int a, numero;

    do   /* Tabla de multiplicacion*/
    {
        printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento  */

        for ( a = 1 ; a <= 10 ; a++ )
            printf( "\n   %d * %d = %d", a, numero, a * numero );

        /* Fin del anidamiento */

        printf( "\n\n   %cDesea ver otra tabla (s/n)?: ", 168 );
        fflush( stdin );
        scanf( "%c", &seguir );

    } while ( seguir != 'n' );
    
  break;
  
}


  
return 0;
}
