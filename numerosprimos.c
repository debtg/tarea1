#include<stdio.h>
void main(){
    int numero1,numero2;
    do{
    printf("Agrega dos numeros del 1 al 5\n");
    scanf("%d %d",&numero1,&numero2);
    if((numero1!=4)&&(numero2!=4))
        printf("Son primos\n");
    else
        printf("No son primos\n");
    }while(numero1!=0);

}
