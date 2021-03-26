#include <stdio.h>
#include <stdlib.h>
#define ESTOQUEMAX 50
#include <stdbool.h>

void menu(inst ins){
    for(i=0;i<ESTOQUEMAX && ins[i].mod;){
                    system("cls");
                    printf("-------INSTRUMENTO %d-------\n", i+1);
                    printf("\n-Dono: %s", ins[i].dono);
                    printf("\n-Servico: %s", ins[i].serv);
                    printf("\n-Instrumento: %s", ins[i].nome);
                    printf("\n-Marca: %s", ins[i].marca);
                    printf("\n-Modelo: %s", ins[i].modelo);
                    printf("\n-Estado: %s", ins[i].estado);
                    printf("\n-Numero de Serie: %d", ins[i].num);
                    printf("\n-Data de entrada: %d", ins[i].entrada);
                    printf("\n-Data de saida: %d", ins[i].saida);
                    printf("\n-Orcamento total: R$ %.2f", ins[i].orc);
                    printf("\n\n<---- 1 ||| 2 ---->\n\n");
                    scanf("%d", &menu2);
    }
}

int main()
{
    typedef struct{
        char nome[50], marca[50], dono[50], serv[50], modelo[50], estado[50];
        int num, entrada, saida;
        float orc;
        bool mod;
    }inst;
    inst ins[ESTOQUEMAX];
    int i, menu,menu2;
    do{
        do{
            system("cls");
            printf("-------Menu-------\n DIGITE: \n 1  -  Cadastrar entrada de novo instrumento\n 2  -  Acessar instrumentos cadastrados\n 0  -  Sair do Programa\n\n\n");
            scanf("%d",&menu);
        }while(menu>=2 && i<=0);
        switch(menu){
            case 1:
                system("cls");
                for(i=0;i<ESTOQUEMAX;i++){
                    if(ins[i].mod==false){
                        printf("-------CADASTRO DE INSTRUMENTO %d-------", i+1);
                        printf("\n-Digite o nome do dono do instrumento: ");
                        scanf("%s", ins[i].dono);
                        printf("\n-Digite o servico que sera oferecido: ");
                        scanf("%s", ins[i].serv);
                        printf("\n-Digite o nome do instrumento (ex: Guitarra, cavaquinho, contrabaixo): ");
                        scanf("%s", ins[i].nome);
                        printf("\n-Digite a marca do instrumento: ");
                        scanf("%s", ins[i].marca);
                        printf("\n-Digite o modelo do instrumento: ");
                        scanf("%s", ins[i].modelo);
                        printf("\n-Digite o estado do servico: ");
                        scanf("%s", ins[i].estado);
                        printf("\n-Digite o numero de serie do instrumento: ");
                        scanf("%d",&ins[i].num);
                        printf("\n-Digite a data de entrada na oficina: ");
                        scanf("%d",&ins[i].entrada);
                        printf("\n-Digite a data de saida da oficina: ");
                        scanf("%d",&ins[i].saida);
                        printf("\n-Digite o valor orcado para o servico: ");
                        scanf("%f",&ins[i].orc);
                        ins[i].mod = true;
                        system("cls");
                        if(ins[i].mod==true){
                            printf("-------INSTRUMENTO CADASTRADO-------\n\n");
                        }
                        printf("-Digite:\n 0 para voltar ao menu\n 1 para cadastrar outro instrumento\n ");
                        scanf("%d", &menu2);
                        if(menu2==0){
                            i=ESTOQUEMAX;
                        }
                    }
                }
                break;
            case 2:
                for(i=0;i<ESTOQUEMAX && ins[i].mod;){
                    system("cls");
                    printf("-------INSTRUMENTO %d-------\n", i+1);
                    printf("\n-Dono: %s", ins[i].dono);
                    printf("\n-Servico: %s", ins[i].serv);
                    printf("\n-Instrumento: %s", ins[i].nome);
                    printf("\n-Marca: %s", ins[i].marca);
                    printf("\n-Modelo: %s", ins[i].modelo);
                    printf("\n-Estado: %s", ins[i].estado);
                    printf("\n-Numero de Serie: %d", ins[i].num);
                    printf("\n-Data de entrada: %d", ins[i].entrada);
                    printf("\n-Data de saida: %d", ins[i].saida);
                    printf("\n-Orcamento total: R$ %.2f", ins[i].orc);
                    printf("\n\n<---- 1 ||| 2 ---->\n\n");*/
                    scanf("%d", &menu2);
                    switch(menu2){
                        case 1:
                            if(menu2+1==1){
                                printf("\n VOCE JA ESTA NA PRIMEIRA PAGINA");
                            }
                            else{
                                i--;
                            break;
                            }
                        case 2:
                            if(menu2==ESTOQUEMAX){
                                printf("\n VOCE JA ESTA NA ULTIMA PAGINA");
                            }
                            else{
                                i++;
                            break;
                            }
                        default:
                            printf("\nDIGITE UM VALOR VÁLIDO\n");
                            printf("\n\n\n-Digite:\n-0 para voltar ao menu\n");
                            scanf("%d", &menu2);
                            if(menu2==0){
                                i=ESTOQUEMAX;
                            }
                            break;
                        case 0:
                    return 0;
            default:
                printf("\nDIGITE UMA OPCAO VALIDA\n\n");
            break;
    }while(menu!=0);
    return 0;
}
