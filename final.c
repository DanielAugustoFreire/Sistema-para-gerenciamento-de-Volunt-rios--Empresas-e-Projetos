    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #define TF 10

    int main(void)
    {
        //Var Normais Inteiras
        int opcao, i, j, numero_vol, encontrou, cod_empresa, cod_projeto, certo=0, horas;
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
                            printf("\n[0]-Volta Para o Menu Principal\nEntre com o Numero do Voluntario: ");
                            scanf("%d", &numero_vol);
                            getchar();
                            while(numero_vol!=0)
                            {
                                encontrou = 0;
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
                                    printf("\nEntre com o nome do Voluntario: ");
                                    fgets(nome_voluntario, sizeof(nome_voluntario), stdin);
                                    strcpy(vVoluntario[tlVoluntairo], nome_voluntario);
                                    vNumVoluntario[tlVoluntairo]=numero_vol;
                                    tlVoluntairo++;
                                    printf("\nVoluntario [%d] - %s", vNumVoluntario[tlVoluntairo-1], vVoluntario[tlVoluntairo-1]);
                                }
                                printf("\n[0]-Volta Para o Menu Principal\nEntre com o Numero do Voluntario: ");
                                scanf("%d", &numero_vol);
                                getchar();
                            }
                            break;  
                
                        //Empresa
                        case 2:
                            printf("\nEntre com o Codigo da Empresa: ");
                            scanf("%d", &cod_empresa);
                            getchar();
                            while(cod_empresa!=0)
                            {
                            encontrou = 0;  
                            printf("\nEntre com o nome da Empresa: ");
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
                            printf("\nEntre com o Codigo da Empresa: ");
                            scanf("%d", &cod_empresa);
                            getchar();                          
                            }

                            break;
                        //Projeto
                        case 3:
                            printf("\nEntre com o codigo do Projeto:");
                            scanf("%d", &cod_projeto);
                            getchar(); 
                            while(cod_projeto!=0)
                            {
                                encontrou=0;
                                printf("\nEntre com a desc. do projeto:\t\t[100CaracteresMax]: ");
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
                                printf("\nEntre com o codigo do Projeto:");
                                scanf("%d", &cod_projeto);
                                getchar();               
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
                    certo = 0;
                    printf("AREA DE EXCLUSAO:\n\n");
                    printf("1-Voluntarios\n2-Empresas\n3-Projetos\n4-Excluir Horas\n5-Retorna\n");
                    scanf("%d", &opcao);
                    switch (opcao)
                    {
                    case 1:
                        printf("Entre com o numero do Voluntario: ");
                        scanf("%d", &numero_vol);
                        for(i=0;i<tlVoluntairo;i++)
                        {
                            if(numero_vol==vNumVoluntario[i])
                            {
                                certo=1;
                            }
                        }
                        if(certo)
                        {
                            // Verifica se o voluntário tem horas cadastradas
                            for(i=0;i<tlHoras;i++)
                            {
                                if (numero_vol==vNumVoluntH[i])
                                {
                                    certo=0;
                                    printf("Voluntario tem horas cadastradas, impossivel excluir.");
                                }
                            }
                            if(certo)
                            {

                                for (j=i;j<tlVoluntairo-1;j++)
                                {
                                    vNumVoluntario[j]=vNumVoluntario[j+1];
                                    strcpy(vVoluntario[j],vVoluntario[j+1]);
                                }
                                tlVoluntairo--;
                                printf("Voluntario Excluido com sucesso.");
                            }
                        }
                        else
                        {
                            printf("Voluntario inexistente...");
                        }
                        break;
                    case 2:
                        printf("Entre com o numero da Empresa: ");
                        scanf("%d", &cod_empresa);
                        for(i=0;i<tlEmpresa;i++)
                        {
                            if(cod_empresa==vCodEmpresa[i])
                            {
                                certo=1;
                                j = i; // Inicializa j com o índice da empresa encontrada
                                break;
                            }
                        }
                        if(certo)
                        {
                            // Verifica se a empresa tem horas cadastradas
                            for(i=0;i<tlHoras;i++)
                            {
                                if (cod_empresa==vCodEmpresH[i])
                                {
                                    certo=0;
                                    printf("Empresa tem horas cadastradas, impossivel excluir.");
                                    break;
                                }
                            }
                            if(certo)
                            {
                                for (j=j;j<tlEmpresa-1;j++)
                                {
                                    vCodEmpresa[j]=vCodEmpresa[j+1];
                                    strcpy(vEmpresa[j],vEmpresa[j+1]);
                                }
                                tlEmpresa--;
                                printf("Empresa Excluida com sucesso.");
                            }
                        }
                        else
                        {
                            printf("Empresa inexistente...");
                        }
                            break;
                    case 3:
                        printf("Entre com o numero do Projeto: ");
                        scanf("%d", &cod_projeto);
                        for(i=0;i<tlProjeto;i++)
                        {
                            if(cod_projeto==vProjeto[i])
                            {
                                certo=1;
                                j = i;
                                break;
                            }
                        }
                        if(certo)
                        {
                            for(i=0;i<tlHoras;i++)
                            {
                                if (cod_projeto==vProjetoH[i])
                                {
                                    certo=0;
                                    printf("Projeto tem horas cadastradas, impossivel excluir.");
                                    break;
                                }
                            }
                            if(certo)
                            {
                                for (j=j;j<tlProjeto-1;j++)
                                {
                                    vProjeto[j]=vProjeto[j+1];
                                    strcpy(vDesc[j],vDesc[j+1]);
                                }
                                tlProjeto--;
                                printf("Projeto Excluida com sucesso.");
                            }
                        }
                        else
                        {
                            printf("Projeto inexistente...");
                        }
                        break;
                    case 4: 
                        certo=0;
                        printf("Exclusão de Horas:\n");
                        printf("Entre com o codigo do projeto em que se deseja excuir as horas:");
                        scanf("%d", &cod_projeto);
                        for(i=0;i<tlHoras;i++)
                        {
                            if(cod_projeto==vProjetoH[i])
                            {
                            certo=1;
                            }
                            else certo=0;
                        }
                        if(certo==1)
                        {
                        printf("Entre com o numero da empresa que deseja exluir as horas");
                        scanf("%d", &cod_empresa);
                        for(i=0;i<tlHoras;i++)
                        {
                            if(cod_empresa==vCodEmpresH[i])
                            {
                            certo=1;
                            }
                            else certo=0;
                        }
                        }
                        if(certo==1)
                        {
                        printf("Entre com o numero do Voluntario em que deseja excluir as horas:");
                        scanf("%d", &numero_vol);          
                        for(i=0;i<tlHoras;i++)
                        {
                            if(numero_vol==vNumVoluntH[i])
                            {
                            certo=1;
                            }
                            else certo=0;
                        }                                         
                        }
                        if(certo==1)
                        {
                            printf("Excluindo Horas Registradas do Projeto %d, empresa %d e voluntario %d", cod_projeto, cod_empresa, numero_vol);
                        }                 







                            break;
                    case 5:
                        printf("Retornando...");
                        opcao=1;
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

                    int encontrado_voluntario=0;
                    int encontrado_empresa=0;
                    int encontrado_projeto=0;

                    for(i=0;i< tlVoluntairo;i++)
                    {
                        if(vNumVoluntario[i]==numero_vol)
                        {
                            encontrado_voluntario=1;
                            break;
                        }
                    }

                    for(i =0;i<tlEmpresa;i++)
                    {
                        if(vCodEmpresa[i]==cod_empresa)
                        {
                            encontrado_empresa=1;
                            break;
                        }
                    }

                    for(i=0;i <tlProjeto;i++)
                    {
                        if(vProjeto[i]==cod_projeto)
                        {
                            encontrado_projeto=1;
                            break;
                        }
                    }

                    if(!encontrado_voluntario) {
                        printf("\nNumero de Voluntario inválido\n");
                        certo = 0;
                    }
                    if(!encontrado_empresa) {
                        printf("\nNumero da Empresa Inválido\n");
                        certo = 0;
                    }
                    if(!encontrado_projeto) {
                        printf("\nNumero do Projeto inválido\n");
                        certo = 0;
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
                            printf("Projeto(s)    Numero_Voluntario       Cod_Empresa      Horas\n");
                                printf("[ %d]         [ %d]                [  %d]          [ %d]\n", vProjetoH[i], vNumVoluntH[i], vCodEmpresH[i], vHoras[i]);
                        }


                    break;
                //Default
                default: printf("Default\n\n");
            }

            printf("\n\n\nMenu:\n");
            printf("1. Cadastro\n");
            printf("2. Exclusão\n");
            printf("3. Lançamento de Horas\n");
            printf("4. Relatório\n");
            printf("5. Finalizar\n\n");

            printf("Digite o número correspondente à opção desejada: ");
            scanf("%d", &opcao);
        }
    }
