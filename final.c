#include <stdio.h>
#define TF 10

int main(void){

//    int vNum[TF], vCod[TF], vProjeto[TF], vProjetoH[TF], vNumH[TF], vCodH[TF], vHoras[TF];
    int opcao, i;
//  char vVolutario, vEmpresa, vDescricao;

    while (opcao != 5)
    {
        printf("\t#####\tGERENCIAMENTO\t#####\n\n");
        printf("Escolha entre as seguintes opcoes:\n\n1-CADASTRO\n2-EXCLUSAO\n3-LANCAMENTO\n4-RELATORIO\n5-FINALIZAR");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\t#####\tArea de Cadastro   #####\n");
            printf("1-VOLUNTARIO\n2-EMPRESA\n3-PROJETO\n4-RETORNAR");
            scanf("%d", &opcao);
            switch (opcao)
            {
                case 1:
                    printf("Cadastro de Voluntario.\n");
                    printf("Entre com o Numero do Voluntario:");
                    for (i = 0; i < TF; i++)
                    {
                        if (vNum[i] == )
                        scanf("%d", &vNum[i]);
                    }
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                default: 
                    printf("Entre com um dado valido!!\n");
            }
        }
        
    }
}