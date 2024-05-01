#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código para declaração de classe entidade.
//
// Essa estrutura de código pode ser aproveitada na declaração de entidade.
//
// Seguem as atividades para adaptação:
//
// Substituir Entidade por nome da classe.
//
// Substituir Dominio.
//
// Substituir nomeAtributo.

class Entidade {
    private:
            Dominio nomeAtributo;                   // Declarar cada atributo da classe.
    public:
            void setnomeAtributo(const Dominio&);   // Declarar método set para cada atributo.
            Dominio getnomeAtributo() const;        // Declarar método get para cada atributo.
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

----------------------------------------------------------------------- */

// -----------------------------------------------------------------------
// Exemplos de uso da estrutura de código anterior.

// -----------------------------------------------------------------------
// Exemplo de declaração de classe entidade e implementações de métodos.

class Conta {
private:
    Cpf cpf;
    Nome  nome;
    Senha senha;

public:
    void setCpf(const Cpf&);
    Cpf getCpf() const;
    void setNome(const Nome&);
    Nome getNome() const;
    void setSenha(const Senha&);
    Senha getSenha() const;
};

inline void Conta::setCpf(const Cpf& cpf){
    this->cpf = cpf;
}

inline Cpf Conta::getCpf() const {
    return cpf;
}

inline void Conta::setNome(const Nome& nome){
    this->nome = nome;
}

inline Nome Conta::getNome() const {
    return nome;
}

inline void Conta::setSenha(const Senha& senha){
    this->senha = senha;
}

inline Senha Conta::getSenha() const {
    return senha;
}

//-------------------------------------------------------//

class Titulo {
    private:
        CodigoDeTitulo codigo;
        Nome emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;

    public:
        void setCodigo(const CodigoDeTitulo&);   
        CodigoDeTitulo getCodigo() const;

        void setEmissor(const Nome&);   
        Nome getEmissor() const;

        void setSetor(const Setor&);   
        Setor getSetor() const;

        void setEmissao(const Data&);   
        Data getEmissao() const;

        void setVencimento(const Data&);   
        Data getVencimento() const;

        void setValor(const Dinheiro&);   
        Dinheiro getValor() const;
};

inline void Titulo::setCodigo(const CodigoDeTitulo& codigo){
    this->codigo = codigo;
}

inline CodigoDeTitulo Titulo::getCodigo() const{
    return codigo;
}
//--------------------------------
inline void Titulo::setEmissor(const Nome& emissor){
    this->emissor = emissor;
}

inline Nome Titulo::getEmissor() const{
    return emissor;
}
//--------------------------------
inline void Titulo::setSetor(const Setor& setor){
    this->setor = setor;
}

inline Setor Titulo::getSetor() const{
    return setor;
}

//--------------------------------
inline void Titulo::setEmissao(const Data& emissao){
    this->emissao = emissao;
}

inline Data Titulo::getEmissao() const{
    return emissao;
}
//--------------------------------
inline void Titulo::setVencimento(const Data& vencimento){
    this->vencimento = vencimento;
}

inline Data Titulo::getVencimento() const{
    return vencimento;
}

//--------------------------------
inline void Titulo::setValor(const Dinheiro& valor){
    this->valor = valor;
}

inline Dinheiro Titulo::getValor() const{
    return valor;
}

//-----------------(Entidade-Pagamento)--------------------------//
class Pagamento {
    private:
        CodigoDePagamento codigo;
        Data data;
        Percentual percentual;
        Estado estado;

    public:
        void setCodigo(const CodigoDePagamento&);  
        CodigoDePagamento getCodigo() const;

        void setData(const Data&);  
        Data getData() const;

        void setPercentual(const Percentual&);  
        Percentual getPercentual() const;

        void setEstado(const Estado&);  
        Estado getEstado() const;            

};

inline void Pagamento::setCodigo(const CodigoDePagamento& codigo){
    this->codigo = codigo;
}

inline CodigoDePagamento Pagamento::getCodigo() const{
    return codigo;
}

inline void Pagamento::setData(const Data& data){
    this->data = data;
}

inline Data Pagamento::getData() const{
    return data;
}

inline void Pagamento::setPercentual(const Percentual& percentual){
    this->percentual = percentual;
}

inline Percentual Pagamento::getPercentual() const{
    return percentual;
}

inline void Pagamento::setEstado(const Estado& estado){
    this->estado = estado;
}

inline Estado Pagamento::getEstado() const{
    return estado;
}

#endif // ENTIDADES_H_INCLUDED