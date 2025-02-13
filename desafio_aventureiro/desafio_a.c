#include <stdio.h>
#include <string.h>
#include <ctype.h>

//CARTA 1 VARIAVEIS
int populacao1, qtdpturistico1, cidade1, pontos1 = 0;
float area1, pib1, densi1, per1;
char estado1, pais1[50], opcao, cod1, opcao_menu;
//CARTA 2 VARIAVEIS
int populacao2, qtdpturistico2, cidade2, pontos2 = 0;
float area2, pib2, densi2, per2;
char estado2, pais2[50], cod2;

void cadastro1(){
    //COLETA DE DADOS CADASTRAIS
    printf("---- CADASTRO DE CIDADES ----\n");
    printf("Digite a letra da federacao a que essa cidade pertence:\n");
    scanf("%c", &estado1);
    estado1 = toupper(estado1);

    printf("Digite o numero da cidade:\n");
    scanf("%d", &cidade1);

    printf("Digite o nome do pais referente a essa cidade:\n");
    scanf("%s", pais1);

    // COLETA DE DADOS COMPARATIVOS
    printf("---- FORMULACAO DA CARTA ----\n");
    printf("Informe qual e o numero populacional referente a essa cidade: \n");
    scanf("%d", &populacao1);

    printf("Informe qual e o PIB dessa cidade: \n");
    scanf("%f", &pib1);

    printf("Informe qual a area dessa cidade: \n");
    scanf("%f", &area1);

    printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
    scanf("%d", &qtdpturistico1);
    printf("INFORMACOES CADASTRADAS COM SUCESSO!!\n\n"); 

}

void exibicao1(){
    //CONTA DENSIDADE DEMOGRAFICA
    float densi1 = (float) populacao1 / area1;
    //CONTA PIB PER CAPITA
    float per1 = (float) pib1 / populacao1;

    //EXIBICAO DA CARTA
    printf("---- CARTA %c%d ----\n",estado1, cidade1);
    printf("CIDADE: %d\nESTADO: %c\nPAIS: %s\n", cidade1, estado1, pais1);
    printf("NUMERO POPULACIONAL: %d\n", populacao1);
    printf("PIB: %.3f BILHOES DE REAIS\n", pib1);
    printf("AREA: %.3f KM^2\n", area1);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n",qtdpturistico1);
    printf("DENSIDADE: %.3f\n", densi1);
    printf("PIB PER CAPITA: %.3f\n", per1);
       
}

void cadastro2(){
    //COLETA DE DADOS CADASTRAIS
    //COLETA DE DADOS CADASTRAIS
    printf("---- CADASTRO DE CIDADES ----\n");
    printf("Digite a letra da federacao a que essa cidade pertence:\n");
    scanf("%s", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o numero da cidade:\n");
    scanf("%d", &cidade2);

    printf("Digite o nome do pais referente a essa cidade:\n");
    scanf("%s", pais2);

    // COLETA DE DADOS COMPARATIVOS
    printf("---- FORMULACAO DA CARTA ----\n");
    printf("Informe qual e o numero populacional referente a essa cidade: \n");
    scanf("%d", &populacao2);

    printf("Informe qual e o PIB dessa cidade: \n");
    scanf("%f", &pib2);

    printf("Informe qual a area dessa cidade: \n");
    scanf("%f", &area2);

    printf("Informe qual e a quantidade de pontos turistios na cidade: \n");
    scanf("%d", &qtdpturistico2);
    printf("INFORMACOES CADASTRADAS COM SUCESSO!!\n\n");

}

void exibicao2(){
    //CONTA DENSIDADE DEMOGRAFICA
    float densi2 = (float) populacao2 / area2;
    //CONTA PIB PER CAPITA
    float per2 = (float) pib2 / populacao2;

    //EXIBICAO DA CARTA
    printf("---- CARTA %c%d ----\n",estado2, cidade2);
    printf("CIDADE: %d\nESTADO: %c\nPAIS: %s\n", cidade2, estado2, pais2);
    printf("NUMERO POPULACIONAL: %d\n", populacao2);
    printf("PIB: %.3f BILHOES DE REAIS\n", pib2);
    printf("AREA: %.3f KM^2\n", area2);
    printf("QUANTIDADE DE PONTOS TURISTICOS: %d\n",qtdpturistico2);
    printf("DENSIDADE: %.3f\n", densi2);
    printf("PIB PER CAPITA: %.3f\n", per2);
       
}

void comparativo(){

    //contagem de pontos para as cartas
    //comparativo populacao
    if (populacao1 > populacao2)
    {
        pontos1 += 1;
        printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado1, cidade1);
    }
    else
    {
        pontos2 += 1;
        printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado2, cidade2);
    }
  
    //comparacao pib
    if (pib1 > pib2)
    {
        pontos1 += 1;
        printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado1, cidade1);
    }
    else
    {
        pontos2 += 1;
        printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado2, cidade2);
    }

    //comparacao area
    if (area1 > area2)
    {
        pontos1 += 1;
        printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado1, cidade1);
    }
    else
    {
        pontos2 += 1;
        printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado2, cidade2);
    }

    //comparacao ponto turistico
    if (qtdpturistico1 > qtdpturistico2)
    {
        pontos1 += 1;
        printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado1, cidade1);
    }
    else
    {
        pontos2 += 1;
        printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado2, cidade2);
    }

    //comparacao ponto densidade demografica
    if (densi1 > densi2)
    {
        pontos2 += 1;
        printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado2, cidade2);
    }
    else
    {
        pontos1 += 1;
        printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado1, cidade1);
    }
    
    //comparacao ponto pib per capita
    if (per1 > per2)
    {
        pontos1 += 1;
        printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
    }
    else
    {
        pontos2 += 1;
        printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
    }

    //exibicao de pontos
    printf("\nPONTOS DA CARTA %c%d: %d\n",estado1, cidade1, pontos1);
    printf("PONTOS DA CARTA %c%d: %d\n",estado2, cidade2, pontos2);

    //exibicao do campao
    if (pontos1 > pontos2)
    {
        printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
    }
    else if (pontos1 = pontos2)
    {
        printf("HOUVE UM EMPATE ENTRE AS CARTAS!!");
    }
    else
    {
        printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
    }
    
    
}   

void menu_interativo(){
    // menu interativo cabecalho
    printf("\n### QUAIS ITENS VOCE GOSTARIA DE COMPARAR? ###\n");
    printf("DIGITE 'T' PARA COMPARAR TODOS OS ITENS\n");
    printf("DIGITE 'P' PARA COMPARAR A POPULACAO\n");
    printf("DIGITE 'B' PARA COMPARAR O PIB\n");
    printf("DIGITE 'A' PARA COMPARAR A AREA\n");
    printf("DIGITE 'Q' PARA COMPARAR OS PONTOS TURISTICOS\n");
    printf("DIGITE 'D' PARA COMPARAR A DENSIDADE DEMOGRAFICA\n");
    printf("DIGITE 'E' PARA COMPARAR O PIB PERCAPITA\n");
    scanf("%s", &opcao_menu);
    opcao_menu = toupper(opcao_menu);
    
    switch (opcao_menu)
    {
        case 'T':
            //contagem de pontos para as cartas
            //comparativo populacao
            if (populacao1 > populacao2)
            {
                pontos1 += 1;
                printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado2, cidade2);
            }
        
            //comparacao pib
            if (pib1 > pib2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado2, cidade2);
            }

            //comparacao area
            if (area1 > area2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado2, cidade2);
            }

            //comparacao ponto turistico
            if (qtdpturistico1 > qtdpturistico2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado2, cidade2);
            }

            //comparacao ponto densidade demografica
            if (densi1 > densi2)
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado2, cidade2);
            }
            else
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado1, cidade1);
            }
            
            //comparacao ponto pib per capita
            if (per1 > per2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
            }
                //EXIBICAO DE PONTOS
                printf("\nPONTOS DA CARTA %c%d: %d\n",estado1, cidade1, pontos1);
                printf("PONTOS DA CARTA %c%d: %d\n",estado2, cidade2, pontos2);

                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                { 
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'P':
            //contagem de pontos para as cartas
            //comparativo populacao
            if (populacao1 > populacao2)
            {
                pontos1 += 1;
                printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("\nA CARTA %c%d POSSUE A MAIOR POPULACAO\n", estado2, cidade2);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'B':
            //comparacao pib
            if (pib1 > pib2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB\n", estado2, cidade2);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'A':
            //comparacao area
            if (area1 > area2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado1, cidade1);
            }
            else
            { 
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE A MAIOR AREA\n", estado2, cidade2);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'Q':
            //comparacao ponto turistico
            if (qtdpturistico1 > qtdpturistico2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado1, cidade1);
            }
            else
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE MAIS PONTOS TURISTICOS\n", estado2, cidade2);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'D':
            //comparacao ponto densidade demografica
            if (densi1 > densi2)
            {
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado2, cidade2);
            }
            else
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE A MENOR DENSIDADE DEMOGRAFICA\n", estado1, cidade1);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;


        case 'E':
            //comparacao ponto pib per capita
            if (per1 > per2)
            {
                pontos1 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
            }
            else
            { 
                pontos2 += 1;
                printf("A CARTA %c%d POSSUE O MAIOR PIB PER CAPITA\n", estado2, cidade2);
            }
                //exibicao do campeao
                if (pontos1 > pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado1, cidade1);
                }
                else if (pontos1 < pontos2)
                {
                    printf("PARABENS!! A CARTA %c%d E A CAMPEA\n", estado2, cidade2);
                }
                else
                {  
                    printf("HOUVE UM EMPATE ENTRE AS CARTAS!!\n");
                } 
        break;

        default:
        printf("\n!!!ATENCAO!!!\nDIGITE UMA ENTRADA VALIDA!\n");
        menu_interativo();
        break;
    }
}


int main(){
    cadastro1();
    //opcao de cadastrar nova carta
    printf("DESEJA REALIZAR MAIS UM CADASTRO? (S/N)\n");
    scanf("%s", &opcao);
    opcao = toupper(opcao);

    if (opcao == 'S')
    {
        cadastro2();  
    }
    else
    {
        printf("PROGRAMA ENCERRADO!");
    }
    
    //comparativo de cartas
    printf("REALIZAR COMPARATIVO? (S/N)\n");
    scanf("%s", &opcao);
    opcao = toupper(opcao);

    if (opcao == 'S')
    {
        menu_interativo();
        printf("PROGRAMA ENCERRADO\n");
    }
    else
    {
        printf("\nPROGRAMA ENCERRADO!\n");
    }

    return 0;  
}