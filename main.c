
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int EsistonoSoluzioniReali(float a, float b, float c);
float CalcolaDeterminante(float a, float b, float c);
float CalcolaSoluzione1(float a, float b, float c);
float CalcolaSoluzione2(float a, float b, float c);
void StampaRisultato(float x1, float x2);

int main(int argc, char** argv) {
    
    
    float a,b,c;
    float determinante;
    float x1 = 0;
    float x2 = 0;
    
    printf("Inserisci il coefficiente a:\n");
    scanf("%f", &a);
    
    printf("Inserisci il coefficiente b:\n");
    scanf("%f", &b);
    
    printf("Inserisci il coefficiente c:\n");
    scanf("%f", &c);
    
    
    if(EsistonoSoluzioniReali(a,b,c))
    {
            x1=CalcolaSoluzione1(a,b,c);
            x2=CalcolaSoluzione2(a,b,c);
            StampaRisultato(x1,x2);
    }
    else
    {
            printf("Non esistono soluzioni reali che soddisfano l'equazione data"); 
    }  
    
    
    

    return (EXIT_SUCCESS);
}

float CalcolaDeterminante(float a, float b, float c){
    float determinante;
    determinante = b*b -4*a*c;
    return determinante;
}
int EsistonoSoluzioniReali(float a, float b, float c){
    float determinante;
    
    determinante=CalcolaDeterminante( a, b, c);
    
    if(determinante<0){
        return 0;
    }
    else if(determinante>=0){
        return 1;
    }
}
float CalcolaSoluzione1(float a, float b, float c){
    float x1;
    float determinante;
    determinante=CalcolaDeterminante( a, b, c);
    determinante=sqrt(determinante);
    x1 = (-b+determinante)/(a*2);
    return x1;
}
float CalcolaSoluzione2(float a, float b, float c){
    float x2;
    float determinante;
    determinante=CalcolaDeterminante( a,  b, c);
    determinante=sqrt(determinante);
    x2 = (-b-determinante)/(a*2);
    return x2;
}
void StampaRisultato(float x1, float x2){
    
    printf("X1 vale: %f\n", x1);
    printf("X2 vale: %f\n", x2);
    return;
}
