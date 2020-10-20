#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

private:
	double _salarioHora;
	double _quotaMensalVendas;

public:
	void set_salarioHora(double salarioHora){
		_salarioHora = salarioHora;
	}
    void set_quotaMensalVendas(double quotaMensalVendas){
		_quotaMensalVendas = quotaMensalVendas;
	}
	double get_salarioHora(){return _salarioHora;}
    double get_quotaMensalVendas(){return _quotaMensalVendas;}

	double pagamentoMes(double horasTrabalhadas) {

	  double t = horasTrabalhadas;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * _salarioHora;
    }

};

#endif
