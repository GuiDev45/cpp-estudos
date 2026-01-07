#include <iostream>
using namespace std;

int main()
{
  // Inferência de tipo: o compilador define o tipo com base no valor inicial

  auto a = 1;     // como é um inteiro vai ser int
  auto b = 1.2;   // como é número com casa decimal vai ser double
  auto c = false; // false é bool

  // a = "Text"; C++ é fortemente tipado então não daria para fazer algo que é int receber uma string

  // A saída de dados também é possível fazer dessa forma.
  cout << typeid(a).name() << endl
       << typeid(b).name() << endl
       << typeid(c).name() << endl;

  return 0;
}