#include <stdio.h>

int main() {
float valorTotal, Etiqueta, desconto1, desconto2, desconto3, cartao2x, opcaoJuros, acrescimo, valorParcela, valorTotalComJuros;
int Opcao, numParcelas, Resumo;

printf("Valor a ser pago: \n");
scanf("%f", &Etiqueta);

while(Etiqueta <= 0){
printf("Preco invalido, digite um valor positivo. \n");
scanf("%f", &Etiqueta);
}
printf("\nQual a forma de pagamento? \n");
printf("Opcao 1 - A vista em dinheiro - 15 por cento de desconto; \n");
printf("Opcao 2 - A vista no cartao de debito - 10 por cento de desconto; \n");
printf("Opcao 3 - A vista no cartao de credito - 5 por cento de desconto; \n");
printf("Opcao 4 - 2x no cartao de credito - preco de etiqueta - SOMENTE COMPRAS ACIMA DE R$100,00; \n");
printf("Opcao 5 - De 3x a 10x - Juros de 10 por cento - SOMENTE COMPRAS ACIMA DE R$300,00; \n");
scanf("%d", &Opcao);

switch(Opcao) {
	case 1:
	desconto1 = (Etiqueta * 0.85);
	printf("O valor total com o desconto ficou em: R$%.2f\n", desconto1);
	break;
	case 2:
	desconto2 = (Etiqueta * 0.90);
	printf("O valor total com o desconto ficou em: R$%.2f\n", desconto2);
	break;
	case 3:
	desconto3 = (Etiqueta * 0.95);
	printf("O valor total com o desconto ficou em: R$%.2f\n", desconto3);
	break;
	case 4:
	if (Etiqueta >= 100.00) {
	cartao2x = (Etiqueta / 2.00);
	printf("O valor total da primeira e segunda parcela a serem pagas ficou em: R$%.2f\n", cartao2x);
} 	else {
	printf("O valor informado nao e maior de R$100,00. Tente novamente. \n");
}
	break;
	case 5:
	if (Etiqueta >= 300.00) {
		printf("Quantas parcelas (de 3 a 10)? \n");
		scanf("%d", &numParcelas);
	
	while (numParcelas < 3 || numParcelas > 10) {
		printf("Numero de parcelas deve ser entre 3 e 10. Tente novamente. \n");
		scanf("%i", &numParcelas);
}
	acrescimo = (Etiqueta * 0.1);
	valorTotalComJuros = Etiqueta + acrescimo;
	valorParcela = valorTotalComJuros / numParcelas;
	printf("O valor total de cada parcela ficou em: R$%.2f\n", valorParcela);
} 	break; {
	printf("O valor informado nao e maior de R$300,00. Tente novamente. \n");
}
	break;
	default:
		printf("Opcao informada nao existe. Por favor, tente novamente.");
		break;
}
printf("\nResumo da Compra: \n");

switch(Resumo) {
float valorEconomizado1, valorEconomizado2, valorEconomizado3, valorAcrescimo1;
case 1:
if (Opcao = desconto1) {
printf("Opcao de pagamento escolhida: A vista em dinheiro. \n");
printf("Valor do produto: R$%.2f\n", Etiqueta);
printf("Valor do produto com desconto: R$%.2f\n", desconto1);
printf("O produto nao teve acrescimos. \n");
valorEconomizado1 = Etiqueta * 0.15;
printf("Valor economizado: R$%.2f\n", valorEconomizado1);
} else;
case 2:
if (Opcao = desconto2) {
printf("Opcao de pagamento escolhida: A vista no cartao de debito. \n");
printf("Valor do produto: R$%.2f\n", Etiqueta);
printf("Valor do produto com desconto: R$%.2f\n", desconto2);
printf("O produto nao teve acrescimos. \n");
valorEconomizado2 = Etiqueta * 0.10;
printf("Valor economizado: R$%.2f\n", valorEconomizado2);
} else;
case 3:
if (Opcao = desconto3) {
printf("Opcao de pagamento escolhida: A vista no cartao de credito. \n");
printf("Valor do produto: R$%.2f\n", Etiqueta);
printf("Valor do produto com desconto: R$%.2f\n", desconto3);
printf("O produto nao teve acrescimos. \n");
valorEconomizado3 = Etiqueta * 0.05;
printf("Valor economizado: R$%.2f\n", valorEconomizado3);
} else;
case 4:
if (Opcao = cartao2x) {
printf("Opcao de pagamento escolhida: 2x no cartao de credito. \n");
printf("Valor do produto: R$%.2f\n", Etiqueta);
printf("O produto nao teve descontos. \n");
printf("O produto nao teve acrescimos. \n");
printf("Valor economizado: R$0,00. \n");
} else;
case 5:
if (Opcao = valorParcela) {
printf("Opcao de pagamento escolhida: De 3x a 10x - Juros de 10 por cento. \n");
printf("Valor do produto: R$%.2f\n", Etiqueta);
printf("O produto nao teve descontos. \n");
printf("O valor do produto com acrescimo: R$%.2f\n", valorTotalComJuros);
valorAcrescimo1 = Etiqueta * 0.10;
printf("Valor acrescido: R$%.2f\n", valorAcrescimo1);
} else;
break;
} 
printf("Agradecemos pela compra! Feliz pascoa! \n");
}