#include "testes.h"

//---------------------------TesteUnitariosDasClassesDominio------------------

//---------------------------TesteUnitarioCodigoPagamento------------------
const string TUCodigoDePagamento::VALOR_VALIDO = "3423453543";
const string TUCodigoDePagamento::VALOR_INVALIDO = "0324321299";

void TUCodigoDePagamento::setUp() {
    codigoDePagamento = new CodigoDePagamento();
    estado = SUCESSO;
}

void TUCodigoDePagamento::tearDown() {
    delete codigoDePagamento;
}

void TUCodigoDePagamento::testarCenarioSucesso() {
    try {
        codigoDePagamento->setCodigoPagamento(VALOR_VALIDO);
        if(codigoDePagamento->getCodigoPagamento() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigoDePagamento::testarCenarioFalha() {
    try {
        codigoDePagamento->setCodigoPagamento(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(codigoDePagamento->getCodigoPagamento() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigoDePagamento::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
//---------------------------TesteUnitarioCodigoDeTitulo------------------
const string TUCodigoDeTitulo::VALOR_VALIDO = "CDB3424A2343";
const string TUCodigoDeTitulo::VALOR_INVALIDO = "CCC234234558";

void TUCodigoDeTitulo::setUp() {
    codigoDeTitulo = new CodigoDeTitulo();
    estado = SUCESSO;
}

void TUCodigoDeTitulo::tearDown() {
    delete codigoDeTitulo;
}

void TUCodigoDeTitulo::testarCenarioSucesso() {
    try {
        codigoDeTitulo->setCodigoTitulo(VALOR_VALIDO);
        if(codigoDeTitulo->getCodigoTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCodigoDeTitulo::testarCenarioFalha() {
    try {
        codigoDeTitulo->setCodigoTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(codigoDeTitulo->getCodigoTitulo() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigoDeTitulo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioCpf------------------
const string TUCpf::VALOR_VALIDO = "123.456.789-09";
const string TUCpf::VALOR_INVALIDO = "5042-2131-434-23";

void TUCpf::setUp() {
    cpf = new Cpf();
    estado = SUCESSO;
}

void TUCpf::tearDown() {
    delete cpf;
}

void TUCpf::testarCenarioSucesso() {
    try {
        cpf->setCpf(VALOR_VALIDO);
        if(cpf->getCpf() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUCpf::testarCenarioFalha() {
    try {
        cpf->setCpf(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(cpf->getCpf() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCpf::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioData------------------
const string TUData::VALOR_VALIDO = "01-10-2010";
const string TUData::VALOR_INVALIDO = "00-00-0000";

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso() {
    try {
        data->setData(VALOR_VALIDO);
        if(data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha() {
    try {
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(data->getData() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//---------------------------TesteUnitarioDinheiro------------------
const string TUDinheiro::VALOR_VALIDO = "10000000";
const string TUDinheiro::VALOR_INVALIDO = "-1000000";

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}

void TUDinheiro::tearDown() {
    delete dinheiro;
}

void TUDinheiro::testarCenarioSucesso() {
    try {
        dinheiro->setDinheiro(VALOR_VALIDO);
        if(dinheiro->getDinheiro() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDinheiro::testarCenarioFalha() {
    try {
        dinheiro->setDinheiro(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(dinheiro->getDinheiro() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDinheiro::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioEstado------------------
const string TUEstado::VALOR_VALIDO = "Liquidado";
const string TUEstado::VALOR_INVALIDO = "SemMoney";

void TUEstado::setUp() {
    estados = new Estado();
    estado = SUCESSO;
}

void TUEstado::tearDown() {
    delete estados;
}

void TUEstado::testarCenarioSucesso() {
    try {
        estados->setEstado(VALOR_VALIDO);
        if(estados->getEstado() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUEstado::testarCenarioFalha() {
    try {
        estados->setEstado(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(estados->getEstado() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEstado::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//---------------------------TesteUnitarioNome------------------
const string TUNome::VALOR_VALIDO = "Rodrigo Reis";
const string TUNome::VALOR_INVALIDO = "rodrigo reis";

void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown() {
    delete nome;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setNome(VALOR_VALIDO);
        if(nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(nome->getNome() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioPercentual------------------
void TUPercentual::setUp() {
    percentual = new Percentual();
    estado = SUCESSO;
}

void TUPercentual::tearDown() {
    delete percentual;
}

void TUPercentual::testarCenarioSucesso() {
    try {
        percentual->setPercentual(VALOR_VALIDO);
        if(percentual->getPercentual() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUPercentual::testarCenarioFalha() {
    try {
        percentual->setPercentual(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(percentual->getPercentual() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUPercentual::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioSenha------------------
const string TUSenha::VALOR_VALIDO = "761902";
const string TUSenha::VALOR_INVALIDO = "12345";

void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown() {
    delete senha;
}

void TUSenha::testarCenarioSucesso() {
    try {
        senha->setSenha(VALOR_VALIDO);
        if(senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha() {
    try {
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(senha->getSenha() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioSetor------------------
const string TUSetor::VALOR_VALIDO = "Agricultura";
const string TUSetor::VALOR_INVALIDO = "Programador";

void TUSetor::setUp() {
    setor = new Setor();
    estado = SUCESSO;
}

void TUSetor::tearDown() {
    delete setor;
}

void TUSetor::testarCenarioSucesso() {
    try {
        setor->setSetor(VALOR_VALIDO);
        if(setor->getSetor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUSetor::testarCenarioFalha() {
    try {
        setor->setSetor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if(setor->getSetor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSetor::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


//---------------------------TesteUnitarioConta------------------

void TUConta::setUp(){
    conta = new Conta();
    estado = SUCESSO;
}

void TUConta::tearDown(){
    delete conta;
}

void TUConta::testarCenarioSucesso(){
    Nome nome;
    nome.setNome("Rodrigo Reis");
    conta->setNome(nome);
    if(conta->getNome().getNome() != "Rodrigo Reis")
        estado = FALHA;

    Cpf cpf;
    cpf.setCpf("123.456.789-09");
    conta->setCpf(cpf);
    if(conta->getCpf().getCpf() != "123.456.789-09")
        estado = FALHA;
    
    Senha senha;
    senha.setSenha("13267");
    conta->setSenha(senha);
    if(conta->getSenha().getSenha() != "13267")
        estado = FALHA;
}

int TUConta::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

//---------------------------TesteUnitarioTitulo------------------

void TUTitulo::setUp(){
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){
    CodigoDeTitulo codigoTitulo;
    codigoTitulo.setCodigoTitulo("CDB3424A2343");
    titulo->setCodigo(codigoTitulo);
    if(titulo->getCodigo().getCodigoTitulo() != "CDB3424A2343")
        estado = FALHA;

    Nome emissor;
    emissor.setNome("Rodrigo Reis");
    titulo->setEmissor(emissor);
    if(titulo->getEmissor().getNome() != "Rodrigo Reis")
        estado = FALHA;
    
    Setor setor;
    setor.setSetor("Agricultura");
    titulo->setSetor(setor);
    if(titulo->getSetor().getSetor() != "Agricultura")
        estado = FALHA;

    Data emissao;
    emissao.setData("31-01-2100");
    titulo->setEmissao(emissao);
    if(titulo->getEmissao().getData() != "31-01-2100")
        estado = FALHA;
    
    Data vencimento;
    vencimento.setData("31-02-2100");
    titulo->setVencimento(vencimento);
    if(titulo->getVencimento().getData() != "31-02-2100")
        estado = FALHA;

    Dinheiro valor;
    valor.setDinheiro("1000");
    titulo->setValor(valor);
    if(titulo->getValor().getDinheiro() != "1000")
        estado = FALHA;
}

int TUTitulo::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}


//---------------------------TesteUnitarioPagamento------------------

void TUPagamento::setUp(){
    pagamento = new Pagamento();
    estado = SUCESSO;
}

void TUPagamento::tearDown(){
    delete pagamento;
}

void TUPagamento::testarCenarioSucesso(){
    CodigoDePagamento codigodepagamento;
    codigodepagamento.setCodigoPagamento("3423453543");
    pagamento->setCodigo(codigodepagamento);
    if(pagamento->getCodigo().getCodigoPagamento() != "3423453543")
        estado = FALHA;

    Data data;
    data.setData("06-10-2010");
    pagamento->setData(data);
    if(pagamento->getData().getData() != "06-10-2010")
        estado = FALHA;
    
    Percentual percentual;
    percentual.setPercentual(50);
    pagamento->setPercentual(percentual);
    if(pagamento->getPercentual().getPercentual() != 50)
        estado = FALHA;
    
    Estado estados;
    estados.setEstado("Previsto");
    pagamento->setEstado(estados);
    if(pagamento->getEstado().getEstado() != "Previsto")
        estado = FALHA;
}

int TUPagamento::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
