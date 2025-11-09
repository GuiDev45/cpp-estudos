// Inclusão da biblioteca padrão de entrada e saída
#include <iostream>

// using torna possível usar o operador sem precisar ficar declarando ele toda hora
using namespace std;

// Declaração da função main que ínicia o código
int main() {

   // Saída de dados com namespace caso não tivesse o using
   std::cout << "Bom-dia!!" << std::endl;

   // Saída de dados da forma mais resumida, com o using namespace std declarado antes da main() 
   cout << "Bom-dia!!" << endl;

   // Retorna 0 indicando que o programa foi executado com sucesso
   return 0;
}