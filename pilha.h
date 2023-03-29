#ifndef PILHA_H
#define PILHA_H
#include<QString>
namespace fl{

class Pilha
{
    //ATRIBUTOS
private:
    int tamanho;
    int *array;
    int topo;

    //METODOS
public:
    Pilha(int tamanho);
    ~Pilha();
    bool estaCheia() const;
    bool estaVazia() const;
    int acessar() const;
    void empilhar(int valor);
    int desempilhar();

};
}
#endif // PILHA_H
