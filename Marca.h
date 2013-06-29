/* 
 * File:   Marca.h
 * Author: RafaelCâmara
 *
 * Created on 29 de Junho de 2013, 04:23
 */

#ifndef MARCA_H
#define	MARCA_H

class Marca {
public:
    Marca();
    Marca(const Marca& orig);
    virtual ~Marca();
private:
    enum{
        fiat,
        vw,
        ford,
        honda
    };
};

#endif	/* MARCA_H */

