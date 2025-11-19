#ifndef STACK_H
#define STACK_H

typedef int infotype;
const int MAX_SIZE = 20;

struct Stack {
    infotype info[MAX_SIZE];
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);

void push(Stack &S, infotype X);
infotype pop(Stack &S);

void printInfo(Stack S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype X);
void getInputStream(Stack &S);

#endif