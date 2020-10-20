#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

private:
    std::string _nome;

public:
    void set_nome(std::string nome){
        _nome = nome;
    }
    std::string get_nome(){return _nome;}

	double quotaTotalAnual() {
	  return get_quotaMensalVendas() * 12;
	}

};
