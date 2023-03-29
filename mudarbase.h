#ifndef MUDARBASE_H
#define MUDARBASE_H
#include<QString>
namespace fl{

class MudarBase
{
    //ATRIBUTOS
private:
    int numero;
    int base;

   //METODOS
public:
    MudarBase(int numero, int base);
    int getNumero() const;
    void setNumero(int newNumero);
    int getBase() const;
    void setBase(int newBase);
    QString calcularMudanca();
    ~MudarBase();
};

}
#endif // MUDARBASE_H
