#include <iostream>
#include "frutas.h"
#include "vegetales.h"
#include "carne.h"



int main()
{   /* ---- Sección de Frutas ---- */
    Pasillo fruta1("manzanas", 3);
    std::cout << "Tu amigo que te acompaño al mercado se llevo " <<fruta1.get_cantidades() << " " << fruta1.get_frutas() << ". Que te llevaras tu de la sección de frutas?"<< " "<<std::endl;
    fruta1.muestra_frutas();
    
    
    /* ---- Sección de Vegetales ---- */
    Pasillo2 vegetales1("cebollas", 2);
    std::cout << "Tu amigo no tomo nada de la sección de vegetales. Que te llevaras tu?"<< " "<<std::endl;
    vegetales1.muestra_vegetales();

    /* ---- Sección de Carnes ---- */
    Pasillo3 carnes1("res", 8);
    std::cout << "Tu amigo se llevo de la sección de carnes " <<carnes1.get_cantidades3() << " onzas de " << carnes1.get_carnes() << ". Que te llevaras tu?"<< " "<<std::endl;
    carnes1.muestra_carnes();

   int total;
    total=sumavegetales+sumafrutas+sumacarnes;
    std::cout <<"El total de comida es igual a: "<< total <<std::endl;

    

    return 0;
}


