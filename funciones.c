#include<stdio.h>
#include<math.h>


//Lab1
float ACirculo(float radio){
    return radio*radio*3.1416;
}

float ACuadrado(float base, float altura){
    return base*altura;
}

float ATriangulo(float T1, float T2, float T3){

    float S=(T1+T2+T3)/2;
    return sqrt(S*(S-T1)*(S-T2)*(S-T3));

    }
    
  //Lab2

float PROM(float cal1, float cal2, float cal3, float cal4, float cal5, float cal6, float cal7, float cal8, float cal9, float cal10){

return (cal1+cal2+cal3+cal4+cal5+cal6+cal7+cal8+cal9+cal10)/2;

}