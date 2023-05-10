#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TF 9
int main(void)
{
    //Var Normais Inteiras
    int opcao, i, numero_vol, encontrou, cod_empresa, cod_projeto;
    //Var Int TL
    int  tlVoluntairo=0, tlEmpresa=0, tlProjeto=0;
    //Var de Vet
    int vNum[TF], vCod[TF] , vProjeto[TF];

    char nome_voluntario[20], nome_empresa[20], desc_projeto[100];

    //Vetores de strings
    char vVoluntario[TF][20], vEmpresa[TF][20], vDesc[TF][100];



    printf("Bem-vindo!\n\n");

    printf("Menu:\n");
    printf("1. Cadastro\n");
    printf("2. Exclusão\n");
    printf("3. Lançamento\n");
    printf("4. Relatório\n");
    printf("5. Finalizar\n\n");

    printf("Digite o número correspondente à opção desejada: ");
    scanf("%d", &opcao);
    while(opcao!=5)
    {
        switch(opcao)
        {
            //Cadastro
            case 1:
                printf("\nCadastro:\n");
                printf("1. Voluntário\n");
                printf("2. Empresa\n");
                printf("3. Projeto\n");
                printf("4. Retornar\n\n");

                printf("Digite o número correspondente à opção desejada: ");
                scanf("%d", &opcao);
                switch(opcao)
                {
                    //Voluntario
                    case 1:
                        encontrou = 0;
                        printf("\nEntre com o Numero do Voluntario:");
                        scanf("%d", &numero_vol);
                        getchar();
                        printf("\nEntre com o nome do Voluntario");
                        fgets(nome_voluntario, sizeof(nome_voluntario), stdin);
                        for(i=0;i<tlVoluntairo;i++)
                        {
                            if(numero_vol==vNum[i])encontrou=1;
                        }
                        if(encontrou == 1)
                        {
                            printf("###   Voluntario ja cadastrado   ###");
                        }
                        else
                        {
                            strcpy(vVoluntario[tlVoluntairo], nome_voluntario);
                            vNum[tlVoluntairo]=numero_vol;
                            tlVoluntairo++;
                            printf("\nVoluntario [%d] - %s", vNum[tlVoluntairo-1], vVoluntario[tlVoluntairo-1]);
                        }
                        break;
                    //Empresa
                    case 2:
                        encontrou = 0;
                        printf("\nEntre com o Codigo da Empresa:");
                        scanf("%d", &cod_empresa);
                        getchar();
                        printf("\nEntre com o nome da Empresa");
                        fgets(nome_empresa, sizeof(nome_empresa), stdin);
                        for(i=0;i<tlEmpresa;i++)
                        {
                            if(cod_empresa==vCod[i])encontrou=1;
                        }
                        if(encontrou == 1)
                        {
                            printf("###   Empresa ja cadastrado   ###");
                        }
                        else
                        {
                            strcpy(vEmpresa[tlEmpresa], nome_empresa);
                            vCod[tlEmpresa]=cod_empresa;
                            tlEmpresa++;
                            printf("\nEmpresa [%d] - %s", vCod[tlEmpresa-1], vEmpresa[tlEmpresa-1]);
                        }
                        break;
                    //Projeto
                    case 3:
                        encontrou=0;
                        printf("\nEntre com o codigo do Projeto:");
                        scanf("%d", &cod_projeto);
                        getchar();
                        printf("\nEntre com a desc. do projeto:\t\t[100CaracteresMax]");
                        fgets(desc_projeto, sizeof(desc_projeto), stdin);
                        for(i=0;i<tlProjeto;i++)
                        {
                            if(cod_projeto==vProjeto[tlProjeto])encontrou=1;
                        }
                        if(encontrou==1)
                        {
                            printf("###   Projeto ja listado.   ###");
                        }
                        else
                        {
                            strcpy(vDesc[tlProjeto], desc_projeto);
                            vProjeto[tlProjeto]=cod_projeto;
                            tlProjeto++;
                            printf("Desc [%d] - %s", vProjeto[tlProjeto-1], vDesc[tlProjeto-1]);
                        }
                        break;
                    //Retornar
                    case 4: printf("Retornando:");
                        break;
                    default: printf("Entrada nao identificada, retornando....\n");
                }
                break;
                
            //Exclusao
            case 2: 
                printf("Exclusão:\n\n");
                printf("1. Voluntário\n");
                printf("2. Empresa\n");
                printf("3. Projeto\n");
                printf("4. Retornar\n\n");
                printf("Digite o numero correspondente: ");
                scanf("%d", &opcao);
                switch (opcao)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4: printf("Retornando:");
                        break;
                    default: printf("Entrada nao identificada, retornando....\n");
                }
                break;

            //Lancamento de horas
            case 3:     
                printf("\tLancamento de Horas\n\nEntre com o numero do Projeto:");
                scanf("%d", &cod_projeto);
                printf("Entre com o numero do voluntario: ");
                scanf("%d", numero_vol);
                printf("Entre com o numero da empresa: ");
                scanf("%d", &cod_empresa)









                break;


            //Relatorio
            case 4: printf("Passou 4\n\n");
                break;
            //Default
            default: printf("Default\n\n");
        }



        
        printf("Bem-vindo!\n\n");

        printf("Menu:\n");
        printf("1. Cadastro\n");
        printf("2. Exclusão\n");
        printf("3. Lançamento de Horas\n");
        printf("4. Relatório\n");
        printf("5. Finalizar\n\n");

        printf("Digite o número correspondente à opção desejada: ");
        scanf("%d", &opcao);
    }
}
