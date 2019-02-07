# 2019-01-cefetmg-provadidatica

> Suponha que você está dando aula para uma turma que tem conhecimentos básicos sobre programação de computadores. Durante a aula expositiva, um dos alunos faz a seguinte pergunta: o que são ponteiros ?  Na sua prova didática, você deve explicar o que são ponteiros em 10 minutos.  Recursos disponíveis: quadro branco e pincel.


1. Ponteiros - no cotidiano - relógio analógico / bússola / balança / futebol,voleibol (ponta) / prego gigante (construção civil)
2. Ponteiros - em programação - apontadores - guardam endereços de memória - diagrama intuitivo
3. Ponteiros - na prática - exemplo de código em C - acompanhado de diagrama
4. Ponteiros - aplicações
  * Funções - passagem de parâmetros por referência (endereço ao invés do valor, possibilidade de alteração)
  * Tipos Abstratos de Dados - poderosa ferramenta para implementá-los (listas encadeadas, grafos, Et cetera)
  * Vetores - alocação de memória dinamicamente 
    * sem tamanho definido no código, cresce conforme necessidade em tempo de execução
    * sem necessidade de espaço contíguo na memória

Ponteiros tornam o programdor consciente das complexidades em manipular a memória do computador.


| linguagem     | cavalo    |
| ------------- |:---------:|
| c             | selvagem  |
| java          | selado    |
| python        | alado     |


5. Ponteiros - cuidados
  * se não inicializados então ponteiros apontam para 'algum' endereço memória (lixo --> garbage collector)
