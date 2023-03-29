#include "pilha.h"
namespace fl{

Pilha::Pilha(int tamanho):
    tamanho(0),
    array(0),
    topo(-1)
{
    if (tamanho <= 0) throw QString ("Numero Invalido");

    try {
        array= new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &Erro) {
        throw QString ("A pilha nao pode ser criada - ERRO BAD ALLOC");
    }
}
Pilha::~Pilha(){
    if(array) delete array;
}
bool Pilha::estaCheia() const{
return(topo == tamanho-1);
}
bool Pilha::estaVazia() const{
return(topo == -1);
}
int Pilha::acessar() const{
    if(estaVazia()) throw QString ("Esta vazia e nao pode ser acessado");
    return array[topo];
}
void Pilha::empilhar(int valor){
    if (estaCheia()) throw QString("Pilha esta cheia");
    topo++;
    array[topo] = valor;
}
int Pilha::desempilhar(){
    if(estaVazia()) throw QString("Pilha esta vazia");
    int valor = array[topo];
    topo--;
    return valor;
}
}
