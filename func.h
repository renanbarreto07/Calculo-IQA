double q1 ( double p){
	double q1, a, y1, y2, y3, y4, y5, d = 100.8, e = -106, f = -3745, indice=0;
	

    q1 = d * exp ( pow( (p + e), 2 ) / f );

	return q1;
}

double q2(double p){
	double q2;

	q2= 98.24034 - 34.7145 * (log10(p)) + 2.614267 *(pow(log10(p), 2)) + 0.107821 * (pow(log10(p), 3));

	
	return q2;
}

double q3(double c){
	double q3;

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
	return q3;
}

double q4(double d){
	double q4;

	if(d>30){
		q4=2;
	}
	else{
		q4= 100.9571 - 10.7121 * d + 0.49544 * pow(d, 2) - 0.011167 * pow(d, 3) + 0.0001 * pow(d, 4);
	}
	return q4;
}

double q9(double e){
	double q5;

	if(e<=10){
	
		q5=-5.1*e+100.17;
	}
	else if(e>10 && e<=60){
		q5=-22.853*log(e) + 101.18;
	}
	else if(e>60 && e<=90){
		q5=10000000000*pow(e, -5.1161);
	}
	else if(e>90){
		q5=1;
	}
	return q5;
}

double q5(double f){
	double q6;
	if(f>10){
		q6=5;
	}
	else{
		q6= 79.7*(pow(f + 0.821, -1.15));
	}
	return q6;
}

double q6(double g){
	double q7;
	if(g>100){
		q7=5;
	}
	else{
		q7=90.37* pow(2.7182818, (-0.0169 * g)) - 15*cos((0.0571*(g-30))) + 10,22* pow(2.718281828, (-0.231*g)) -0.8;
	}
	return q7;
}

double q7(double h){
	double q8;
	if(h>500){
		q8=30;
	}
	else{
		q8= 133.17* (pow(2.7182818, (-0.0027 * h))) -53.17* (pow(2.7182818 , (-0.0141 *h))) + ((-6.2*(pow(2.7182818, (-0.00462*h)))) *sin(0.0146*h));
	}
	return q8;
}

double q8(double i){
	double q9;

	if(i>15){
		q9=9;
	}
	else if(i<=5){
		q9=1;
	}
	else{
		q9=1/(0.0003869*pow(i + 0.1815, 2) + 0.01081);
	}
	return q9;
}

char *quality(char *qt){
	char a, *b="Otima", *c="Boa", *d= "Aceitavel", *e="Ruim", *f="Pessima";
	
	int iqa = atoi(qt);


	if(iqa<=100 && iqa>80){
		return b;
	}

	if(iqa<=80 && iqa>50){
		return c;
	}
	if(iqa<=50 && iqa>36){
		return d;
	}
		
	if(iqa<=36 && iqa>20){
		return e;
	}
	if(iqa<=20){
		return f;
	}

	
}
/*
void salvar() {

    FILE *f = fopen("DB.txt", "w");

    if (f == NULL){

        printf("Error opening the file ...\n");
    }

    rewind(f);
    

        const char *buffer1 = entry(entry1).getEntry();
        fprintf(f ,"%s\n", buffer1);
        const char *buffer2 = entry(entry2).getEntry();
        fprintf(f ,"%s\n", buffer2);
        const char *buffer3 = entry(entry3).getEntry();
        fprintf(f ,"%s\n", buffer3);
        const char *buffer4 = entry(entry4).getEntry();
        fprintf(f ,"%s\n", buffer4);
        const char *buffer5 = entry(entry5).getEntry();
        fprintf(f ,"%s\n", buffer5);
        const char *buffer6 = entry(entry6).getEntry();
        fprintf(f ,"%s\n", buffer6);
        const char *buffer7 = entry(entry7).getEntry();
        fprintf(f ,"%s\n", buffer7);
        const char *buffer8 = entry(entry8).getEntry();
        fprintf(f ,"%s\n", buffer8);
        const char *buffer9 = entry(entry9).getEntry();
        fprintf(f ,"%s\n", buffer9);
        
        
        fflush(f);
    }

    fclose(f);
}
*/