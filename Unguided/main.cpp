#include <iostream>
#include "stack.h"
using namespace std;

void latihan1() {
    Stack S;
    createStack(S);

    push(S, 3);
    push(S, 4);
    push(S, 2);
    push(S, 9);

    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}

void latihan2() {
    Stack S;
    createStack(S);

    pushAscending(S, 3);
    pushAscending(S, 3);
    pushAscending(S, 2);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 9);

    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}

void latihan3() {
    Stack S;
    createStack(S);

    cout << "Masukkan input: ";
    getInputStream(S); 
    printInfo(S);
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);
}

int main() {
    latihan1();
    cout << endl;

    latihan2();
    cout << endl;

    latihan3();

    return 0;
}
