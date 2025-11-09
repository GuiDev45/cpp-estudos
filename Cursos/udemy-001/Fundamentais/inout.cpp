// Biblioteca para entrada e saída.
#include <iostream>
using namespace std;

int main() {

   // << significa "operador de inserção" feito para saídas
   cout << "Olá!\n";

   // endl = end line serve realmente para dizer que acabou a linha 
   // e o que vir da próxima vez, vai vir abaixo desse resultado
   cout << 3.14 << endl;

   int x = 3;
   cout << x << endl;

   cout << "Digite seu nome: ";

   // "operador de extração" ou seja, para entrada de dados
   string name;
   cin >> name; // É aqui que o usuário faz a entrada

   cout << name;
}