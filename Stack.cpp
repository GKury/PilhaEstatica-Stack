/*
Nome: Gabriel Kury Fonseca
Tia: 32153848
*/

#include "Stack.h" 

Stack Create()
{
  Stack stack = { {}, 0 };
  return stack;
}

bool Push(Stack& stack, char value)
{
  if (stack.topo <= 4094) {
    stack.daniell[stack.topo] = value;
    stack.topo += 1;
    return true;
  } else{
    return false;
  }
}

char Pop(Stack& stack)
{
  if (stack.topo > 0) {
    stack.daniell[stack.topo] = '\0';
    stack.topo -= 1;
    return stack.daniell[stack.topo];
  } else {
    return '\0';
  }
}

char Top(const Stack& stack)
{
  if (stack.topo > 0 ) {
    return stack.daniell[stack.topo - 1];
  } else {
    return '\0';
  }
}

int Size(const Stack& stack)
{
  return TAMANHO;
}

int Count(const Stack& stack)
{
  return stack.topo;
}

bool IsEmpty(const Stack& stack)
{
  if (stack.topo == 0) {
    return true;
  } else {
    return false;
  }
}

void Clear(Stack& stack)
{
  while (stack.topo != 0){
    stack.daniell[stack.topo] = '\0';
    stack.topo -= 1;    
  }
}