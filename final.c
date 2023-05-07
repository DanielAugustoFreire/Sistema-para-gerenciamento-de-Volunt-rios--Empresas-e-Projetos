#include <stdio.h>
#define TF 9
int main(void)
{
    //Var Normais Inteiras
    int opcao, i, op2, numero_vol, encontrou;
    //Var Int TL
    int  tlVoluntairo=0, tlEmpresa=0;
    //Var de Vet
    int vNum[TF], vVoluntario[TF];
    /*
    char nome_voluntario[100];
    */
    printf("############\n1-Cadastro\n2-Exclusao\n3-Lancamento\n4-Relatorio\n5-Finalizar\t\t");
    scanf("%d", &opcao);
    while(opcao!=5)
    {
        switch(opcao)
        {
            //Cadastro
            case 1:
                printf("++++++++++++\n1-Voluntario\n2-Empresa\n3-Projeto\n4-Retornar\t");
                scanf("%d", &op2);
                switch(op2)
                {
                    //Voluntario
                    case 1:
                        encontrou = 0;
                        printf("Entre com o Numero do Voluntario:");
                        scanf("%d", &numero_vol);
                        /*printf("Entre com o nome do Voluntario");
                        scanf("%d", &nome_voluntario[tlVoluntairo]);*/
                        for(i=0;i<tlVoluntairo;i++)
                        {
                            if(numero_vol==vNum[i])encontrou=1;
                        }
                        if(encontrou == 1)
                        {
                            printf("Voluntario ja cadastrado");
                        }
                        else
                        {
                            //vVoluntario[tlVoluntairo]=nome_voluntario;
                            vNum[tlVoluntairo]=numero_vol;
                            tlVoluntairo++;
                        }
                        break;
                    //Empresa
                    case 2:
                        break;
                    //Projeto
                    case 3:
                        break;
                    //Retornar
                    case 4: printf("Retornando:");
                        break;
                    default: printf("Entrada nao identificada, retornando....\n");
                }











                break;



















            //Exclusao
            case 2: printf("Passou 2\n\n");
                break;
            //Lancamento
            case 3: printf("Passou 3\n\n");
                break;
            //Relatorio
            case 4: printf("Passou 4\n\n");
                break;
            //Default
            default: printf("Default\n\n");
        }



        printf("\n\n############\n1-Cadastro\n2-Exclusao\n3-Lancamento\n4-Relatorio\n5-Finalizar\t\t");
        scanf("%d", &opcao);
    }
}
