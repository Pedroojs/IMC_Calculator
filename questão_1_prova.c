#include <stdio.h>
#include <stdlib.h>

//criar um programa que faça o calculo do IMC

void main(){
int opcao, inicio = 0;
float peso, altura, imc;

printf("\nBem vindo ao calculador de IMC!!\n\n");

while (inicio == 0) {  //manter o app em looping

printf("Escolha uma das opções abaixo:\n");
printf(" 1) Calcular IMC\n 2) Consultar IMC Anterior\n 3) Exibir Faixas de IMC\n 4) Sair\n");
scanf("%d", &opcao);

switch (opcao) { //switch para escolha de opçoes
case 1:
    printf("insira o seu peso: \n");
    scanf("%f", &peso);
    printf("insira sua altura: \n");
    scanf("%f", &altura);
    if (peso <= 0 || altura <= 0 ) //consultar se altura e peso sao validos
    {
        printf("imc não pode ser calculado, valores inválidos.\n");
    } else{
    imc = peso / (altura * altura); //formula para calculo do imc
    printf("O seu imc é: %g\n", imc);

    if (imc < 18.5)
    {
        printf("Situação: Abaixo do Peso \nRecomendação: Considere melhorar sua alimentação e consultar um médico.\n\n");
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("Situação: Peso normal \nRecomendação: Mantenha uma dieta equilibrada e exercícios regulares.\n\n");
    } else if(imc >= 25.0 && imc <= 29.9){
        printf("Situação: sobrepeso \nRecomendação: Considere uma reavaliação de sua dieta e rotina de exercícios.\n\n");
    } else {
        printf("Situação: obesidade \nRecomendação: Procure ajuda médica para um plano de controle de peso.\n\n");
    }
    } 
   
    break;

case 2:
    if (imc <= 0)
    {
        printf("valor de imc inválido, tente novamente.\n");
    } else {
    printf("\no seu imc é: %g\n", imc);
    if (imc < 18.5)
    {
        printf("Situação: Abaixo do Peso \nRecomendação: Considere melhorar sua alimentação e consultar um médico.\n\n");
    } else if(imc >= 18.5 && imc <= 24.9){
        printf("Situação: Peso normal \nRecomendação: Mantenha uma dieta equilibrada e exercícios regulares.\n\n");
    } else if(imc >= 25.0 && imc <= 29.9){
        printf("Situação: sobrepeso \nRecomendação: Considere uma reavaliação de sua dieta e rotina de exercícios.\n\n");
    } else {
        printf("Situação: obesidade \nRecomendação: Procure ajuda médica para um plano de controle de peso.\n\n");
    }
    }
    break;

case 3:
    printf("- Abaixo do peso: Considere melhorar sua alimentação e consultar um médico.\n- Peso normal: Mantenha uma dieta equilibrada e exercícios regulares.\n- Sobrepeso: Considere uma reavaliação de sua dieta e rotina de exercícios.\n- Obesidade: Procure ajuda médica para um plano de controle de peso.\n");
    break;

case 4:
    printf("Encerrando o programa...\n");
    inicio = 4;
    break;

default:
    break;
}

}

















}