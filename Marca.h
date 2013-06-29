/* 
 * File:   Marca.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:23
 */

#ifndef MARCA_H
#define	MARCA_H

#include<string>

using std::string;

class Marca {
public:
    Marca(string brand);
    Marca(int brand);
    virtual ~Marca();
    string getMarca();
    void setMarca(string brand);
    void setMarca(int brand);
private:
    enum{
        fiat,
        vw,
        ford,
        honda
    };
    string marca;
};

#endif	/* MARCA_H */

