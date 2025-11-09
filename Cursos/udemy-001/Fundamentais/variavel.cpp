// Inclusão da biblioteca padrão de entrada e saída
#include <iostream>

// Pacote para usar bibliotecas do C
#include <cstdio>

int main () {
   // Declarando o typo de variável e já passando seu valor
   double price = 99.80;
   double tax = 0.08;

   // Declarando variável e já passando uma sentença
   double finalPrice = price * (1 + tax);

   // Imprimindo o valor formatando o número e pulando uma linha
   printf("O valor final é: %.2f \n", finalPrice);

   // Também é possível declarar a variável e só depois atribuir um valor para ela
   int age;
   age = 33;

   // Como o age é um valor inteiro, então o placehold usado é %.d
   printf("Minha idade é: %.d", age);

   // Em C++, também é possível usar std::cout no lugar de printf, embora printf venha da biblioteca C (<cstdio>).
   std::cout << "O valor final é: " << finalPrice << std::endl;

   // Retorne 0 caso o código de certo
   return 0;
}