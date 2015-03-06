#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;


//devuelve el primer elemento de "mi_pila"
string getTope(stack<string> mi_pila)
{
    return mi_pila.top();///obtengo el primer elemento de mi pila
}

//devuelve la cantidad de elementos de "mi_pila"
int getTamano(stack<string> mi_pila)
{
    return mi_pila.size();///obtenego el tamaño de mi pila
}

//devuelve true si "str" esta dentro de "mi_pila" de lo contrario devuelve false
bool existeEnPila(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty())///reviso si esta vacia mi pila
    {
        if(mi_pila.top()== str)///lo igualo al str
        {
            return true;///si fue cierto el if
        }
        mi_pila.pop();///que vaya sacando el primer elemento
    }
    return false;///por sino encontro a str
}

//devuelve el elemento mayor de "mi_pila"
int getMayor(stack<int> mi_pila)
{
    int mayor=mi_pila.top();///declaro variable y lo igualo al primer elemento de la pila
    while(!mi_pila.empty())///reviso si esta vaica mi pila
    {
        if(mi_pila.top()==0)///lo igualo el primer elemento con cero por ser el numero mas pequeño
        {
            mayor=mi_pila.top();///guardando el valor en mayor
        }
        if(mi_pila.top()>mayor)///verifico cual es el valor mayor
        {
            mayor=mi_pila.top();/// guardando el valor en mayor
        }
        mi_pila.pop();///saco un valor de mi pila
    }
    return mayor;/// que retorne mayor
}

//devuelve el elemento menor de "mi_pila"
int getMenor(stack<int> mi_pila)
{
    int menor=mi_pila.top();///declaro variable y lo igualo al primer elemento de la pila
    while(!mi_pila.empty())///reviso si esta vaica mi pila
    {
        if(mi_pila.top()==9999)///lo igualo con el numero mas grande para encontrar el numero mas pequeño
        {
            menor = mi_pila.top();///guardando el valor en menor
        }
        if(mi_pila.top()<menor)///viendo el numero menor
        {
            menor = mi_pila.top();///guardando el valor en menor
        }
        mi_pila.pop();///sacando un elemento de mi pila
    }
    return menor;/// que retorne el menor
}

//devuelve la cantidad de veces que se encuentra la letra 'a' en "mi_pila"
int contarLetraA(stack<char> mi_pila)
{
    int cont=0;///declarando variables
    while(!mi_pila.empty())///verificando si esta vacias mi pila
    {
        if(mi_pila.top()=='a')///igualando el primer elemento de mi pila con a
        {
            cont++;///que vaya aumentando de a 1
        }
        mi_pila.pop();///sacnado elemento de mi pila
    }
    return cont;///que retorne cont
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
