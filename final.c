#include <stdio.h>
#define TF 9
int main(void)
{
    //Var Normais Inteiras
    int opcao, i, op2, numero_vol, encontrou, cod_empresa, cod_projeto;
    //Var Int TL
    int  tlVoluntairo=0, tlEmpresa=0, tlProjeto=0;
    //Var de Vet
    int vNum[TF], vCod[TF] , vProjeto[TF];
    /*
    char nome_voluntario[100], nome_empresa[100], desc_projeto[100];
    */
    //Vetores de strings
    char vVoluntario[TF], vEmpresa[TF], vDesc[TF];



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
                        scanf("%s", &nome_voluntario);*/
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
                        encontrou = 0;
                        printf("Entre com o Codigo da Empresa:");
                        scanf("%d", &cod_empresa);
                        /*printf("Entre com o nome da Empresa");
                        scanf("%s", &nome_empresa);*/
                        for(i=0;i<tlEmpresa;i++)
                        {
                            if(cod_empresa==vCod[i])encontrou=1;
                        }
                        if(encontrou == 1)
                        {
                            printf("Empresa ja cadastrado");
                        }
                        else
                        {
                            //vEmpresa[tlEmpresa] = nome_empresa;
                            vCod[tlEmpresa]=cod_empresa;
                            tlEmpresa++;
                        }
                        break;
                    //Projeto
                    case 3:
                        encontrou=0;
                        printf("Entre com o codigo do Projeto:");
                        scanf("%d", &cod_projeto);
                        /*printf("Entre com a desc. do projeto:");
                        scanf("%s", &desc_projeto)*/
                        for(i=0;i<tlProjeto;i++)
                        {
                            if(cod_projeto==vProjeto[tlProjeto])encontrou=1;
                        }
                        if(encontrou==1)
                        {
                            printf("Projeto ja listado.");
                        }
                        else
                        {
                            //vDesc[tlProjeto]=desc_projeto;
                            vProjeto[tlProjeto]=cod_projeto;
                            tlProjeto++;
                        }
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
