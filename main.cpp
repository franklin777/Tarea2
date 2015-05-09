#include "Evaluador.h"
#include <iostream>
using namespace std;

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    int a=*ptr; //Se le asigna a la variable el valor de *ptr.
    return a;
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    int res= *a+*b; //A la variable "res" se le asigna de una vez los valores de a y b sumados.
    return res;
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
  if (a==b) //Si tanto como a y b apuntan al mismo espacio de memoria, devolvemos true.
    return true;
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if (*a==*b) //Si los valores de a y b son iguales retornamos true.
    return true;
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char letra; //Variable para almacenar primera letra
    letra= (*a)[0]; //Asigna primera letra a  la variable
    return letra;
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
      //Una palabra es palindromo se se lee igual alreves que al derecho.
    string palabra; //Variable para almacenar valor desreferenciado de a;
    palabra=*a; // Se le asigna el valor de *a a la variable.
    string palabra2; //Variable necesaria para almacernar palabra original pero alreves.
    int tamano= palabra.length(); //Se le asigna tamaño de la palabra original a la variable.
    for (int i=tamano-1; i>=0;i--) //Ciclo usado para asignarle la palabra alreves a la variable palabra2 caracter por caracter.
    {
        palabra2=palabra2+palabra[i]; //Se le asigna a la variable palabra2 la palabra original pero al reves.
    }

    if (palabra==palabra2) //Si es palindromo, si la palabra original es igual a la palabra2 alreves.
        return true;//Si lo es returna true sino, false.
    return false;


}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int res=1;  //Constante para evitar la multiplicacion por cero
    for(int cont=0; cont<*exponente; cont++) //Va desde cero hasta el valor del exponente.
    {
       res= (*base) * res; //Multiplica cada vez en las iteraciones el valor de "res" que se comporta como acumulador por el valor desreferenciado de la base.
    }
    return  res; //Retornamos el resultado de la base elevada al exponente del ciclo anterior.
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
