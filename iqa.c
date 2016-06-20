#include <stdio.h>
#include <math.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include "func.h"

void salvar();
void calculaIqa(GtkButton *botao, gpointer data);
int main(int argc, char *argv[]){

	gtk_init(&argc, &argv);//iniciando o gtk

	GtkBuilder *montador;//declarando variável montador
	GtkWindow *janela;//declarando variável janela
	GtkButton *botao, *botao2;// declarando variável botão

	montador = gtk_builder_new();//declarando montador como criador de builders
	gtk_builder_add_from_file(montador, "interface.xml", NULL);//puxa o arquivo .xml da pasta para ligar essa programação com a interface do glade

	janela =(GtkWindow*)gtk_builder_get_object(montador, "window1");//abre a janela maior do glade

	botao = (GtkButton*)gtk_builder_get_object(montador, "button1");//declara o botão desenhado da interface
	botao2 = (GtkButton*)gtk_builder_get_object(montador, "button2");//declara o botão desenhado para salvar

	//configurando as entradas dos valores
	GtkEntry *entrada1 = (GtkEntry*)gtk_builder_get_object(montador, "entry1");//declarando a entrada
	const char *campo1 = gtk_entry_get_text(entrada1);//transformando o valor digitado para um char
	double valor_digitado1 = atof(campo1);//convertendo o valor para  double

	GtkEntry *entrada2 = (GtkEntry*)gtk_builder_get_object(montador, "entry2");
	const char *campo2 = gtk_entry_get_text(entrada2);
	double valor_digitado2 = atof(campo2);

	GtkEntry *entrada3 = (GtkEntry*)gtk_builder_get_object(montador, "entry3");
	const char *campo3 = gtk_entry_get_text(entrada3);
	double valor_digitado3 = atof(campo3);

	GtkEntry *entrada4 = (GtkEntry*)gtk_builder_get_object(montador, "entry4");
	const char *campo4 = gtk_entry_get_text(entrada4);
	double valor_digitado4 = atof(campo4);

	GtkEntry *entrada5 = (GtkEntry*)gtk_builder_get_object(montador, "entry5");
	const char *campo5 = gtk_entry_get_text(entrada5);
	double valor_digitado5 = atof(campo5);

	GtkEntry *entrada6 = (GtkEntry*)gtk_builder_get_object(montador, "entry6");
	const char *campo6 = gtk_entry_get_text(entrada6);
	double valor_digitado6 = atof(campo6);

	GtkEntry *entrada7 = (GtkEntry*)gtk_builder_get_object(montador, "entry7");
	const char *campo7 = gtk_entry_get_text(entrada7);
	double valor_digitado7 = atof(campo7);

	GtkEntry *entrada8 = (GtkEntry*)gtk_builder_get_object(montador, "entry8");
	const char *campo8 = gtk_entry_get_text(entrada8);
	double valor_digitado8 = atof(campo8);

	GtkEntry *entrada9 = (GtkEntry*)gtk_builder_get_object(montador, "entry9");
	const char *campo9 = gtk_entry_get_text(entrada9);
	double valor_digitado9 = atof(campo9);

	//configurando os spinbuttons

	GtkSpinButton *spin1 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton1");//declarando o primeiro spinbutton
	GtkAdjustment *ajustar1 = gtk_adjustment_new(0.17, 0.0, 1.0, 0.01, 0.01, 0.0);// configurando o valor que vai aparecer, o valor mínimo, o valor máximo, o incremento, o decremento e o último por padrão é 0;
	gtk_spin_button_set_adjustment(spin1, ajustar1);//modifica os spins de acordo com o ajuste feito;
	double peso1 = gtk_spin_button_get_value (spin1);//pega o valor dos pesos para calcular

	GtkSpinButton *spin2 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton2");
	GtkAdjustment *ajustar2 = gtk_adjustment_new(0.15, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin2, ajustar2);
	double peso2 = gtk_spin_button_get_value (spin2);

	GtkSpinButton *spin3 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton3");
	GtkAdjustment *ajustar3 = gtk_adjustment_new(0.12, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin3, ajustar3);
	double peso3 = gtk_spin_button_get_value (spin3);

	GtkSpinButton *spin4 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton4");
	GtkAdjustment *ajustar4 = gtk_adjustment_new(0.1, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin4, ajustar4);
	double peso4 = gtk_spin_button_get_value (spin4);

	GtkSpinButton *spin5 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton5");
	GtkAdjustment *ajustar5 = gtk_adjustment_new(0.1, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin5, ajustar5);
	double peso5 = gtk_spin_button_get_value (spin5);

	GtkSpinButton *spin6 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton6");
	GtkAdjustment *ajustar6 = gtk_adjustment_new(0.08, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin6, ajustar6);
	double peso6 = gtk_spin_button_get_value (spin6);

	GtkSpinButton *spin7 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton7");
	GtkAdjustment *ajustar7 = gtk_adjustment_new(0.08, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin7, ajustar7);
	double peso7 = gtk_spin_button_get_value (spin7);

	GtkSpinButton *spin8 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton8");
	GtkAdjustment *ajustar8 = gtk_adjustment_new(0.1, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin8, ajustar8);
	double peso8 = gtk_spin_button_get_value (spin8);

	GtkSpinButton *spin9 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton9");
	GtkAdjustment *ajustar9 = gtk_adjustment_new(0.1, 0.0, 1.0, 0.01, 0.01, 0.0);
	gtk_spin_button_set_adjustment(spin9, ajustar9);
	double peso9 = gtk_spin_button_get_value (spin9);
			

	//configurando o botão para calcular o valor do iqa;
	g_signal_connect(botao, "clicked",
            G_CALLBACK(calculaIqa), (gpointer)montador);

	g_signal_connect(botao2, "clicked",
            G_CALLBACK(salvar), (gpointer)montador);
	

    gtk_widget_show((GtkWidget*)janela);//exibe a janela

    gtk_main();//inicia o loop do programa rodando

	}
//função que calcula os valores lidos para gerar o valor do iqa e a qualidade
void calculaIqa(GtkButton *botao, gpointer data){

	GtkBuilder *montador = (GtkBuilder*)data;


	//declarando as labels

	GtkLabel *label1 = (GtkLabel*)gtk_builder_get_object(montador, "label1");
    GtkLabel *label2 = (GtkLabel*)gtk_builder_get_object(montador, "label2");

    GtkEntry *entrada1 = (GtkEntry*)gtk_builder_get_object(montador, "entry1");//declarando a entrada
	const char *campo1 = gtk_entry_get_text(entrada1);//transformando o valor digitado para um char
	double valor_digitado1 = atof(campo1);//convertendo o valor para  double
	double valor1 = q1(valor_digitado1);//chama a função que calcula a primeira equação

	GtkEntry *entrada2 = (GtkEntry*)gtk_builder_get_object(montador, "entry2");
	const char *campo2 = gtk_entry_get_text(entrada2);
	double valor_digitado2 = atof(campo2);
	double valor2 = q2(valor_digitado2);

	GtkEntry *entrada3 = (GtkEntry*)gtk_builder_get_object(montador, "entry3");
	const char *campo3 = gtk_entry_get_text(entrada3);
	double valor_digitado3 = atof(campo3);
	double valor3 = q3(valor_digitado3);

	GtkEntry *entrada4 = (GtkEntry*)gtk_builder_get_object(montador, "entry4");
	const char *campo4 = gtk_entry_get_text(entrada4);
	double valor_digitado4 = atof(campo4);
	double valor4= q4(valor_digitado4);

	GtkEntry *entrada5 = (GtkEntry*)gtk_builder_get_object(montador, "entry5");
	const char *campo5 = gtk_entry_get_text(entrada5);
	double valor_digitado5 = atof(campo5);
	double valor5= q5(valor_digitado5);

	GtkEntry *entrada6 = (GtkEntry*)gtk_builder_get_object(montador, "entry6");
	const char *campo6 = gtk_entry_get_text(entrada6);
	double valor_digitado6 = atof(campo6);
	double valor6 = q6(valor_digitado6);

	GtkEntry *entrada7 = (GtkEntry*)gtk_builder_get_object(montador, "entry7");
	const char *campo7 = gtk_entry_get_text(entrada7);
	double valor_digitado7 = atof(campo7);
	double valor7 = q7(valor_digitado7);

	GtkEntry *entrada8 = (GtkEntry*)gtk_builder_get_object(montador, "entry8");
	const char *campo8 = gtk_entry_get_text(entrada8);
	double valor_digitado8 = atof(campo8);
	double valor8 = q8(valor_digitado8);

	GtkEntry *entrada9 = (GtkEntry*)gtk_builder_get_object(montador, "entry9");
	const char *campo9 = gtk_entry_get_text(entrada9);
	double valor_digitado9 = atof(campo9);
	double valor9 = q9(valor_digitado9);


	//declarando os spinsbuttons para a calculadora pegar os valores
	GtkSpinButton *spin1 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton1");//declarando o primeiro spinbutton
	double peso1 = gtk_spin_button_get_value (spin1);//pega o valor dos pesos para calcular

	GtkSpinButton *spin2 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton2");
	double peso2 = gtk_spin_button_get_value (spin2);

	GtkSpinButton *spin3 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton3");
	double peso3 = gtk_spin_button_get_value (spin3);

	GtkSpinButton *spin4 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton4");
	double peso4 = gtk_spin_button_get_value (spin4);

	GtkSpinButton *spin5 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton5");
	double peso5 = gtk_spin_button_get_value (spin5);

	GtkSpinButton *spin6 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton6");
	double peso6 = gtk_spin_button_get_value (spin6);

	GtkSpinButton *spin7 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton7");
	double peso7 = gtk_spin_button_get_value (spin7);

	GtkSpinButton *spin8 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton8");
	double peso8 = gtk_spin_button_get_value (spin8);

	GtkSpinButton *spin9 = (GtkSpinButton*)gtk_builder_get_object(montador, "spinbutton9");
	double peso9 = gtk_spin_button_get_value (spin9);

	
	//distribuição dos pesos nos valores recebidos
	double qt= (valor1* peso1) + (valor2* peso2) + (valor3* peso3) + (valor4* peso4) + (valor5* peso5) + (valor6*peso6) + (valor7*peso7) + (valor8* peso8) + (valor9* peso9);//distribuição dos pesos nos valores recebidos das equações

	char iqanum;
	sprintf(&iqanum, "%f",qt);  //conversão de um double para um char



	gtk_label_set_text(label1, &iqanum); //imprime no label1 o valor do iqa


    char *qualidade =quality(&iqanum);
    gtk_label_set_text(label2, qualidade);// imprime no label2 a qualidade do iqa

}

void salvar(GtkButton *botao2, gpointer data) {
	GtkBuilder *montador = (GtkBuilder*)data;

    
    GtkEntry *entrada1 = (GtkEntry*)gtk_builder_get_object(montador, "entry1");//declarando a entrada
	GtkEntry *entrada2 = (GtkEntry*)gtk_builder_get_object(montador, "entry2");
	GtkEntry *entrada3 = (GtkEntry*)gtk_builder_get_object(montador, "entry3");
	GtkEntry *entrada4 = (GtkEntry*)gtk_builder_get_object(montador, "entry4");
	GtkEntry *entrada5 = (GtkEntry*)gtk_builder_get_object(montador, "entry5");
	GtkEntry *entrada6 = (GtkEntry*)gtk_builder_get_object(montador, "entry6");
	GtkEntry *entrada7 = (GtkEntry*)gtk_builder_get_object(montador, "entry7");
	GtkEntry *entrada8 = (GtkEntry*)gtk_builder_get_object(montador, "entry8");
	GtkEntry *entrada9 = (GtkEntry*)gtk_builder_get_object(montador, "entry9");
	


	FILE *f = fopen("arquivo.txt", "w");

	rewind(f);

    if (f == NULL){

        printf("Falha ao salvar arquivo\n");
    }

        const char *buffer1 = gtk_entry_get_text(entrada1);
        fprintf(f ,"%s\n", buffer1);
        const char *buffer2 = gtk_entry_get_text(entrada2);
        fprintf(f ,"%s\n", buffer2);
        const char *buffer3 = gtk_entry_get_text(entrada3);
        fprintf(f ,"%s\n", buffer3);
        const char *buffer4 = gtk_entry_get_text(entrada4);
        fprintf(f ,"%s\n", buffer4);
        const char *buffer5 = gtk_entry_get_text(entrada5);
        fprintf(f ,"%s\n", buffer5);
        const char *buffer6 = gtk_entry_get_text(entrada6);
        fprintf(f ,"%s\n", buffer6);
        const char *buffer7 = gtk_entry_get_text(entrada7);
        fprintf(f ,"%s\n", buffer7);
        const char *buffer8 = gtk_entry_get_text(entrada8);
        fprintf(f ,"%s\n", buffer8);
        const char *buffer9 = gtk_entry_get_text(entrada9);
        fprintf(f ,"%s\n", buffer9);
        
        
        fflush(f);
    

    fclose(f);
}


