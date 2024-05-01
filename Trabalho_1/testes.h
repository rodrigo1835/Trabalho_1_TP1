#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED // TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;


class TUCodigoDePagamento {
    private:
        CodigoDePagamento *codigoDePagamento;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUCodigoDeTitulo {
    private:
        CodigoDeTitulo *codigoDeTitulo;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUCpf {
    private:
        Cpf *cpf;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUData {
    private:
        Data *data;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUDinheiro {
    private:
        Dinheiro *dinheiro;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUEstado {
    private:
        Estado *estados;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUNome {
    private:
        Nome *nome;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUPercentual {
    private:
        Percentual *percentual;
        static const int VALOR_VALIDO = 100;
        static const int VALOR_INVALIDO = -1;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUSenha {
    private:
        Senha *senha;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUSetor {
    private:
        Setor *setor;
        static const string VALOR_VALIDO;
        static const string VALOR_INVALIDO;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUConta {
    private:
        Conta *conta;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUTitulo {
    private:
        Titulo *titulo;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};

class TUPagamento {
    private:
        Pagamento *pagamento;
        int estado;

        void setUp();
        void tearDown();
        void testarCenarioSucesso();

    public:
        const static int SUCESSO = 0;
        const static int FALHA = -1;
        int run();
};




#endif // TESTES_H_INCLUDED