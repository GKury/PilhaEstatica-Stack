/*
Nome: Gabriel Kury Fonseca
Tia: 32153848
*/

#ifndef __STACK_H__
#define __STACK_H__

#include <iostream>

const int TAMANHO = 4096;

struct Stack
{
  char daniell [TAMANHO];

  int topo;
};

Stack Create();

bool Push(Stack& stack, char value);

char Pop(Stack& stack);

char Top(const Stack& stack);

int Size(const Stack& stack);

int Count(const Stack& stack);

bool IsEmpty(const Stack& stack);

void Clear(Stack& stack);

#endif