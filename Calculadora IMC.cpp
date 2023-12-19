#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");	
	float peso, altura, imc;
		
	printf("Digite seu Peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	imc = peso / (altura * altura);
	printf("Seu IMC �: %.2f\n", imc);
	 
	
	if(imc < 18.5) {
		printf("Voc� est� abaixo do peso.\n");
	} else if(imc >= 18.5 && imc <= 24.9) {
		printf("Voc� est� com peso normal.\n");
	} else if(imc >= 25 && imc <= 29.9) {
		printf("Voc� est� com sobrepeso.\n");
	} else if(imc >= 30 && imc <= 34.9) {
		printf("Voc� est� com obesidade grau I.\n");
	} else if(imc >= 35 && imc <= 39.9) {
		printf("Voc� est� com obesidade grau II (severa).\n");
	} else {
		printf("Voc� est� com obesidade grau III (m�rbida).\n");
	}
	
	printf("Seu Resultado foi incorreto? Verifique se usou ( , ) e n�o ( . ) como separador d�cimal em sua altura.");
		return 0;
	
}
