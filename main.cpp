// src/main.cpp
#include <iostream>
#include "calcular.h"

using namespace std;

int main() {
    Calcular calc;

    double num1 = 10.0;
    double num2 = 5.0;

    std::cout << "Adição: " << num1 << " + " << num2 << " = " << calc.adicao(num1, num2) << std::endl;
    std::cout << "Subtração: " << num1 << " - " << num2 << " = " << calc.subtracao(num1, num2) << std::endl;
    std::cout << "Multiplicação: " << num1 << " * " << num2 << " = " << calc.multiplicacao(num1, num2) << std::endl;

    try {
        std::cout << "Divisão: " << num1 << " / " << num2 << " = " << calc.divisao(num1, num2) << std::endl;
    } catch (const std::invalid_argument& e) {
        std::cerr << "Erro: " << e.what() << std::endl;
    }

    return 0;
}
