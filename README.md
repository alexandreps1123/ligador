-- LIGADOR

*** ./ligador myfile1.obj myfile2.obj

ou

*** ./ligador myfile1.obj

*** deve gerar um arquivo myfile.e

****** Ligador

*** O ligador deve chamar LIGADOR. 
*** Deve ser usado “./ligador prog1.obj prog2.obj”. 
*** Deve dar como saida um arquivo chamado “prog1.e”. 
*** A entrada do ligador deve ser os arquivos obj gerados pelo seu montador em caso de ter achado diretivas BEGIN e END. 
*** O arquivo de saida “.e” deve ser um arquivo de texto de uma unica linha igual ao OBJ q nao precisa der ligado. 
*** Deve ser capa de rodar no simulador. O ligador funciona no máximo com 2 arquivos unicamente