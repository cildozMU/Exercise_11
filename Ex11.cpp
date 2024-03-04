/*************************************************************************************
Programming Skills Challenge - Siemens
Exercise 11. The program reverses a string informed by the user without using any 
temporary variable, buffer or any pre-existing function or method for this.
For validation purpose, please go to: https://onlinegdb.com/JLdzMlv1L

Criado em 01/03/2024 - 11:08pm
Autora: Mariana Uzeda - mariana.uzeda@gmail.com
*******************************************************************************/
#include <iostream>

int main() {
    // Solicita a entrada do usuário
    std::cout << "Digite uma string: ";
    std::string entrada;
    std::cin >> entrada;

    // Inverte a string sem usar variáveis temporárias
    int length = entrada.length();
    for (int i = 0; i < length / 2; ++i) {
        // Troca os caracteres simetricamente em relação ao centro
        entrada[i] ^= entrada[length - i - 1];
        entrada[length - i - 1] ^= entrada[i];
        entrada[i] ^= entrada[length - i - 1];
    }

    // Exibe a string invertida
    std::cout << "String Invertida: " << entrada << std::endl;

    return 0;
}





