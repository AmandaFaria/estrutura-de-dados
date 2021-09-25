#include <stdio.h>
#include <locale.h>

int MOD(int x, int y){

    if(x<y)
	{
        return x;
	}

    else
	{
    	return MOD( x-y, y);
	}
}

int main(){
setlocale(LC_ALL, "");
int x, y, resto;

printf("Digite o X: ");

scanf("%d", &x);

printf("Digite o Y: ");

scanf("%d", &y);

if(x < 0 || y < 0){
	printf("\nDigite apenas números positivos!\n ");
} else
resto = MOD(x,y);

printf("O MOD é: %d",resto);

}
