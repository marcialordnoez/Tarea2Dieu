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
    while(!mi_cola.empty())///verifico si esta vacia mi cola
        {
            if(mi_cola.front()%= 2)///divido toda mi cola
                {
                 return false;///que retorne falso

                }mi_cola.pop();///que saque elementos
        }
    return true;/// que retorne verdadero
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
       list<int>::iterator it;///declarando iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///recorriendo la lista con iterator
    {
        if(*it %= 2)///dividiendo toda mi lista
            {
                return false;///que retorne falso
            }mi_lista.pop_front();///que saque el primer elemento que esta enfrente
    }

    return true;///que retorne verdadero
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty())///verifico si esta vacia mi cola
        {
            if(mi_cola.front()==str)///igualando el primer elemento de mi cola con str
                {
                    return true;///que retorno verdader
                }mi_cola.pop();///que saque los elementos
        }
    return false;///que retorne falso
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
//    while(!mi_lista.empty())
//        {
//            if(mi_lista.front()==str)
//                {
//                    return true;
//                }mi_lista.pop_front();
//        }
           list<string>::iterator it;///declarando iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///recorriendo la lista usando iterator
    {
            if(*it == str)///igualando el iterator con str
                {
                    return true;///que retorne true
                }
    }

    return false;///que retorne false
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int cont = 0;///decalrando variables

    while(!mi_cola.empty())///verificando si esta vacia
        {
            cont += mi_cola.front();/// que se guarde lo que esta en el comienzo de mi cola en cont y que lo sume
            mi_cola.pop();///sancando elementos de mi cola
        }
    return cont;///que retorne cont
}

//devuelve la suma de la cantidad letras de cada cadena de la lista
int sumarLetras(list<string> mi_lista)
{
    int suma = 0;///declarando variables
    string dato;///declarando variables
    list<string>::iterator it;///declarando iterator

    for(it=mi_lista.begin(); it!=mi_lista.end(); it++)///recorriendo mi lista
    {
            dato = *it;///guardo el valor de mi iterator en dato
            suma += dato.length();///busco el tamaño de mi cadena y luego lo sumo y guardo el valor en suma
    }

     return suma;/// que retorne suma
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
//    list<char>hola = mi_lista;
//    hola.sort();

//    while(!mi_lista.empty())
//        {
//            if(mi_lista.front()==hola.front())
//                {
//                    mi_lista.pop_front();
//                    hola.pop_front();
//                }else
//                {
//                    return false;
//                }
//        }

    list<char>aux =  mi_lista;///decalro una lista auxiliar y la igualo a mi lista
    aux.sort();///mi mista auxiliar la vuelvo ordenada con la funcion sort

    for(list<char>::iterator it= mi_lista.begin(); it!= mi_lista.end(); it++)///recorro la lista
    {
            if(mi_lista.front() == aux.front())///igualo los primeros elementos de las dos listas
            {
                mi_lista.pop_front();///saco los elementos
                aux.pop_front();///saco el elemento
            }else
            {
                return false;///retorna falso
            }
    }
    return true;///retorna verdadero
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
