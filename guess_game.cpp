/*
Juego de adivinar un numero:
Tener un numero
Preguntar al usuario el numero
Informar si lo adivino o no
*/

#include <iostream>

int main(void) {
    const int NUM = 10;
    int guess;
    std::cout << "Adivina el numero entre 1 y 100 \n";
    std::cin >> guess; // Determina la variable proporcionada

    if (guess == NUM) { // Determina que si sucede una cosa hace x accion
        std::cout << "Correcto \n";
    } else if (guess < NUM){ // Sino revisa la siguiente condicion
        std::cout <<"Mas arriba \n";
    } else { // Sino revisa la ultima condicion
        std::cout <<"Mas abajo \n";
    }
    
    return 0;
}