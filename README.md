# Calculo-IQA
Software desenvolvido em C para cálculo da qualidade da água

Como instalar: 
É necessário instalar o Msys2, Mingw64, a biblioteca do gtk+ e o compilador.
Tutorial para instalação dos requisitos para a execução do Calculo-IQA: http://arjuna.ist.utl.pt/IC/HowTo/HowTo_MSYS2.php

Baixar os arquivos na pasta home que o msys criou para compilar os arquivos;

Para compilar o programa e executar, é necessário baixar a interface em xml e deixa-lá na mesma pasta do código fonte e da biblioteca, para compilar o programa é necessário digitar na linha de comando do mingw(na pasta que contém os arquivos):

gcc main.c -o main `pkg-config --cflags --libs gtk+-3.0`

main.c: nome dado ao códigofonte.c
main: nome do arquivo executável;


Para que serve:

Este software tem o objetivo de diagnosticar e servir como ferramenta de gestão do recurso de qualidade da água. Ele calcula os níveis adequados para os parâmetros físico-químicos e biológicos em que devem enquadrar-se os corpos hídricos. Baseado no indicador IQA, desenvolvido para avaliar a qualidade da água bruta através de um índice definido por um produtório ponderado, onde são considerados os principais parâmetros de qualidade de água. No intuito de tornar o cálculo desse índice mais dinâmico.

Instruções sobre como operar o programa:

Os parâmetros que devem ser informados para analisar a qualidade da água devem ser informados na seguinte ordem: valor de Oxigenio Dissolvido, valor de Coliformes Fecais, Valor de pH, Valor de Demanda Bioquimica de Oxigenio, Valor de Nitrato Total, Valor de Fosfato Total, Valor de Turbidez, Valor de Solidos Totais e o Valor de Variacao de Temperatura em °C.

Os pesos destes índices são os valores informados no mesmo artigo em que nos baseamos para desenvolvimento: 
Oxigênio Dissolvido 0,17
Coliformes Fecaisl  0,15
Potencial Hidrogeniônico 0,12 
Demanda Bioquímica de Oxigênio (DBO5,20) 0,10
Temperatura 0,10 
Nitrogênio Total  0,10
Fósforo Total  0,10 
Turbidez 0,08 
Resíduo Total 0,08 

O software irá fazer o cálculo e informar o índice de qualidade da água segundo os parâmetros informados e informa ainda segundo os resultados o nível da qualidade da sua água que pode variar entre: ótima, boa, aceitável, ruim ou péssima.

Como desenvolvemos:
Interpretamos as equações estimadas no artigo de estudo para o desenvolvimento da ferramenta web BasIQA e linearizamos essas equações transformando-as em código que pode ser interpretado em linguagem C#.



Referencias: 
Fórmulas para cálculo da qualidade da água formuladas em C apartir dos artigos:
FERRAMENTA WEB PARA DETERMINAÇÃO DO ÍNDICE DE QUALIDADE DE ÁGUA A PARTIR DA REESTRUTURAÇÃO DAS EQUAÇÕES QUE DESCREVEM AS CURVAS DOS INDICADORES DE QUALIDADE Ricardo Grunitzki1; Jarbas Cleber Ferrari2*; Ana Carla da Silva3; Patrícia H. Zambão4& Eduardo V. P. Neckel5 Resumo 

SISTEMA DE CÁLCULO DA QUALIDADE DA ÁGUA (SCQA) Estabelecimento das Equações do índice de Qualidade das Águas (IQA) MINISTÉRIO DO MEIO AMBIENTE SECRETARIA DE ESTADO DO MEIO AMBIENTE E DESENVOLVIMENTO SUSTENTÁVEL DE MINAS GERAIS - SEMAD Unidade de Coordenação Estadual  -  UCEMG / PNMA II.

Samuel Eleutério Dep. Física, IST, 2015 http://arjuna.ist.utl.pt/IC/Apresentacao.php


Desenvolvido por: Renan Barreto Marques da Rosa e Matheus Santos Guanaz
                    renanbarreto07@gmail.com     /  MATHEUSGUANAZ@hotmail.com
