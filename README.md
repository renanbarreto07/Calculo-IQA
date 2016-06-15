# Calculo-IQA
Software desenvolvido em C para cálculo da qualidade da água

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


++Oxigênio dissolvido

Fórmula Cs = (14,2 ×  e - 0,0212T - (0,0016 × CCl ×  e - 0,0264T)) ×  (0,994 - (0,0001042  ×  H)) 

Linearizamos para: 
if(a==140){
		q1=47;
	}

	else{
		q1= 100.8*exp(pow(a + 106, 2)/ -3745);
	}
	
++Coliformes Fecais

Fórmula: qs = 98,24034 - 34,7145 × (log(CF)) + 2,614267 × (log (CF))2 + 0,107821 × (log(CF))3 

Linearizamos para: 
	if  (b>10000){
		q2=3;
	}
	else{
		q2 = 98.24034 - 34.7145 * (log10(b)) + 2.614267 *(pow(log10(b), 2)) + 0.107821 * (pow(log10(b), 3));
	}


++pH

Fórmula:  Para pH ≤ 2,0  
qs = 2,0  
• Para 2,0 < pH ≤ 6,9  
qs = - 37,1085 + 41,91277 ×   pH  - 15,7043 ×   pH 2 + 2,417486 ×   pH 3 -  0,091252 ×   pH 4  
• Para 6,9 < pH ≤ 7,1  
qs = - 4,69365 - 21,4593 × pH - 68,4561 ×  pH2 + 21,638886 × pH3 - 1,59165 × pH4   
• Para 7,1 < pH ≤ 12  
qs = -7.698,19 + 3.262,031 ×  pH - 499,494 ×  pH2 + 33,1551 ×  pH3 - 0,810613 ×  pH4 
• Para pH ≥ 12,0 

Linearizamos para: 

	if(c<=2){
		q3=1;
	}
	else if(c>2 && c<=6.9){
		q3= -37.1085 +41.91277*c - 15.7043 * pow(c, 2) + 2.417486 * pow(c, 3) - 0.091252* pow(c, 4);
	}
	else if(c>6.9 && c<=7.1){
		q3 = -4.69365 - 21.4593*c - 68.4561* pow(c, 2) + 21.638886*pow(c, 3) - 1.59165* (c, 4);
	}
	else if(c> 7.1 && c <=12){
		q3= -7698.19 + 3262.031 * c - 499.494 * pow(c, 2) + 33.1551* pow(c, 3) - 0.810613*pow(c, 4);
	}
	else{
		q3=3;
	}
	
++Demanda Bioquimica de Oxigenio

Fórmula: Para DBO ≤ 30 mg/L  
	 qs = 100,9571 - 10,7121 ×   DBO + 0,49544 ×  DBO 2 - 0,011167 ×   DBO 3 + 0,0001 ×   DBO 4  
	 Para DBO > 30,0 mg/L 
	 
Linearizamos para:
	if(d>30){
		q4=2;
	}
	else{
		q4= 100.9571 - 10.7121 * d + 0.49544 * pow(d, 2) - 0.011167 * pow(d, 3) + 0.0001 * pow(d, 4);
	}



















Referencias: 
Fórmulas para cálculo da qualidade da água formuladas em C apartir dos artigos:
FERRAMENTA WEB PARA DETERMINAÇÃO DO ÍNDICE DE QUALIDADE DE ÁGUA A PARTIR DA REESTRUTURAÇÃO DAS EQUAÇÕES QUE DESCREVEM AS CURVAS DOS INDICADORES DE QUALIDADE Ricardo Grunitzki1; Jarbas Cleber Ferrari2*; Ana Carla da Silva3; Patrícia H. Zambão4& Eduardo V. P. Neckel5 Resumo 

SISTEMA DE CÁLCULO DA QUALIDADE DA ÁGUA (SCQA) Estabelecimento das Equações do índice de Qualidade das Águas (IQA) MINISTÉRIO DO MEIO AMBIENTE SECRETARIA DE ESTADO DO MEIO AMBIENTE E DESENVOLVIMENTO SUSTENTÁVEL DE MINAS GERAIS - SEMAD Unidade de Coordenação Estadual  -  UCEMG / PNMA II.
