    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #define TF 10

    int main(void)
    {
        //Var Normais Inteiras
        int opcao, i, numero_vol, encontrou, cod_empresa, cod_projeto, certo=0, horas;
        //Var Int TL
        int  tlVoluntairo=0, tlEmpresa=0, tlProjeto=0, tlHoras=0;
        //Var de Vet
        int vNumVoluntario[TF], vCodEmpresa[TF], vProjeto[TF], vProjetoH[TF*2], vNumVoluntH[TF*2], vCodEmpresH[TF*2], vHoras[TF*2];

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
                            printf("\nEntre com o nome do Voluntario: ");
                            fgets(nome_voluntario, sizeof(nome_voluntario), stdin);
                            for(i=0;i<tlVoluntairo;i++)
                            {
                                if(numero_vol==vNumVoluntario[i])encontrou=1;
                            }
                            if(encontrou == 1)
                            {
                                printf("###   Numero de Voluntario ja cadastrado   ###");
                            }
                            else
                            {
                                strcpy(vVoluntario[tlVoluntairo], nome_voluntario);
                                vNumVoluntario[tlVoluntairo]=numero_vol;
                                tlVoluntairo++;
                                printf("\nVoluntario [%d] - %s", vNumVoluntario[tlVoluntairo-1], vVoluntario[tlVoluntairo-1]);
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
                                if(cod_empresa==vCodEmpresa[i])encontrou=1;
                            }
                            if(encontrou == 1)
                            {
                                printf("###   Empresa ja cadastrado   ###");
                            }
                            else
                            {
                                strcpy(vEmpresa[tlEmpresa], nome_empresa);
                                vCodEmpresa[tlEmpresa]=cod_empresa;
                                tlEmpresa++;
                                printf("\nEmpresa [%d] - %s", vCodEmpresa[tlEmpresa-1], vEmpresa[tlEmpresa-1]);
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
                    certo=3;
                    printf("\tLancamento de Horas\n\nEntre com o numero do Projeto:");
                    scanf("%d", &cod_projeto);
                    printf("Entre com o numero do voluntario: ");
                    scanf("%d", &numero_vol);
                    printf("Entre com o numero da empresa: ");
                    scanf("%d", &cod_empresa);


                    for(i=0;i<TF;i++)
                    {
                        if(vCodEmpresa[i] != cod_empresa)printf(".");
                        else
                        {
                            certo-=1;
                            printf("\nNumero da Empresa Invalido\n");
                        }
                        if(vNumVoluntario[i]!= numero_vol)printf(".");
                        else
                        {
                            certo-=1;
                            printf("\nNumero de Voluntario invalido");
                        }
                        if(vProjeto[i] != cod_projeto)printf(".");
                        else
                        {
                            certo-=1;
                            printf("\nNumero do Projeto invalido\n");
                        }
                    }  

                    if(certo==3)
                    {
                        printf("Entre Agora com o Numero de Horas que o Voluntario Executou: ");
                        scanf("%d", &horas);
                        vHoras[tlHoras]=horas;
                        vCodEmpresH[tlHoras]= cod_empresa;
                        vProjetoH[tlHoras]= cod_projeto;
                        vNumVoluntH[tlHoras]=numero_vol;
                        tlHoras++;
                    }
                    else
                    {
                        printf("\nNão foi possivel realizar o lancamento de horas, tente novamente...\n");
                    }

                    break;  


                //Relatorio
                case 4: printf("\t###   RELATORIO   ###\n\n");
                        printf("VOLUNTARIOS:\n");
                        for(i=0;i<tlVoluntairo;i++)
                        {
                            printf("[%d] - %s\n",vNumVoluntario[i], vVoluntario[i]);
                        }
                        printf("EMPRESAS\n");
                        for(i=0;i<tlEmpresa;i++)
                        {
                            printf("[%d] - %s\n", vCodEmpresa[i], vEmpresa[i]);
                        }
                        printf("PROJETOS\n");
                        for(i=0;i<tlProjeto;i++)
                        {
                            printf("[%d] - %s\n", vProjeto[i], vDesc[i]);
                        }
                        for(i=0;i<tlHoras;i++)
                        {
                        printf("HORAS:\n");
                        printf("Projeto(s)\tNumero_Voluntario\tCod_Empresa\tHoras\n");
                        printf("[%d]\t[%d]\t[%d]\t[%d]", vProjetoH, vNumVoluntH, vCodEmpresH, vHoras); 
                        }
                      

                    break;
                //Default
                default: printf("Default\n\n");
            }

            printf("\nMenu:\n");
            printf("1. Cadastro\n");
            printf("2. Exclusão\n");
            printf("3. Lançamento de Horas\n");
            printf("4. Relatório\n");
            printf("5. Finalizar\n\n");

            printf("Digite o número correspondente à opção desejada: ");
            scanf("%d", &opcao);
        }
    }