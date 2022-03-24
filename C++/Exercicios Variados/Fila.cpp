#include <cstdlib>
#include "Fila.h"

Fila::Fila() {
    inicio = NULL;
    fim = NULL;
}

bool Fila::vazia() {
    return (inicio == NULL);
}

bool Fila::cheia() {
    return false;
}

bool Fila::inserir(int x) {
    PonteiroElemento p;
    p = new elemento;
    p->valor = x;
    if (vazia()) {
        inicio = p;
        fim = p;
    } else {
        fim->proximoElemento = p;
        fim = p;
    }
    p->proximoElemento = NULL;
    return true;
}

bool Fila::remover(int &x) {
    PonteiroElemento p;
    if (vazia())
        return false;
    x = inicio->valor;
    p = inicio;
    inicio = inicio->proximoElemento;
    delete p;
    if (inicio == NULL)
        fim = NULL;
    return true;
}


bool Fila::primeiro(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do primeiro elemento da lista
	// seu código aqui:
	
	if (vazia()){
       return false;
}   else{
    x = inicio->valor;
    cout << x << " eh o primeiro numero na lista !" << endl;
}
	
	
}

bool Fila::ultimo(int &x) {
	// caso a lista esteja vazia retornar falso
	// retornar em x o valor do último elemento da lista
	// seu código aqui:
	if (vazia()){
    return false;
}   else{
    x = fim->valor;
    cout << x << " eh o primeiro numero na lista !" << endl;
}

	
}

bool Fila::esvaziar() {
	// caso a lista esteja vazia retornar falso
	// remover todos os elementos da lista
	// seu código aqui:
	if(vazia()){
    return false;
}   
    PonteiroElemento esv;
    esv = inicio;
        do{
           inicio = inicio->proximoElemento;

           delete esv;

           esv = inicio;
}   while(esv != NULL);
    return true;

}

int Fila::tamanho() {
	// retornar o tamanho da lista, 0 se estiver vazia
	// seu código aqui:
	if (vazia()){
    cout << " 0 " << endl;          
           
}   else {
    elemento *proximoElemento;
    int cont = 0;
    for( aux = incio; aux !=Null;  aux= aux->proximoElemento);
    cont++;
    return cont;
       
}

	
}

bool Fila::inverter() {
	// caso a lista esteja vazia retornar falso
	// inverter a ordem dos elementos da lista
	// seu código aqui:
	   
	   if (vazia()){
       return false;
    }  else {
       int inverter, i;

    for(int i = 0; i < contador; i++){ 
        inverter[i] = conteudo[contador - i -1];
    }

    for(int i = 0; i < contador; i++){
        conteudo[i] = inverter[i];
    } 
 }
}

string Fila::listar() {
	// retornar string com todos os elementos da lista separados por ;
	// exemplo: 1 ; 3 ; 5
	// string vazia se a lista estiver vazia
	// seu código aqui:

       if (vazia()){
          cout << " vazia " << endl;
       } else {
         int contador = 0;
         
         for(contador = 1; contador= tamanho(); contador ++);
         POO
                       
}


}

bool Fila::estaNaFila(int x) {
	// retornar verdadeiro caso o valor x seja localizado na fila
	// seu código aqui:
	
	
}

Fila Fila::interseccao(Fila auxFila) {
	// retornar objeto Fila contendo a intersecção com a lista atual
	// elementos em comum com as 2 listas
	// sem repetição de elementos
	// seu código aqui:
		
       fila ret;
       
       
       return ret;
       
	
}

Fila Fila::uniao(Fila auxFila) {
	// retornar objeto Fila contendo a união com a lista atual
	// elementos das 2 listas
	// sem repetição de elementos
	// seu código aqui:


	
}




