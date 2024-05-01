#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    Nome nome;

    Senha senha,senha2;

    Estado estado;

    Percentual percentual;

    CodigoDePagamento codigoPagamento;

    Dinheiro dinheiro;
    
    Cpf cpf;

    Setor setor;

    Data data;

    CodigoDeTitulo titulo;

    Conta conta;

    Titulo Contatitulo;

    Pagamento pagamento;

    nome.setNome("Rodrigo Reis");
    senha.setSenha("19456");
    estado.setEstado("Previsto");
    codigoPagamento.setCodigoPagamento("3423453543");
    percentual.setPercentual(100);
    dinheiro.setDinheiro("1234323");
    cpf.setCpf("123.456.789-09");
    setor.setSetor("Agricultura");
    data.setData("31-01-2100");
    titulo.setCodigoTitulo("CDB3424A2343");

    conta.setNome(nome);
    conta.setCpf(cpf);
    conta.setSenha(senha);

    Contatitulo.setCodigo(titulo);
    Contatitulo.setEmissor(nome);
    Contatitulo.setSetor(setor);
    Contatitulo.setEmissao(data);
    Contatitulo.setVencimento(data);
    Contatitulo.setValor(dinheiro);

    pagamento.setCodigo(codigoPagamento);
    pagamento.setData(data);
    pagamento.setPercentual(percentual);
    pagamento.setEstado(estado);
    
    cout << endl;
    cout << "Conta:" << endl;
    cout << "Nome: " << conta.getNome().getNome() << endl;
    cout << "Cpf: " << conta.getCpf().getCpf() << endl;
    cout << "Senha: " << conta.getSenha().getSenha() << endl;
    cout << endl;

    cout << "Titulo da conta: " << endl;
    cout << "Código: " << Contatitulo.getCodigo().getCodigoTitulo() << endl;
    cout << "Emissor: " << Contatitulo.getEmissor().getNome() << endl;
    cout << "Setor: " << Contatitulo.getSetor().getSetor() << endl;
    cout << "Emissão: " << Contatitulo.getEmissao().getData() << endl;
    cout << "Vencimento: " << Contatitulo.getVencimento().getData() << endl;
    cout << "Valor: R$:" << Contatitulo.getValor().getDinheiro() << endl;
    cout << endl;

    cout << "Pagamento:" << endl;
    cout << "Código: " << pagamento.getCodigo().getCodigoPagamento() << endl;
    cout << "Data: " << pagamento.getData().getData() << endl;
    cout << "Percentual: " << pagamento.getPercentual().getPercentual() << "%" << endl;
    cout << "Estado: " << pagamento.getEstado().getEstado() << endl;
    cout << endl;

    TUCodigoDePagamento testeCodigoDePagamento;
    switch(testeCodigoDePagamento.run()) {
        case TUCodigoDePagamento::SUCESSO : cout << "SUCESSO : CODIGO-DE-PAGAMENTO" << endl;
            break;
        case TUCodigoDePagamento::FALHA : cout << "FALHA : CODIGO-DE-PAGAMENTO" << endl;
            break;
    }

    TUCodigoDeTitulo testeCodigoDeTitulo;
    switch(testeCodigoDeTitulo.run()) {
        case TUCodigoDeTitulo::SUCESSO : cout << "SUCESSO : CÓDIGO-DE-TITULO." << endl;
            break;
        case TUCodigoDeTitulo::FALHA : cout << "FALHA : CÓDIGO-DE-TITULO." << endl;
            break;
    }

    TUCpf testeCpf;
    switch(testeCpf.run()) {
        case TUCpf::SUCESSO : cout << "SUCESSO : CPF" << endl;
            break;
        case TUCpf::FALHA : cout << "FALHA : CPF" << endl;
            break;
    }

    TUData testeData;
    switch(testeData.run()) {
        case TUData::SUCESSO : cout << "SUCESSO : DATA" << endl;
            break;
        case TUData::FALHA : cout << "FALHA : DATA" << endl;
            break;
    }

    TUDinheiro testeDinheiro;
    switch(testeDinheiro.run()) {
        case TUDinheiro::SUCESSO : cout << "SUCESSO : DINHEIRO" << endl;
            break;
        case TUDinheiro::FALHA : cout << "FALHA : DINHEIRO" << endl;
            break;
    }

    TUEstado testeEstado;
    switch(testeEstado.run()) {
        case TUEstado::SUCESSO : cout << "SUCESSO : ESTADO" << endl;
            break;
        case TUEstado::FALHA : cout << "FALHA : ESTADO" << endl;
            break;
    }

    TUNome testeNome;
    switch(testeNome.run()) {
        case TUNome::SUCESSO : cout << "SUCESSO : NOME" << endl;
            break;
        case TUNome::FALHA : cout << "FALHA : NOME" << endl;
            break;
    }

    TUPercentual testePercentual;
    switch(testePercentual.run()) {
        case TUPercentual::SUCESSO : cout << "SUCESSO : PERCENTUAL" << endl;
            break;
        case TUPercentual::FALHA : cout << "FALHA : PERCENTUAL" << endl;
            break;
    }

    TUSenha testeSenha;
    switch(testeSenha.run()) {
        case TUSenha::SUCESSO : cout << "SUCESSO : SENHA" << endl;
            break;
        case TUSenha::FALHA : cout << "FALHA : SENHA" << endl;
            break;
    }

    TUConta testeConta;
    switch(testeConta.run()) {
        case TUConta::SUCESSO : cout << "SUCESSO : CONTA" << endl;
            break;
        case TUConta::FALHA : cout << "FALHA : CONTA" << endl;
            break;
    }

    TUTitulo testeTitulo;
    switch(testeTitulo.run()) {
        case TUTitulo::SUCESSO : cout << "SUCESSO : TITULO" << endl;
            break;
        case TUTitulo::FALHA : cout << "FALHA : TITULO" << endl;
            break;
    }

    TUPagamento testepagamento;
    switch(testepagamento.run()) {
        case TUPagamento::SUCESSO : cout << "SUCESSO : PAGAMENTO" << endl;
            break;
        case TUPagamento::FALHA : cout << "FALHA : PAGAMENTO" << endl;
            break;
    }
       
    return 0;
}
