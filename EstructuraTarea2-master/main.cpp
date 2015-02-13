// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;

///Trabaje en grupo:
///    Richard murcia
///    randall

//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
   while(!mi_cola.empty())//vinedo si mi cola tiene elementos
{
if(mi_cola.front()%2 == 0)//examinando cada elemento y viendo si tiene multiplos de 2
{
mi_cola.pop();//sacando el primer elemento para revisar toda mi cola
}
else
{
return false;
}
}
return true;
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
//    while(!mi_lista.empty())
//        {
//            if(mi_lista.front()%=2)
//                {
//                    return false;
//                }mi_lista.pop_front();
//        }
        while(!mi_lista.empty())//revisar si mi lista tiene elementos
{
        if(mi_lista.front()%2 == 0)//ver que cada elemento de mi lista tiene multiplo de 2
    {
    mi_lista.pop_front();//voy sacando el primer elemento de mi lista
    }       else
            {
                return false;
            }
}
    return true;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty())//revisando si mi cola tiene elementos
{
if(mi_cola.front() == str)//igualando mi cola igual a str para ver si se encuentra
{
return true;
}
mi_cola.pop();//sacando elementos de mi colalo hago fuera del if por que si encuentra el elemento de primero que de ahi de un solo se salga
}
return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{ while(!mi_lista.empty())//revisando los elementos de mi lista
{
if(mi_lista.front()==str)//lo igualo ala variable para ver si lo encuentra
{
return true;
}
mi_lista.pop_front();//saco el elemento
}
return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
   int suma = 0;//declaro mi variable
while(!mi_cola.empty())//verifico si hay elementos en mi cola
{
suma += mi_cola.front();//hago que todo los elementos de mi cola se sumen y se guarden en mi variable
mi_cola.pop();//voy sacando cada elemento
}
return suma;
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;///declarando variables y lo igualo a cero
    string dato;///declarando variables
    list<string>::iterator it;///declarando iterator tipo string

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///recorriendo mi lista desde el principio y el final
    {
            dato = *it;///dato guarda lo que tiene mi iterator
            suma += dato.length();///la suma va sumando la cadena que viene gurdado mi variable dato
    }

     return suma;/// que retorne suma de todas las cadenas
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
 list<char>auxiliar = mi_lista;//declaro una nueva lista y la igualo a mi lista
auxiliar.sort();//declaro la funcion sort para ordenar mi lista declarada
while(!mi_lista.empty())//viendo si hay elemento en mi lista
{
if(mi_lista.front()==auxiliar.front())//igualando el primer elemento de cada lista
{ //para verificar si cada elemento de mi lista es igual a cada elemento de mi auxiliar
mi_lista.pop_front();//sacando el primer elemento
auxiliar.pop_front();//sacando el primer elemento
}else
{
return false;
}
}
return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
