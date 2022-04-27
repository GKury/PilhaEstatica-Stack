/*
Nome: Gabriel Kury Fonseca
Tia: 32153848

Referências:

O site w3schools para dúvidas básicas relacionadas a sintaxe de C++
https://www.w3schools.com/cpp/cpp_conditions_else.asp
https://www.w3schools.com/cpp/cpp_conditions.asp
https://www.w3schools.com/cpp/cpp_functions.asp
https://www.w3schools.com/cpp/cpp_while_loop.asp

Além disso, foi consultado o material apresentado em aula e fui na monitoria
*/

#include <iostream>
#include <clocale>
#include "Stack.h"

void PrintTopCountSize(const Stack& stack) {
  char top = Top(stack);
  if (top == '\0')
    std::cout << "Topo: Pilha vazia. \n";
  else
    std::cout << "Topo: " << top << '\n';
  std::cout << "Elementos na pilha: " << Count(stack) << '/' << Size(stack)
            << ", a pilha "
            << (IsEmpty(stack) ? "está vazia" : "contém elementos") << ".\n";
}

int main() {
  setlocale(LC_CTYPE, "Portuguese");

  Stack stack = Create();
  PrintTopCountSize(stack);

  std::cout << "----------------------\n";
  std::string str = "Hello, World!";
  for (int i = 0; i < str.length(); ++i) {
    Push(stack, str[i]);
    PrintTopCountSize(stack);
  }
  std::cout << "----------------------\n";
  char top;
  while (!IsEmpty(stack)) {
    top = Pop(stack);
    std::cout << "Pop retornou: " << top << '\n';
    PrintTopCountSize(stack);
  }

  std::cout << "----------------------\n";
  for (const char &c : str)
    Push(stack, c);
  PrintTopCountSize(stack);

  std::cout << "----------------------\n";
  Clear(stack);
  PrintTopCountSize(stack);
}
