#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void epar (int x){
    if((x%2)==0){
        printf("O n�mero � par.");
    }
    else{
        printf("O n�mero n�o � par.");
    }
}


int main(){
    {//Aqui comentando qualquer coisa pra testar

    //printf("Hello world!\n");

    //printf("hELLO WORLD!\n");

    //system("pause");

    //printf("Hello word!\n");

    //int x,y;
    //y=5; x=4;
    //printf("O valor atual de x = %d \nO valor de y = %d\n",x,y);

    //char c='f';
    //char nome[100]="Barbarinha";
    //printf("O nome � %s e o sexo � %c",nome,c);
    //return 0;

    //char nome[100];
    //int idade;
    //char classe[100];
    //char sexo[100];
    //printf("Digite o seu nickname: ");
    //scanf("%s",&nome);
    //printf("\nDigite sua idade: ");
    //scanf("%d",&idade);
    //printf("\nDigite sua classe: ");
    //scanf("%s",&classe);
    //printf("\nDigite o seu sexo (famale ou male): ");
    //scanf("%d",&sexo);
    //printf("\nEsta e o seu perfil: \nNick=%s; \nIdade=%d; \nClasse=%s; \nSexo=%s",nome,idade,classe,sexo);

    //printf("\nObrigado e BEM VINDO >:)");

    /*float l1; float l2; float A;

    printf("BEM VINDO A CALCULADORA RETANGULAR :]");
    printf("\nDigite o valor do primeiro lado: ");
    scanf("%f",&l1);
    printf("\nDigite o valor do segundo lado: ");
    scanf("%f",&l2);
    A = l1*l2;
    printf("\nA �rea do seu ret�ngulo �: %.2f", A);*/

    /*float n1,n2,n3,M;
    printf("Bem vindo ao FailCalculator!\n");
    printf("Digite suas 3 notas para que possamos caucular seu destino inevit�vel:\n");
    printf("Aqui suas notas: \n"); scanf("%f,%f,%f",&n1,&n2,&n3);
    M=n1+n2+n3/3;
    printf("Sua m�dia �: %.2f \n",M);
    printf("J� sab�amos que seria assim n�? Boa sorte!");*/

    /*float n,p;
    printf("VAMOS DESCOBRIR SEU PESO IDEAL?");
    printf("\nS� precisamos saber sua altua: ");
    scanf("%f",&n);
    p=(72.7*n)-58;
    printf("\nSeu peso ideal � %.2f",p);*/

    /*float n1,n2,n3,M;
    printf("Bem vindo ao FailCalculator 2.0!\n");
    printf("Digite suas 3 notas para que possamos caucular seu destino inevit�vel:\n");
    printf("Aqui suas notas: \n"); scanf("%f,%f,%f",&n1,&n2,&n3);
    M=n1+n2+n3/3;
    printf("\nSua m�dia �: %.2f \n",M);
    if(M>=7)
    {   printf("\nParab�ns! Voc� conseguiu se safar. Ser� que vai ser sempre assim?\n");}

    if(M<7)
    {   printf("\nVoc� foi reprovado! Mas j� sabiamos disso ne?\n");}*/


    /*int end=0;

    while(end==0){
        printf("Descubra se seu n�mero � positivo ou negativo.\n");
        float num;
        printf("Digite aqui seu n�mero: "); scanf("%f",&num);
        if(num>0){
            printf("Seu n�mero � positivo\n!");
        }
        if(num<0){
            printf("Seu n�mero � negativo\n!");
        }
        else {
            printf("Seu n�mero � nulo\n!");
        }
        printf("Digite 1 para sair ou 0 para comtimuar: ");
        scanf("%d",&end);*/

        /*int cont;
        for(cont=100;cont<=200;cont=cont+2){
            printf("%d \n",cont);
        }*/



        /*int num;
        printf("Bem vindo ao contador de fulano: \n Quantos fulanos voc� deseja adicionar? ");
        scanf("%d",&num);

        while (num!=0){
            printf("Digite o nome do fulano %d: ",num);
            char nome[20];
            scanf("%s",&nome);
            printf("\n%s cadastrado com sucesso!\n",nome);

            num--;
        }
        printf("\nTodos os fulanos foram cadastrados com sucesso!");*/



    /*float $,$2;
    printf("Conversor de pre�o da loja do fulano\n");
    printf("Insira o valor de compra do produto: ");
    scanf("%f",&$);
    if($<15){
        $2=$+($*35/100)+($*9/100);
        printf("O valor do seu produto com lucro �: %.2f",$2);
    }
    if($>=15){
        $2=$+($*20/100)+($*9/100);
        printf("O valor do seu produto com lucro �: %.2f",$2);
    }*/



    /*char re[80];
    printf("\nDigite seu nome: ");
    gets(re);
    printf("Oi %s\n",re);
    system("Pause");*/


    /*int num;
    printf("Digite um n�mero: ");
    scanf("%d",&num);
    epar(num);
    system("pause");*/

    /*int v[10];
    int a =10;
    v[3]=50;
    printf("%d\n",v[3]);
    printf("%d\n",a);
    return 0;*/
    ////////////////////////////// 5 ///////////////////////////
    /*
    int vet,n=0;
    printf("Insira o valor de casas do vetor: ");
    scanf("%d",&vet);
    int v[vet];

    printf("\n\nInsira o valor de cada vetor a seguir: ");
    while(n!=vet){
        printf("\n\nInsira o valor de v%d = ",n);
        scanf("%d",&v[n]);
        printf("\n\nv%d = %d", n,v[n]);
        n++;
    }
    ///////////////////////////////////////
    n=0;
    int u[vet];
    while(n!=vet){
        u[n]=v[n]*(3+9);
        printf("\n\nu%d = %d", n, u[n]);
        n++;
    }
    ///////////////////////////////////////
    n=0;
    int r[vet];
    while(n!=vet){
        r[n]=v[n]+u[n];
        printf("\n\nr%d = %d", n,r[n]);
        n++;
    }*/

    /////////////////////////////// 4 ////////////////////////////////
    /*
    int vet, n=0, salplus=0;
    float somasal=0, somasaladd, custprom, somaprom=0;
    printf("Insira a quantidade de funcion�rios: (Funcionarios: 59) ");
    scanf("%d",&vet);
    float v[vet];

    while(n!=vet){
        n++;
        printf("Insira o sal�rio do funcion�rio %d : ",n);
        scanf("%f",&v[n-1]);
        somasal=somasal+v[n-1];
        if(v[n-1]>4000){
            salplus++;
        }
        if(v[n-1]<4000){
            somasaladd=v[n-1];
            custprom=somasaladd+(somasaladd*14/100);
            somaprom=somaprom+custprom;
        }
    }

    printf("\n\n\nFuncionarios que recebem mais de 4000R$: %d\n\n",salplus);
    printf("Gasto com funcionarios: %.2f\n\n",somasal);
    printf("Gasto caso promo��o: %.2f",somaprom);
    */


    ////////////////////////// 3 //////////////////////////////
    /*
    int ddd, numero;
    printf("Bemvindo ao leitor de DDD\n\n");
    printf("ATENCAO: Para um bom funcionamento do programa siga cprretamente as instru��es.\n\n");
    printf("Insira o n�mero no formato DDD 9XXXXXXXX (espaco entre DDD e n�mero): ");
    scanf("%d %d",&ddd,&numero);

    if(ddd==71){
        printf("Este DDD � de salvador.");
    }
    else if(ddd>=11 && ddd<=15){
        printf("Este DDD � de S�o Paulo.");
    }
    else if(ddd==98 || ddd==99){
        printf("Este DDD � do Maranh�o.");
    }
    else{
        printf("DDD desconhecido.");
    }*/


    ///////////////////////// 2 ////////////////////////////
    /*
    int lado=1;

    while(lado!=0){
        printf("Digite a quantidade de lados do seu pol�gono (para sair digite 0): ");
        scanf("%d",&lado);

        if(lado==0){
            printf("\n\nBom te ver ate a proxima :)/\n\n");
            exit(0);
        }
        else if(lado<3){
            printf("\n\nPoligono invalido!\n\n");
        }
        else if(lado==3){
            printf("\n\nEste poligono e um TRIANGULO.\n\n");
        }
        else if(lado==4){
            printf("\n\nEste poligono � um QUADRADO.\n\n");
        }
        else if(lado==5){
            printf("\n\nEste poligono e um PENTAGONO.\n\n");
        }
        else{
            printf("\n\nAinda n�o mapeamos este poligono ainda. Aguarde por mais atualizacoes ;)\n\n");
        }
    }*/


    ////////////////////////////////// 1 ////////////////////////////////
    /*
    char time1[9],time2[100];
    int gol1, gol2;

    while(time1!="encerrar"){
        printf("Para encerrar digite 'encerrar' no time 1.\n\n");
        printf("Insira o nome do time 1: ");
        scanf("%s",&time1);

        if(time1=="encerrar"){
            printf("Bom te ver. Ate mais :)/");
            exit(0);
        }

        printf("\n\nInsira quantidade de gols do %s: ",time1);
        scanf("%d",&gol1);
        printf("\n\nInsira o nome do time 2: ");
        scanf("%s",&time2);
        printf("\n\nInsira quantidade de gols do %s: ",time2);
        scanf("%d",&gol2);

        if(gol1>gol2){
            printf("\n\nO time %s venceu!\n\n",time1);
        }
        else if(gol1<gol2){
            printf("\n\nO time %s venceu!\n\n",time2);
        }
        else if(gol1==gol2){
            printf("\n\nEMPATE!\n\n");
        }
    }*/


    /*char v[2];

    printf("Nome 1: "); scanf("%s",&v[0]);
    printf("Nome 2: "); scanf("%s",&v[1]);

    printf("\n\n%s",v[0]);
    printf("\n\n%s",v[1]);*/}

    int a, b, d;
    int v[10];

    printf("Insira o valor de cada indice de v[10] sem repetir: ");
    for(a=0;a<10;a++){

        printf("\nDigite o valor de v[%d]: ",a); scanf("%d",&d);
        b=0;
        while(b<9){
            for(b=0;b<10;b++){
                if(d==v[b]){
                    printf("\n////////// ! ///////////\nValor ja colocado\nInsira outro valor: ");
                    scanf("%d", &d);
                    printf("\n");
                    break;
                }
                else if(b==9){
                    v[a]=d;
                }
            }
        }
    }

    printf("\n\n\nO vetor criado: ");
    for (b=0;b<10;b++){
        printf("\nv[%d]: %d",b,v[b]);
    }

    printf("\n\n\n");

}
