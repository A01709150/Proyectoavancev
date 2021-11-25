#include "mercado.h"
#include <string>

class Pasillo2: public mercado
{
private:
    std::string vegetales;
    int cantidades2;

public:
    Pasillo2() : vegetales(""), cantidades2(0) { };
    Pasillo2(std::string veg, int cantidad2) : vegetales(veg), cantidades2(cantidad2) { };

    /* ---- getters y setters ---- */
    std::string get_vegetales();
    void set_vegetales(std::string );

    int get_cantidades2();
    void set_cantidades2(int );

    // Funciones
    void muestra_vegetales();
};

/* ---- getters y setters ---- */
std::string Pasillo2::get_vegetales() { return vegetales; }
void Pasillo2::set_vegetales(std::string veg) { vegetales = veg; }

int Pasillo2::get_cantidades2() { return cantidades2; }
void Pasillo2::set_cantidades2(int cantidad2) { cantidades2 = cantidad2; }

/* ---- funciones ---- */
void menu_vegetales()
{
    std::cout << "Menú de opciones" << std::endl;
    std::cout << "1. Zanahoria \n2. Cebolla \n3. Apio \n4. Lechuga\n0. Ir a la siguiente sección" << std::endl;
}

int sumavegetales=0;

void Pasillo2::muestra_vegetales()
{   
     
    suma=0;
    bool running = true;

    while (running)
    {
        menu_vegetales();
        std::cout << "Introduce el número de la opción que deseas realizar: "; std::cin >> op;
              

        switch (op)
        {
        case 1:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "El usuario ha seleccionado " << ap << " zanahorias";
            sumas();
            sumavegetales=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;

        case 2:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "El usuario ha seleccionado " << ap << " cebollas";
            sumas();
            sumavegetales=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        case 3:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "El usuario ha seleccionado " << ap << " apio";
            sumas();
            sumavegetales=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        case 4:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "El usuario ha seleccionado " << ap << " lechuga";
            sumas();
            sumavegetales=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        break;
        }

        if (op == 0) break;
    }
}