#include <iostream>
using namespace std;
#define MAX 5
#include "Pilha.cpp"

int main() {
    Pilha minhaPilha;
    int recebeValor;
    minhaPilha.empilhar(1);
    cout << minhaPilha.desempilhar(recebeValor) << endl;;
    cout << "valor: " << recebeValor << endl;

}