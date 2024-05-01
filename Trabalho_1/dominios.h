#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <vector>

using namespace std;

class Nome {
    private:
        string nome;
        string sobrenome = ""; // Atribui uma string vazia caso o nome não seja composto            
        void validar(string);
                      
    public:
        void setNome(string);             
        string getNome() const;     
};

inline string Nome::getNome() const{
    return nome + " " + sobrenome;
}

class Senha {
    private:
        static const int LIMITE = 10;
        string senha;
        bool sequenciaCrescente(string);
        bool sequenciaDecrescente(string);
        void validar(string);

    public:
        void setSenha(string);             
        string getSenha() const;     
};

inline string Senha::getSenha() const{
    return senha;
}

class Estado {
    private:
        string estado;
        static const vector<string> ESTADOS_VALIDOS;
        void validar(string);
    public:

        void setEstado(string);             
        string getEstado() const;     
};

inline string Estado::getEstado() const{
    return estado;
}

class Percentual {
    private:
        float percentual = 0.0;
        static const int MAXIMO = 100;    
        void validar(float);  
    public:

        void setPercentual(float);   
        void setPercentual(string);          
        float getPercentual() const;     
};

inline float Percentual::getPercentual() const{
    return percentual;
}

class CodigoDePagamento {
    private:
        string codigoPagamento;
        void validar(string);
    public:
        
        void setCodigoPagamento(string);             
        string getCodigoPagamento() const;     
};

inline string CodigoDePagamento::getCodigoPagamento() const{
    return codigoPagamento;
}

class Dinheiro {
    private:
        string dinheiro;
        static const int DINHEIRO_MAXIMO = 100000000;
        void validar(string);
        bool verificarNumero(string);
        
    public:
        
        void setDinheiro(string);             
        string getDinheiro() const;     
};

inline string Dinheiro::getDinheiro() const{
    return dinheiro;
}

class Cpf {
    private:
        string cpf;
        static const int CPF_MAXIMO = 11;
        void validar(string);
    public:
        
        void setCpf(string);             
        string getCpf() const;     
};

inline string Cpf::getCpf() const{
    return cpf;
}

class Setor {
    private:
        string setor;
        static const vector<string> SETOR_VALIDOS;
        bool buscaSetor(string,vector<string>); 
        void validar(string);

    public:
        
        void setSetor(string);             
        string getSetor() const;     
};

inline string Setor::getSetor() const{
    return setor;
}

class Data {
    private:
        string data;
        void validar(string);

    public:
        
        void setData(string);             
        string getData() const;     
};

inline string Data::getData() const{
    return data;
}

class CodigoDeTitulo {
    private:
        string codigoTitulo;
        static const vector<string> TITULOS_VALIDOS;
        bool validarTitulo(string);
        void validar(string);

    public:
        
        void setCodigoTitulo(string);             
        string getCodigoTitulo() const;     
};

inline string CodigoDeTitulo::getCodigoTitulo() const{
    return codigoTitulo;
}

#endif // DOMINIOS_H_INCLUDED