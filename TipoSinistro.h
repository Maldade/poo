#ifndef _TIPO_SINISTRO_H_
#define _TIPO_SINISTRO_H_

#include <iostream>

class TipoSinistro{

	public:

		enum Tipo{

			nada = 0,
			incendio = 1,
			colisao = 2,
			furto = 3
		};
		
		TipoSinistro();
		TipoSinistro(int);
		std::string getTipo();
		void setTipo(int);

	private:

		Tipo t;
};
#endif


// agraçação
// composição
// associaoção simples
// herança