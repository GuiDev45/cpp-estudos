// Biblioteca padrão para entrada e saída (cin, cout)
#include <iostream>
// Permite usar elementos do namespace std sem precisar escrever std::
using namespace std;

// Função principal do programa
// O tipo int indica o valor de retorno para o sistema operacional (0 = sucesso)
int main()
{
  // Declarando variável string
  string title = "Mr.";
  // Criando uma string usando o construtor da classe string
  string name("John");
  // Criando uma string com 10 repetições do caractere '!'
  string end(10, '!');

  // Concatenando uma string, saída de dados, title + name concatenado, fim e quebra linha
  cout << title + name << endl;

  // Outra forma de concatenar
  name += " Brown";
  // Saída de dados novamente
  cout << name << endl;

  // Forma de concatenar usando método
  name.append(" Green");
  cout << name << endl;

  // Concatenando e usando método append
  cout << title.append(name) << endl;

  // retorna 0 para saber se o código deu certo
  return 0;
}