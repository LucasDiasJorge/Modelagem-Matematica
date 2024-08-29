#include <stdio.h>
#include <math.h>

#define PI 3.14

double lancamento(int theta){

    double v0 = 300; // Velocidade inicial

    double g = 10; // Gravidade

    double a = ((pow(v0,2)/g) * sin(2*theta*PI/180));

    return a; 

}

int main(){

    int angulos[5] = {15,30,45,60,75};

    int entities = sizeof(angulos)/sizeof(int);

    for (int i = 0; i < entities; i++)
    {
        printf("%f\n", lancamento(angulos[i]));
    }
    

    return 0;
}