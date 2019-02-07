# 2019-01-cefetmg-provadidatica

> Suponha que você está dando aula para uma turma que tem conhecimentos básicos sobre programação de computadores. Durante a aula expositiva, um dos alunos faz a seguinte pergunta: o que são ponteiros ?  Na sua prova didática, você deve explicar o que são ponteiros em 10 minutos.  Recursos disponíveis: quadro branco e pincel.


1. Ponteiros - no cotidiano - relógio analógico / bússola / balança / futebol,voleibol (ponta) / prego gigante (construção civil)
2. Ponteiros - em programação - apontadores - guardam endereços de memória - diagrama intuitivo
3. Ponteiros - na prática - exemplo de código em C - acompanhado de diagrama

Ponteiros são amplamente usados em programação, ferramenta poderosa de abstração.

4. Ponteiros - aplicações
  * Funções - passagem de parâmetros por referência (endereço ao invés do valor, possibilidade de alteração)
  * Tipos Abstratos de Dados - poderosa ferramenta para implementá-los (listas encadeadas, grafos, Et cetera)
  * Vetores - em C++ há um relacionamento profundo entre ponteiros e _arrays_
  * Alocação de memória dinamicamente 
    * sem tamanho definido no código, cresce conforme necessidade em tempo de execução
    * sem necessidade de espaço contíguo na memória
  * Orientação a objetos - em C++  ponteiros são necessários para implementar polimorfismo

Ponteiros tornam o programador consciente das complexidades em manipular a memória do computador.


| linguagem     | cavalo    |
| ------------- |:---------:|
| c             | selvagem  |
| java          | selado    |
| python        | alado     |


5. Ponteiros - cuidados
  * se não inicializados então ponteiros apontam para 'algum' endereço memória (lixo --> garbage collector)
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
# Resumo do capítulo 10 de [1]  
  
[1] HORSTMANN, CAY, Conceitos de Computação com o Essencial de C++ . Bookman, 3ª edição, types, semantics, and language design. Cambridge: MIT Press, 1994.



1. Um ponteiro indica a posição de um valor na memória.
2. O operador * localiza o valor para o qual um ponteiro aponta.
3. Encontrar o valor para o qual um ponteiro aponta é chamado de dereferenciar o ponteiro.
4. Use o operador -> para acessar um membro de dados ou uma função-membro através de um ponteiro para objeto.
5. O ponteiro NULL não aponta para nenhum objeto.
6. É um erro dereferenciar um ponteiro não inicializado ou o ponteiro NULL.
7. Você pode criar valores de qualquer tipo no heap com o operador new. Você deve liberá-los com o operador delete.
8. Ponteiros podem ser usados para modelar valores opcionais (usando um ponteiro
NULL quando o valor não está presente).
9. Ponteiros podem ser usados para permitir acesso compartilhado a um valor comum.
10. O valor de uma variável array é um ponteiro para o primeiro elemento do array.
11. Aritmética de ponteiros significa adicionar um deslocamento inteiro a um ponteiro
de array. O resultado é um ponteiro que salta sobre o número de elementos especificado.
12. A lei da dualidade array-ponteiro afirma que a[n] é idêntico a *(a + n), onde a
é um ponteiro para um array e n é um deslocamento inteiro.
13. Quando passando um array para uma função, somente o endereço inicial é passado.
A declaração de parâmetro type_name a[] é equivalente a type_name* a.
14. Funções de manipulação de strings em baixo nível usam ponteiros do tipo char*.
Você pode construir variáveis string a partir de ponteiros char* e usar a função
membro c_str para obter um ponteiro char* a partir de um objeto string.
