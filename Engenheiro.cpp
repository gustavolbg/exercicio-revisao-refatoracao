#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

private:
    std::string _nome;
    int _projetos;

public:
    void set_nome(std::string nome)
    {
        _nome = nome;
    }
    void set_projetos(int projetos)
    {
        _projetos = projetos;
    }
    std::string get_nome(){return _nome;}
    int get_projetos(){return _projetos;}

};
