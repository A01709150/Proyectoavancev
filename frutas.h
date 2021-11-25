#include "mercado.h"
#include <string>

class Pasillo: public mercado
{
private:
    std::string frutas;
    int cantidades;
    

public:
    Pasillo() : frutas(""), cantidades(0) { };
    Pasillo(std::string elemento, int cantidad) : frutas(elemento), cantidades(cantidad) { };

    /* ---- getters y setters ---- */
    std::string get_frutas();
    void set_frutas(std::string );

    int get_cantidades();
    void set_cantidades(int );

  
    // Funciones
    void muestra_frutas();
    
};

/* ---- getters y setters ---- */
std::string Pasillo::get_frutas() { return frutas; }
void Pasillo::set_frutas(std::string elemento) { frutas = elemento; }

int Pasillo::get_cantidades() { return cantidades; }
void Pasillo::set_cantidades(int cantidad) { cantidades = cantidad; }

/* ---- funciones ---- */
void menu_frutas()
{
    std::cout << "Menú de opciones" << std::endl;
    std::cout << "1. Manzanas \n2. Naranja \n3. Pera \n4. Banana \n0. Ir a la siguente sección" << std::endl;
}


int sumafrutas=0;

void Pasillo::muestra_frutas()
{   
     
    suma=0;
    bool running = true;

    while (running)
    {
        menu_frutas();
        std::cout << "Introduce el número de la opción que deseas realizar: "; std::cin >> op;
              

        switch (op)
        {
        case 1:
            std::cout << "Cuantas quieres? "; std::cin >> ap; 
            std::cout << "Decidiste llevarte " << ap << " manazanas";
            sumas();
            sumafrutas=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
            
            
        case 2:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " naranjas";
            sumas();
            sumafrutas=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
            
        case 3:
            std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " peras";
            sumas();
            sumafrutas=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        case 4:
             std::cout << "Cuantas quieres? "; std::cin >> ap;
            std::cout << "Decidiste llevarte " << ap << " bananas";
            sumas();
            sumafrutas=suma;
            std::cout << ". Tienes un total de: " << suma << std::endl; break;
        default: break;
        }

       if (op==0)
       
       break; 
    }
}