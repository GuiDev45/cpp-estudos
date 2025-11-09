// Biblioteca padrão de entrada e saída
#include <iostream>

// Pacote para usar bibliotecas do C
#include <cstdio>

int main() {
   // Declarando o valor de PI
   double PI = 3.1415;

   // Declarando as variáveis que vão ser usadas
   double radius;
   double area;

   // Texto ínicial
   std::cout << "Calculando a Área" << std:: endl;

   // Valor de raio pelo usuário
   std::cout << "Digite o valor do raio: ";
   std::cin >> radius;

   // Calculando a area com base no PI 
   // que já foi declarado e os dois valores de raio que foi inserido pelo usuário
   area = PI * (radius * radius);

   // Saída do resultado da area, formatada com 2 casas decimais usando o placeholder %.2f
   // printf vem da biblioteca do C
   printf("Área calculada: %.2f", area);

   return 0;
}