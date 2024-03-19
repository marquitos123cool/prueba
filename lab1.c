#include <stdio.h>
#include <math.h>

float ACirculo(float radio);
float ACuadrado(float base, float altura);
float ATriangulo(float T1, float T2, float T3);

int main(void){

int menu;
float radio;
float base;
float altura;
float T1;
float T2;
float T3;


printf("Menu: \n");
printf("\n");
printf("1) area  circulo: \n");
printf("2) area  cuadrado: \n");
printf("3) area  triangulo: \n");
printf("\n");
printf("Ponga el numero de la accion que desea realizar :)) \n");
scanf("%d",&menu);

switch(menu){

    case 1:
    printf("Porfavor dame el radio del circulo:  \n");
    scanf("%f",&radio);
    printf("Tu Area del criculo es %.2f :D\n", ACirculo(radio));
    break;

    case 2:
    printf("Porfavor dame la base del cuadrado: \n");
    scanf("%f",&base);
    printf("Porfavor dame la altura del cuadrado: \n");
    scanf("%f",&altura);
    printf("Tu Area del cuadrado es %.2f :D\n", ACuadrado(base,altura));
    break;

    case 3:
    printf("Porfavor dame el lado A del Triangulo: \n");
    scanf("%f",&T1);
    printf("Porfavor dame el lado B del Triangulo: \n");
    scanf("%f",&T2);
    printf("Porfavor dame el lado C del Triangulo: \n");
    scanf("%f",&T3);

    if(T1+T2>T3 && T2+T3>T1 && T3+T1>T2){
        printf("Tu Area del Trinagulo es %.2f :D\n", ATriangulo(T1,T2,T3));
    } else{
        printf("No cumple con los requisitos.-.");
    }
    break;

    default:
    printf("No elejiste uno de los numeros marcados._.");
    break;
}
    return 0;
}
