
#include "Pilha.h"

Pilha::Pilha() {
    contador = 0;
    capacidade = MAX;
}

bool Pilha::vazia() {
    if (contador == 0) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::cheia() {
    if (contador == capacidade) {
        return true;
    } else {
        return false;
    }
}

bool Pilha::empilhar(int valor) {
    if (cheia())
        return false;
    conteudo[contador] = valor;
    contador++;
    return true;
}

bool Pilha::desempilhar(int &valor) {
    if (vazia())
        return false;
    contador--;
    valor = conteudo[contador];
    return true;
}

bool Pilha::retornaTopo(int &valor) {
    if (vazia())
        return false;
    valor = conteudo[contador-1];
    return true;
}

void Pilha::pilhainverter(){ 
    int inverter[MAX], i;

    for(int i = 0; i < contador; i++){ 
        inverter[i] = conteudo[contador - i -1];
    }

    for(int i = 0; i < contador; i++){
        conteudo[i] = inverter[i];
    }
}

int Pilha::v_menor(){
    int menor, i;
    
    for(i = 0; i < MAX; i++){ //for para buscar o menor valor
        if(i == 0){
            menor = conteudo[i];
        }
        else{
            if(conteudo[i] < menor){
                menor = conteudo[i];
            }
        }
    }

    return menor;
}

int Pilha::v_maior(){
    int maior = 0, i; //for para buscar o maior valor

    for(i = 0; i < MAX; i++){
        if(conteudo[i] > maior){
            maior = conteudo[i];
        }
    }

    return maior;
}


float Pilha::media(){
    int media, soma = 0, i;

    for(i = 0; i < MAX; i++){
        soma += conteudo[i];
    }

    media = soma / contador;

    return media;
}

bool Pilha::palindromo(){
    string palavra = "arara";

    if (palavra == string(s1.rbegin(), s1.rend())) {
          return true;
    }else{
          return false;}
}
     
