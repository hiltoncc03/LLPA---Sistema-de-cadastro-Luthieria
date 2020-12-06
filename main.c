#include <stdio.h>
#include <stdlib.h>
#define ESTOQUEMAX 50
#include <stdbool.h>

int main()
{
    char inst_nome[ESTOQUEMAX][50], inst_marca[ESTOQUEMAX][50], inst_dono[ESTOQUEMAX][50], inst_serv[ESTOQUEMAX][50], inst_modelo[ESTOQUEMAX][50], inst_estado[ESTOQUEMAX][50];
    int i, menu,menu2,inst_num[ESTOQUEMAX], inst_entrada[ESTOQUEMAX], inst_saida[ESTOQUEMAX];
    float inst_orc[ESTOQUEMAX];
    bool inst_mod[ESTOQUEMAX];
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
                    if(inst_mod[i]==false){
                        printf("-------CADASTRO DE INSTRUMENTO %d-------", i+1);
                        printf("\n-Digite o nome do dono do instrumento: ");
                        scanf("%s", inst_dono[i]);
                        printf("\n-Digite o servico que sera oferecido: ");
                        scanf("%s", inst_serv[i]);
                        printf("\n-Digite o nome do instrumento (ex: Guitarra, cavaquinho, contrabaixo): ");
                        scanf("%s", inst_nome[i]);
                        printf("\n-Digite a marca do instrumento: ");
                        scanf("%s", inst_marca[i]);
                        printf("\n-Digite o modelo do instrumento: ");
                        scanf("%s", inst_modelo[i]);
                        printf("\n-Digite o estado do servico: ");
                        scanf("%s", inst_estado[i]);
                        printf("\n-Digite o numero de serie do instrumento: ");
                        scanf("%d",&inst_num[i]);
                        printf("\n-Digite a data de entrada na oficina: ");
                        scanf("%d",&inst_entrada[i]);
                        printf("\n-Digite a data de saida da oficina: ");
                        scanf("%d",&inst_saida[i]);
                        printf("\n-Digite o valor orcado para o servico: ");
                        scanf("%f",&inst_orc[i]);
                        inst_mod[i] = true;
                        system("cls");
                        if(inst_mod[i]==true){
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
                for(i=0;i<ESTOQUEMAX && inst_mod[i];){
                    system("cls");
                    printf("-------INSTRUMENTO %d-------\n", i+1);
                    printf("\n-Dono: %s", inst_dono[i]);
                    printf("\n-Servico: %s", inst_serv[i]);
                    printf("\n-Instrumento: %s", inst_nome[i]);
                    printf("\n-Marca: %s", inst_marca[i]);
                    printf("\n-Modelo: %s", inst_modelo[i]);
                    printf("\n-Estado: %s", inst_estado[i]);
                    printf("\n-Numero de Serie: %d", inst_num[i]);
                    printf("\n-Data de entrada: %d", inst_entrada[i]);
                    printf("\n-Data de saida: %d", inst_saida[i]);
                    printf("\n-Orcamento total: R$ %.2f", inst_orc[i]);
                    printf("\n\n<---- 1 ||| 2 ---->\n\n");
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
                        }
                }
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
        }
    }while(menu!=0);
    return 0;
}
