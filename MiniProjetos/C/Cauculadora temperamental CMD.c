#include <stdio.h>;

int main(){
    int cont=0, desisto=0;
    float x, y, z;
    char operador, end='s';

    printf("Ola, eu sou a cauculadora temperamental\n\n");
    
    while(end=='s'){
        cont++;
        printf("\nEssa e nossa %d operacao agora! :]\n",cont);
        printf("\nDigite sua operacao no formato [(X E Reais)(+, -, * ou /)(Y E Reais)] apertando a tecla 'espaco' apos cada simbolo: \n\n\n");
        
        scanf("%f",&x);
        scanf("%s",&operador);
        scanf("%f",&y);
        printf("=============================================================================================================");
    
        if (operador=='*'){
            z=x*y;
            printf("\n %.2f\n",z);
        }
        else if (operador=='/'){
            z=x/y;
            printf("\n %.2f\n",z);
        }
        else if (operador=='+'){
            z=x+y;
            printf("\n %.2f\n",z);
        }
        else if (operador=='-'){
            z=x-y;
            printf("\n %.2f\n",z);
        }
        else if (operador=='='){
            printf("\nIncrivel! Descobriu sozinho? \n");
        }
        else{
            desisto++;
            if(desisto==3){
                printf("Ah desisto! Tchau.");
                exit(0);
            }
            printf("\nSegue as instrucoes jumento!\n");
        }
        
        do{
            printf("\n\nDeseja realizar mais uma operacao? (s ou n): ");
            scanf("%s",&end);

                if(end!='s' && end!='n'){
                    desisto++;
                        if(desisto==3){
                            printf("\nAh desisto! Tchau.\n");
                            exit(0);
                        }
                    printf("\nSegue as instrucoes jumento!");
                }
        }while(end!='s' && end!='n');
    }
}