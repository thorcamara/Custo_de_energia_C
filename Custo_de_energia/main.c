#include <stdio.h>
#include <stdlib.h>

void calcKw(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
	
	(*v_kw) = v_sal / 1000;
	(*v_rs) = (*v_kw) * q_kw;
	(*v_dsc) = (*v_rs) * 0.85;	
}

int main(int argc, char *argv[]) {
	
	float val_sal, qtde_kw, val_kw, val_reais, val_desc;
	
	printf("Insira o salario minimo:\n");
	scanf("%f", &val_sal);
	printf("Insira a quantidade de KW gastos:\n");
	scanf("%f", &qtde_kw);
	
	calcKw(val_sal, qtde_kw, &val_kw, &val_reais, &val_desc);
	
	printf("Valor de 1 KW (em R$): %.2f.\n", val_kw);
	printf("Valor a ser pago pelo residencia (em R$): %.2f.\n", val_reais);
	printf("Valor com desconto (em R$): %.2f.\n", val_desc);
	
	return 0;
}
