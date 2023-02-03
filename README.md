# SO
Alguns exercicios propostos em SO

estudos SO

estados de processos:
    1. o processo bloqueia aguardando uma entrada
    2. O escalonador escolhe outro processo para executar
    3. O escalonador seleciona esse processo
    4. a entrada torna-se disponivel

    Em execução --> Bloqueado --> Pronto --> Execução --> Bloqueado --> Pronto --> Execução
    pode ir de Em execução para pronto e pronto para em execução

    Condições que levam ao término de processos
1.Saída normal (voluntária)
2.Saída por erro (voluntária)
3.Erro fatal (involuntário)
4.Cancelamento por um outro processo (involuntário)

Pai cria um processo filho, processo filho pode criar seu próprio
processo
• Formam uma hierarquia

itens por processo
    espaço de endereçamento
    variaveis globais
    arquivos abertos
    processos filhos
    alarmes pendentes
    sinais e tratadores de sinais
    informações de contabilidade

Itens por thread
    contador de programa
    registradores
    pilha
    estado


Um processo tem thread(s)

pode ser um processo com 3 threads ou 3 processos com uma thread cada
cada
cada thread tm sua propria pilha
os processos ficam no espaço do usuario e as threads no espaço do kernel(nucleo)

escalonadores:
    Objetivo – imitar a funcionalidade dos threads de núcleo
    – ganha desempenho de threads de usuário
    •Evita transições usuário/núcleo desnecessárias
    •Núcleo atribui processadores virtuais para cada processo
    – deixa o sistema supervisor alocar threads para processadores
    –Problema:
    •Baseia-se fundamentalmente nos upcalls - o núcleo (camada inferior) chamando procedimentos no espaço do usuário (camada superior)