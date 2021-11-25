#include "mercado.h"
#include <string>

class Pasillo3: public mercado
{
private:
    std::string carnes;
    int cantidades3;

public:
    Pasillo3() : carnes(""), cantidades3(0) { };
    Pasillo3(std::string car, int cantidad3) : carnes(car), cantidades3(cantidad3) { };

    /* ---- getters y setters ---- */
    std::string get_carnes();
    void set_carnes(std::string );

    int get_cantidades3();
    void set_cantidades3(int );

    // Funciones
    void muestra_carnes();
};

/* ---- getters y setters ---- */
std::string Pasillo3::get_carnes() { return carnes; }
void Pasillo3::set_carnes(std::string car) { carnes = car; }

int Pasillo3::get_cantidades3() { return cantidades3; }
void Pasillo3::set_cantidades3(int cantidad3) { cantidades3 = cantidad3; }

/* ---- funciones ---- */
void menu_carnes()
{
    std::cout << "Menú de opciones" << std::endl;
    std::cout << "1. Cerdo \n2. Pollo \n3. Res \n4. Chivo \n0. Ir a la caja registradora" << std::endl;
}

int sumacarnes=0;

void Pasillo3::muestra_carnes()
{   
     
    
    bool running = true;

    while (running)
    {
        menu_carnes();
        std::cout << "Introduce el número de la opción que deseas realizar: "; std::cin >> op;
              

        switch (op)
        {
        case 1:
            std::cout << "Cuantas onzas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " onzas de cerdo";
            sumas();
            sumacarnes=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
            
        case 2:
            std::cout << "Cuantas onzas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " onzas de pollo"; 
            sumas();
            sumacarnes=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        case 3:
            std::cout << "Cuantas onzas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " onzas de res"; 
            sumas();
            sumacarnes=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        case 4:
             std::cout << "Cuantas onzas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " onzas de chivo"; 
            sumas();
            sumacarnes=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        default: break;
        }

       if (op==0) break; 
    }
}