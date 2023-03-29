#include "mudarbase.h"
#include "pilha.h"

namespace fl{

int MudarBase::getNumero() const
{
    return numero;
}

void MudarBase::setNumero(int newNumero)
{
    numero = newNumero;
}

int MudarBase::getBase() const
{
    return base;
}

void MudarBase::setBase(int newBase)
{
    base = newBase;
}

MudarBase::MudarBase(int numero, int base):
    numero(numero),
    base(base)
{

}

MudarBase::~MudarBase(){

}

QString MudarBase::calcularMudanca(){
    Pilha p(20);
    QString resultado = "";
    QString hexa = "0123456789ABCDEF";
    for (int aux=numero;aux>0;aux=aux/base)
    {
        p.empilhar(aux%base);
    }
    for(int aux=numero;aux>0;aux=aux/base) // ESSE FOR ESTÁ ERRADO - DIA 09/03
    {
        resultado += hexa[p.acessar()];
        p.desempilhar();
    }
    return resultado;
}


}

