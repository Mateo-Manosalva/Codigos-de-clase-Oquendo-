#include <iostream>
#include <string>

int main(void)  
{
    std::string Nombre;
    std::cout <<"Nombre\n";
    std::getline(std::cin, Nombre);
    std::cout << "Hola," << Nombre << "\n";
    return 0;
}