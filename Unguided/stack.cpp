#include "stack.h"
#include <iostream>
using namespace std;

void createStack(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == MAX_SIZE;
}

void push(Stack &S, infotype X) {
    if (isFull(S)) return;
    S.top++;
    S.info[S.top] = X;
}

infotype pop(Stack &S) {
    if (isEmpty(S)) return -1;
    infotype temp = S.info[S.top];
    S.top--;
    return temp;
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack T;
    createStack(T);

    while (!isEmpty(S)) {
        push(T, pop(S));
    }

    S.top = T.top;
    for (int i = 1; i <= T.top; i++) {
        S.info[i] = T.info[i];
    }
}

void pushAscending(Stack &S, infotype X) {
    Stack T;
    createStack(T);

    while (!isEmpty(S) && S.info[S.top] > X) {
        push(T, pop(S));
    }

    push(S, X);

    while (!isEmpty(T)) {
        push(S, pop(T));
    }
}

void getInputStream(Stack &S) {
    char c;
    while (cin.get(c) && c != '\n') {
        if (c >= '0' && c <= '9') {
            push(S, c - '0');
        }
    }
}
