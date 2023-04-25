#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    system("MODE con cols=200 lines=55");
    system("title AV2 LabProg - Marcelo Eryk Nascimento Cardoso");

    //Variáveis:
    char end, quebra; int quantidade,n=0, questao; //Variaveis de estrutura de repetição

    int hor, min, addhor, addtime, plustime;//Variaveis de tempo

    float custo, preco, salbrut, saliq, INSS, IR, come, porcrepA, porcrepB, porcrepC, porcrepgeral, total, pripor, segpor; //Variaveis de precisão

    int alunosA, alunosB, repA, repB, somaint, somarepAB, depen, a, b, c, d, e, f, g, h; //Variaveis necessariamente inteiras

    char nome[10], nome2[10], nome3[10]; //Variaveis vetores char

    //Estrutura de repetição principal:
    end='s';

    while(end=='s'){
        //Boas vindas:
        printf("Bem vindo!\n\nAV2 da cadeira de ferias de Lab de programacao\nProf.: FELIPE BORGES PEREIRA\nAluno: Marcelo E N Cardoso\n\n");
        printf("ATENCAO: Para um funcionamento previsivel do programa reproduza fielmene as opcoes sugeridas.\n\n");


        //Enunciado:
        printf("\n\nEscolha a questao que voce gostaria de avaliar (reproduza apenas o numero): \n\n");
        printf(" 1. Precificador             2. Cauculador de aprov.     3. O Shopping...       4. O usuario...             5. Leia o nome...  \n");
        printf(" 6. Faca um algoritmo...     7. Leia um codigo...        8. Utilize uma...      9. Faca um programa...     10. Faca um...      \n");
        printf("11. Faca um algoritmo...    12. Faca um programa...     13. Faca um pro...     14. Um cinema...                              \n\n");
        printf("Sua opcao aqui: ");
        scanf("%d",&questao);

        switch(questao){

            case 1:
                system("title Precificador");
                system("cls");
                printf("1. Um comerciante comprou um produto e quer vende-lo com um lucro de (35 porcento + ultimo digito do seu\ncodigo de matricula porcento) se o valor da compra for menor que R$ 15,00; caso contrario, o lucro sera de (20 porcento +\no ultimo digito do seu codigo de matricula porcento). Construa um algoritmo que leia o valor do produto e imprima\no valor de venda para o produto.");
                printf("\n\nQuantos produtos voce deseja precificar? "); scanf("%d",&quantidade);

                while(quantidade!=n){
                    n++;
                    printf("\n\nInsira o valor do produto %d: ",n); scanf("%f",&custo);

                    if(custo<15){
                        preco=custo+(custo*35/100)+(custo*9/100);
                        printf("O valor de venda do produto %d e: %.2f\n", n, preco);
                    }
                    else{
                        preco=custo+(custo*20/100)+(custo*9/100);
                        printf("O valor de venda do produto %d e: %.2f\n", n, preco);
                    }
                }
                system("pause");
                break;

            case 2:
                system("title Indice de reprovação");
                system("cls");
                printf("2. A Turma A e composta de (40 + o ultimo digito do seu codigo de matricula) alunos, e a turma B de (50 +\no ultimo digito do seu codigo de matricula) alunos. Escreva um algoritmo que leia o percentual de alunos\nreprovados na turma A, o percentual de aprovados na turma B, calcule e escreva:\na. O numero de alunos reprovados na turma A.\nb. O numero de alunos reprovados na turma B.\nc. A porcentagem de alunos reprovados em relacao ao total de alunos das duas turmas.");

                printf("\n\nInsira a quantidade de alunos da turma A (digite 49): "); scanf("%d",&alunosA);
                printf("\n\nInsira a quantidade de alunos da turma B (digite 59): "); scanf("%d",&alunosB);
                printf("\n\nInsira a quantidade de reprovados da turma A (1 - %d): ",alunosA); scanf("%d",&repA);
                printf("\n\nInsira a quantidade de reprovados da turma B (1 - %d): ",alunosB); scanf("%d",&repB);
                
                porcrepA=(repA*100)/alunosA;
                porcrepB=(repB*100)/alunosB;
                somaint=alunosA+alunosB;
                somarepAB=repA+repB;
                porcrepgeral=(somarepAB*100)/somaint;


                printf("\n\n\nReprovados turma A: %d",repA); printf("\nReprovados turma B: %d",repB);
                printf("\n\nPercentual de reprovados turma A: %.2f porcento",porcrepA); printf("\nPercentual de reprovados da turma B: %.2f porcento",porcrepB);
                printf("\n\nPercentual geral de reprovados da turma A e B: %.2f porcento\n\n",porcrepgeral);

                system("pause");
                break;                
            
            case 3:
                system("title Taxa de estacionamento");
                system("cls");
                printf("3. O Shopping da Ilha agora usa uma nova tarifacao para o estacionamento, mostrado na tabela abaixo. O\nprograma recebe o tempo em minutos e diz quanto o usuario precisa pagar. Dica: Pesquise a funcao que\narredonda numeros reais para baixo.");
                
                printf("\n\nAtencao: Os segundos podem ser ignorados nesta operacao.");
                printf("\n\nTaxa de tarifacao:\n* Ate 15 min --  GRATIS    ;\n* Ate 3h ------  8.00 R$   ;\n* Acima de 3h - (2.00 R$/h).\n");
                printf("\n\nDigite o tempo consumido no formato (hor min) apertando espaco apos cada um: "); scanf("%d %d",&hor, &min);
                
                addhor = hor*60;
                addtime = addhor + min;

                if (addtime<=15){
                    printf("\n\nTempo calculado com sucesso!\nSua fatura e de: 0.00 R$\n\nOBRIGADO E VOLTE SEMPRE!\n\n");
                }
                else if(addtime>15 && addtime<=180){
                    printf("\n\nTempo calculado com sucesso!\nSua fatura e de: 8.00 R$\n\nOBRIGADO E VOLTE SEMPRE!\n\n");
                }
                else{
                    plustime = 8 + 2*(floor((addtime-180)/60));
                    printf("\n\nTempo calculado com sucesso!\nSua fatura e de: %d.00 R$\n\nOBRIGADO E VOLTE SEMPRE!\n\n",plustime);
                }
                system("pause");
                break;
            
            case 4:
                system("title Leitor triangular");
                quebra='s';
                
                while(quebra=='s'){
                    system("cls");
                    printf("\n\n4. (1,0 ponto) O usuario digita tras lados de um triangulo e o programa diz se os valores formam ou nao\num triangulo. Obs: Pela regra, para se formar um triangulo, cada lado tem que ser menor que a soma dos\noutros dois lados. Ou seja (C<A+B), (B<A+C) e (A<B+C).\n\n\n");
                    printf("Bem vindo ao leitor triangular!\nAqui te diremos se seu triangulo e autentico.\n\n");
                    printf("Digite os lados de seu triangulo a seguir: \n\n");
                    float A, B, C;

                    printf("Digite o comprimento do lado A: "); scanf("%f",&A);
                    printf("Digite o complimento do lado B: "); scanf("%f",&B);
                    printf("Digite o comprimento do lado C: "); scanf("%f",&C);

                    if(C<A+B && B<C+A && A<C+B){
                        printf("\n\nParabens! Seu triangulo e autentico! :D\n\n\n");
                    }
                    else{
                        printf("\n\nInfelizmente seu triangulo nao e autentico. :(");
                    }

                    do{
                        printf("\n\n\nGostaria de testar outro triangulo? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nOpcao invalida.\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                }
                system("pause");                
                break;
            case 5:
                system("title Calculadora liquida");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n5. (1,5 ponto) Leia o nome, numero de horas trabalhadas e numero de dependentes de um funcionario.\nApos a leitura, escreva qual o Nome, salario bruto, os valores descontados para cada tipo de imposto e\nfinalmente qual o salario liquido do funcionario. Considerando que:\na) A empresa paga R$20 (+ o ultimo digito do seu codigo de matricula) por hora e R$40 por dependentes.\nb) Sobre o salario sao descontados 7,5 porcento/ o INSS e 6 porcento/ IR.\n\n\n");
                    printf("Bem vindo a calculadora liquida!\nAqui vamos saber quanto do seu salario vai descer pelo ralo.\n\n\n");

                    printf("Porfavor digite suas informacoes a seguir: \n\n");
                    printf("Digite seu nome: "); scanf("%s", &nome);
                    printf("\nDigite horas trabalhadas: "); scanf("%d", &hor);
                    printf("\nQuantidade de dependentes:  "); scanf("%d", &depen);

                    salbrut = ((hor * 29)*30) + (depen * 40);
                    saliq = salbrut - (salbrut * 7.5/100) - (salbrut * 6/100);
                    INSS = salbrut * 7.5/100;
                    IR = salbrut * 6/100;
                    come = INSS + IR;

                    printf("\n\n\nSuas informacoes: ");
                    printf("\nNome: %s \nSalario bruto: %.2f R$/mes \nINSS: - %.2f R$ \nIR: - %.2f R$ \nO Estado te comeu: - %.2f R$ \nSalario liquido: %.2f R$/mes",nome ,salbrut, INSS, IR, come, saliq);
                    
                    do{
                        printf("\n\n\nGostaria de calcular outro salario? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nOpcao invalida.\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                }
                system("pause");
                break;

            case 6:
                system("title Calculadora de fatura");
                quebra = 's'; 

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n\n6. Faca um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso a Internet. Para\nisso voce devera ler a quantidade de horas que voce utilizou. Sabe-se que voce pagara R$ 30,00 (+ o ultimo\ndigito do seu codigo de matrocula) por ate 72 horas de uso (valor basico), caso voce tenha usado mais de 72\nhoras, entao deve ser acrescido mais 5 porcento no valor basico para cada hora extra utilizada.\n\n\n");
                    
                    printf("Bem vindo a calculadora de fatura!\nAqui saberemos qual o valor de sua fatura de internet.\n\n");
                    printf("Tabela de precos:\n# Ate 72h ------ 39 R$\n# Acima de 72h - 1.95 R$/h\n");
                    printf("\n\nInsira a quantidade de horas consumidas (minutos e segundos como cortesia): "); scanf("%d",&hor);

                    if(hor<=72){
                        printf("Sua fatura é no valor de: 39 R$");
                    }
                    else if(hor>72){
                        total = 39 + ((hor - 72)*1.95);
                        printf("Sua fatura e no valor de: %.2f",total);
                    }
                    else{
                        printf("Valor invalido!");
                    }

                    do{
                        printf("\n\nGostaria de calcular outra fatura? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                }
                system("pause");
                break;

            case 7:
                system("title Podium de Eleicao");
                quebra = 's';

                //Interpretei a questão errado já vou logo avisando, mas esse codigo deu muito trabalho então decidi deixar ele aqui kk. Espero que tenha proveito.
                //Mas vi que o correto levava swich case e no meu grande menu dessa atv tem o mesmo código. Sera que serve pra provar minha competencia?
                
                while(quebra=='s'){
                    system("cls");
                    printf("\n\n\n7. Leia um codigo de votacao e escreva a ordem de classificacao e o percentual de votos de cada candidato.Considere: \na) F = fim da eleicao; \nb) X,Y,Z = codigos dos candidatos; \nc) N = voto nulo e \nd) B = voto em branco.\n\n\n");
                    
                    printf("Bem vindo a calculadora podium de eleicao!\n\n");
                    printf("Insira as informacoes a seguir: ");
                    printf("\nNome do cadidato 1: "); scanf("%s",&nome);
                    printf("\nCodigo do candidato 1: "); scanf("%d",&a);
                    printf("\nQuantidade de votos candidato 1: "); scanf("%d",&d);
                    printf("\nNome do canditado 2: "); scanf("%s",&nome2);
                    printf("\nCodigo do candidato 2: "); scanf("%d",&b);
                    printf("\nQuantidade de votos candidato 2: "); scanf("%d",&e);
                    printf("\nNome do canditado 3: "); scanf("%s",&nome3);
                    printf("\nCodigo do andidato 3: "); scanf("%d",&c);
                    printf("\nQuantidade de votos candidato 3: "); scanf("%d",&f);
                    printf("\nVotos nulos: ");scanf("%d",&g);
                    printf("\nVotos brancos: "); scanf("%d",&h);
                    
                    somaint = d + e + f + g + h;
                    porcrepA = (d*100)/somaint;
                    porcrepB = (e*100)/somaint;
                    porcrepC = (e*100)/somaint;

                    if (d>e && e>f){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(e>f && f>d){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(f>d && d>e){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if (e>d && f>e){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(f>e && d>f){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(d>f && e>d){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nSegundo colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(d==e && d>f){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("EMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                        printf("\n\nNAO VAI TER SEGUNDO TURNO.\n\n");
                    }
                    else if(d==e && d<f){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(d==f && d>e){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("EMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                        printf("\n\nNAO VAI TER SEGUNDO TURNO.\n\n");
                    }
                    else if(d==f && d<e){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(e==f && e>d){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("EMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\nTerceiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                        printf("\n\nNAO VAI TER SEGUNDO TURNO.\n\n");
                    }
                    else if(e==f && e<d){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("Primeiro colocado: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                    }
                    else if(e==d && d==f && f==e){
                        printf("\n\n\n\nResultado da Eleicao: \n\n");
                        printf("EMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome2, b, porcrepB);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome, a, porcrepA);
                        printf("\n\nEMPATE!: %s\nCodigo do candidato: %d\nPercentual de votos: %.2f", nome3, c, porcrepC);
                        printf("\n\n\nVotos brancos: %d\nVotos nulos: %d", h, g);
                        printf("\n\nVamos para novas eleicoes!\n\n");
                    }

                    do{
                        printf("\n\nGostaria de avaliar outra votacao? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                }

                system("pause");
                break;

            case 8:
                system("title Ultrapassando altura");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n8. Utilize uma das estruturas condicionais de repeticao para: Escreva quantos anos serao necessarios para\nque Ciclano seja maior que Fulano. Considere que Fulano tem 1,50 m e cresce 2 cm por ano e Ciclano tem\n1,10 m e cresce 3 cm por ano.\n\n\n");
                    
                    printf("Seguindo a recomendacao da questao temos: ");
                    pripor = 1.50; //Fulano
                    segpor = 1.10; //Ciclano
                    a=0;

                    while(segpor<=pripor){
                        a++;
                        pripor = pripor + 0.02;
                        segpor = segpor + 0.03;
                    }
                    printf("\n\n\nUltrapassagem atingida em %d anos:\nFulano com %.2f m;\nCiclano com %.2f m.\n\n\n", a, pripor, segpor);

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                }
                system("pause");
                break;

            case 9:
                system("title NUMERO MAGICO!");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n9. Faca um programa que sorteie um numero natural aleatorio entre 0 e 500 e pergunte ao usuario qual e o\n'numero magico'. O programa devera indicar se a tentativa efetuada pelo usuario e maior ou menor que\no numero magico e contar o numero de tentativas. Quando o usuario conseguir acertar o numero o\nprograma devera classificar o usuario como: a. De 1 a 3 tentativas: muito sortudo b. De 4 a 6 tentativas:\nsortudo c. De 7 a 10 tentativas: normal d. > 10 tentativas: tente novamente.\n\n\n");
                    printf("Bem vindo ao NUMERO MAGICO!\n\nTente adivinhar o numero aleatorio a seguir entre 0 e 500 (10 tentativas):\n\n\n");
                    
                    srand(time(NULL));
                    a = rand()%500;
                    b = 10;

                    while(b<=10 && b>0){
                        system("cls");
                        printf("Teste %d\n\n",a);
                        printf("Tente adivinhar o numero (%d tentativas): ",b); scanf("%d",&c);
                        
                        if(c==a && c>=0 && c<=500){
                            printf("\n\nParabens voce acertou!\n\n");
                            system("pause");
                            break;
                        }
                        else if(c<a && c>=0 && c<=500){
                            printf("\n\nVoce errou.\nDica: O NUMERO MAGICO esta mais acima!\n\n");
                            system("pause");
                        }
                        else if(c>a && c>=0 && c<=500){
                            printf("\n\nVoce errou.\nDica: O NUMERO MAGICO esta mais abaixo!\n\n");
                            system("pause");
                        }
                        else if(c<0 || c>500){
                            printf("\n\nNumero invalido. Apenas numeros entre 0 e 500.\nTente novamente.\n\n");
                            system("pause");
                        }
                        b--;
                    }

                    if(b<=10 && b>=7){
                        printf("\n\nHuuum, voce e muito sortudo!\n\n");
                        system("pause");
                    }
                    else if(b<=6 && b>=4){
                        printf("\n\nNossa voce e sortudo!\n\n");
                        system("pause");
                    }
                    else if(b<=3 && b>=1){
                        printf("\n\nBom! Bem na media de acertos.\n\n");
                        system("pause");
                    }
                    else{
                        printf("\n\nQue pena, tente novamente.\n\n");
                        system("pause");
                    }

                    do{
                            printf("\n\nGostaria de jogar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                            if(quebra!='s' && quebra!='n'){
                                printf("\n\nResposta invalida!\n\n");
                            }
                            else if(quebra=='n'){
                                printf("\n\nBom te ver, ate mais!\n\n\n");
                            }
                        }while(quebra!='s' && quebra!='n');
                }
                system("pause");
                break;

            case 10:
                system("title Dobro de V1!");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n10. Faca um algoritmo que coloque o valor de cada posicao de um vetor (vetor1) em um novo vetor\n(vetor2), com o dobro do valor original de cada posicao do vetor original. O tamanho do vetor sera definido\npelo usuario final.\n\n\n");
                    
                    printf("Quantas casas terao nossos vetores: "); scanf("%d",&d);
                    
                    printf("Preencha o vetor v1 a seguir: \n");
                    int v1[d], v2[d];
                    for(c=0;c<d;c++){
                        printf("\nInsira o valor de v1[%d]: ",c); scanf("%d",&v1[c]);
                    }

                    printf("\n\nVetor v2 gerado (2*v1): \n");
                    for(a=0;a<d;a++){
                        v2[a] = v1[a]*2;
                        printf("\nv2[%d]: %d", a, v2[a]);
                    }

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                };

                system("pause");
                break;

            case 11:
                system("title Uniao de vetores!");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n11. Faca um algoritmo que faca a uniao de dois vetores de mesmo tamanho e mesmo tipo em um terceiro\nvetor com dobro do tamanho. O tamanho do vetor sera definido pelo usuario final.\n\n\n");
                    
                    printf("Quantas casas terao nossos vetores: "); scanf("%d",&d);
                    
                    printf("Preencha o vetor v1 a seguir: \n");
                    int v1[d], v2[d], v3[d*2];
                    for(a=0;a<d;a++){
                        printf("\nInsira o valor de v1[%d]: ",a); scanf("%d",&v1[a]);
                    }

                    printf("\n\nVetor v2 gerado (2*v1): \n");
                    for(a=0;a<d;a++){
                        v2[a] = v1[a]*2;
                        printf("\nv2[%d]: %d", a, v2[a]);
                    }

                    printf("\n\nVetor v3 gerado (v1 U v2): ");
                    for(a=0;a<d;a++){
                        v3[a] = v1[a];
                        printf("\nv3[%d]: %d", a, v3[a]); 
                    }
                    c=0;
                    for(a=d;a<d*2;a++){
                        v3[a] = v2[c];
                        printf("\nv3[%d]: %d",a, v3[a]);
                        c++;
                    }

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                };

                system("pause");
                break;

            case 12:
                system("title Numeros aleatorios");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n12. Faca um programa que le um dado N valores, guarde em um vetor e imprima: a. maior valor b. media\ndos valores c. os valores dispostos em ordem crescente d. sub conjunto de valores primos que esta contido\nno vetor.\n\n\n");
                    printf("Quantas casa tera o nosso vetor: "); scanf("%d",&a);

                    srand(time(NULL));
                    int v[a];

                    printf("\n\n\nAs casa serao preenchidas aleaoóriamente: ");
                    for(b=0;b<a;b++){
                        v[b] = rand()%1000;
                        printf("\nv[%d]: %d", b, v[b]);
                    }

                    printf("\n\n\nConsideracoes: ");
                    d=0;
                    for(b=0;b<a;b++){

                        if(v[b]>d){
                            d = v[b];
                        }
                    }
                    printf("\n\nO maior valor do vetor: %d", d);
                    
                    c=0;d=0;
                    for(b=0;b<a;b++){
                        c = c + v[b];
                    }
                    d = c/a;
                    printf("\n\nA media dos valores do vetor: %d", d);

                    c=0;d=0;
                    printf("\n\nVetor organizado em ordem crescente: ");                    
                    for(e=0;e<a;e++){
                        for(b=e+1; b<a; b++){
                            if(v[e]>v[b]){
                                d = v[e];
                                v[e] = v[b];
                                v[b] = d;
                            }
                        }
                        printf("\nv[%d]: %d", e, v[e]);
                    }

                    c=0;
                    printf("\n\nNumeros primos contidos no vetor: ");
                    for(b=0;b<a;b++){
                        d=0;
                        for(c=1;c<=v[b];c++){                            
                            if(v[b]%c==0){
                                d++;
                            }
                        }
                        if(d==2){
                            printf("\nv[%d]: %d", b, v[b]);
                        }
                    }

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                };

                system("pause");
                break;

            case 13:
                system("title MAIS VETORES!!!!");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n13. Faca um programa usando vetores que:\n* Preencha um vetor de inteiros com 10 posicoes.\n* Imprima o maior elemento do vetor e apresente-o.\n* Imprima o menor elemento do vetor e apresente-o.\n* Imprima a soma entre os elementos do vetor.\n* Imprima a media aritmetica entre os elementos do vetor.\n\n\n");
                    
                    printf("Insira as 10 posições do vetor: ");
                    int v[10];
                    for(b=0;b<10;b++){
                        printf("Digite o valor de v[%d]: ", b); scanf("%d", &v[b]);
                        printf("\nv[%d]: %d", b, v[b]);
                    }

                    d=0;
                    for(b=0;b<10;b++){
                        
                        if(v[b]>d){
                            d = v[b];
                        }
                    }
                    printf("\n\nO maior valor do vetor: %d", d);

                    for(b=0;b<10;b++){
                        
                        if(v[b]<d){
                            d = v[b];
                        }
                    }
                    printf("\n\nO menor valor do vetor: %d", d);

                    c=0;d=0;
                    for(b=0;b<10;b++){
                        c = c + v[b];
                    }
                    printf("\n\nA soma nos elementos do vetor: %d", c);

                    d = c/10;
                    printf("\n\nA media dos valores do vetor: %d", d);

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                };

                system("pause");
                break;

            case 14:
                system("title Questionario aos cinefolos");
                quebra = 's';

                while(quebra=='s'){
                    system("cls");
                    printf("\n\n14. Um cinema que possui capacidade de 20 lugares esta sempre lotado. Certo dia cada espectador\nrespondeu a um questionario, onde constava:\n* sua idade;\n* sua opiniao em relacao ao filme, que podia ser: otimo, bom, regular, ruim ou pessimo.\nElabore um programa que, recebendo estes dados calcule e mostre:\n* a quantidade de respostas otimo;\n* a diferenca percentual entre respostas bom e regular;\n* a media de idade das pessoas que responderam ruim;\n* a porcentagem de respostas pessimo e a maior idade que utilizou esta opcao;\n* a diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim.\n\n\n");

                    int v1[20], v2[20];                    
                    srand(time(NULL));

                    int otimo=0, bom=0, regular=0, ruim=0, pessimo=0;
                    c=0;e=0;f=0;g=0;

                    printf("Aguarde enquanto os clientes avaliam... \n\n");
                    system("pause");
                    printf("\n\nSo mais um pouco...\n\n");
                    system("pause");

                    printf("\n\n\nPronto, vamos ver a lista de avaliacoes: \n\n");
                    system("pause");

                    for(b=0;b<20;b++){
                        v2[b] = 16 + rand()%65;
                        v1[b] = 1 + rand()%5;

                        if(v1[b]==1){                            
                            otimo++;
                            printf("\n%d. (Anonimo) / idade: %d / avaliacao: otimo", b+1, v2[b]);
                            if(v2[b]>f){
                                f = v2[b];
                            }
                        }
                        else if(v1[b]==2){
                            bom++;
                            printf("\n%d.(Anonimo) / idade: %d / avaliacao: bom", b+1, v2[b]);
                        }
                        else if(v1[b]==3){
                            regular++;
                            printf("\n%d.(Anonimo) / idade: %d / avaliacao: regular", b+1, v2[b]);
                        }
                        else if(v1[b]==4){
                            ruim++;
                            printf("\n%d.(Anonimo) / idade: %d / avaliacao: ruim", b+1, v2[b]);
                            c = c + v2[b];
                            if(v2[b]>g){
                                g = v2[b];
                            }
                        }
                        else if(v1[b]==5){
                            pessimo++;
                            printf("\n%d.(Anonimo) / idade: %d / avaliacao: pessimo", b+1, v2[b]);
                            if(v2[b]>e){
                                e = v2[b];
                            }
                        }
                    }

                    a = bom - regular; if(a<0){a = a*-1;}
                    d = c/ruim;
                    h = g - f; if(h<0){h = h*-1;}
                    porcrepA = (a*100)/20;
                    porcrepB = (pessimo*100/20);

                    printf("\n\nHumm, vamos ver: \n");
                    printf("\nTivemos %d respostas otimo!", otimo);
                    printf("\nA diferenca percentual entre respostas bom e regular e de %.2f porcento.", porcrepA);
                    printf("\nA media de idade das pessoas que responderam ruim %d.", d);
                    printf("\nA porcentagem de respostas pessimo e de %.2f e a maior idade que utilizou esta opcao foi %d anos.", porcrepB, e);
                    printf("\nA diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim e de %d anos.", h);
                    

                    do{
                        printf("\n\nGostaria de verificar mais uma vez? (s ou n) "); scanf("%s",&quebra);
                        if(quebra!='s' && quebra!='n'){
                            printf("\n\nResposta invalida!\n\n");
                        }
                        else if(quebra=='n'){
                            printf("\n\nBom te ver, ate mais!\n\n\n");
                        }
                    }while(quebra!='s' && quebra!='n');
                };

                system("pause");
                break;

            default:
                system("cls");
                printf("\nOpcao invalida!\nReproduza o numero da questao no formato indicado.\n\n");
        }

        do{
            system("cls");
            printf("\n\nDeseja avaliar mais alguma questao? (s ou n): ");
            scanf("%s",&end);
            system("cls");
            if(end=='n'){
                system("cls");
                printf("\nAte mais! :)/ \n\n");
                exit(0);
            }
            else if(end!='s'){
                printf("\nOpcao invalida!\nReproduza o numero da questao no formato indicado.\n\n");
            }

        }while(end!='s' && end!='n');
    }

    return 0;
}