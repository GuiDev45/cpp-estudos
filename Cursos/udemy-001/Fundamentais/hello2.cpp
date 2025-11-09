#include <iostream>
#include <cstdio>

int main() {

   // std tem haver com a biblioteca do C++
   std::cout << "Hello C++ #01" << std::endl;

   // Porém podemos usar qualquer biblioteca do C, assim como está sendo feito abaixo, as duas formas são saída de dados
   // Se você quiser que cada saída fique em uma linha separada, você poderia adicionar \n no printf:
   printf("Hello C++ #02"); // imprime sem quebrar linha.
   puts("Hello C++ #03"); // imprime e quebra a linha automaticamente.

   // retorna 0 se deu certo
   return 0;
}