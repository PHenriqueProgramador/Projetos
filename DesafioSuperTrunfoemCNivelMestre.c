#include <stdio.h>
    //Desafio Super Trunfo - Nível Mestre!
    //  PHProgamador
int main(){
    int opcao, atributo1, atributo2, valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;
    int pontosTuristicosA, pontosTuristicosB, resultadoA, resultadoB;
    unsigned long int populacaoA, populacaoB;
    float areaA, areaB, pibA, pibB, densidadeA, densidadeB, pibpercapitaA, pibpercapitaB, superpoderA, superpoderB; // **LEMBRANDO QUE O SUPERPODER É A SOMA DE POPUAÇÃO, ÁREA, PIB, PIB PER CAPITA E DENSIDADE POPULACIONAL INVERTIDA PARA COMPARAÇÃO E NÚMERO DE PONTOS TURÍSTICOS**
    char estadoA[20], estadoB[20], codigoA[30], codigoB[30], cidadeA[50], cidadeB[50], carta1[20], carta2[20], nomeA[20], nomeB[20];
    
        printf("\nDESAFIO SUPER TRUNFO\n");
        
        printf("CARTA 1:\n");

        //Entrda de Dados Carta 1

            printf("Qual é o Estado? ");
            scanf(" %[^\n]", estadoA);

            printf("Qual é o código do Estado? ");
            scanf("%s", codigoA);

            printf("Qual é o nome da cidade?");
            getchar();
            fgets(cidadeA, sizeof(cidadeA), stdin);

            
            printf("Qual é o número da população? ");
            scanf("%lu", &populacaoA);

            printf("Qual é a área da cidade em quilometros quadrados?");
            scanf("%f", &areaA);

            printf("Qual é o PIB? ");
            scanf("%f", &pibA);

            printf("Qual é o número de pontos turísticos? ");
            scanf("%d", &pontosTuristicosA);

        // CÁLCULO DE DENSIDADE POPULACIONAL

            densidadeA = populacaoA / areaA;
            pibpercapitaA = (pibA * 1e9) / (float)populacaoA; // (1e9 Multiplicando por 1 Bilhão)

        //Entrada de Dados Carta 2
    printf("CARTA 2:\n");

        printf("Qual é o Estado? ");
            scanf(" %[^\n]", estadoB);

            printf("Qual é o código do Estado? ");
            scanf("%s", codigoB);

            printf("Qual é o nome da cidade?");
            getchar();
            fgets(cidadeB, sizeof(cidadeB), stdin);

        
            printf("Qual é o número da população? ");
            scanf("%lu", &populacaoB);
            

            printf("Qual é a área da cidade em quilometros quadrados?");
            scanf("%f", &areaB);

            printf("Qual é o PIB? ");
            scanf("%f", &pibB);

            printf("Qual é o número de pontos turísticos? ");
            scanf("%d", &pontosTuristicosB);

        // CÁLCULO DE DENSIDADE POPULACIONAL

            densidadeB = populacaoB / areaB;
            pibpercapitaB = (pibB * 1e9) / (float)populacaoB; // (1e9 Multiplicando por 1 Bilhão)

        // CÁLCULO DO SUPER PODER
            superpoderA = populacaoA + areaA + pibA + pontosTuristicosA + pibpercapitaA + (1 / densidadeA);
            superpoderB = populacaoB + areaB + pibB + pontosTuristicosB + pibpercapitaA +(1 / densidadeB);


        // USO DE SWITCH PARA CRIAÇÃO DE MENU E PARA COMPARAÇÃO ENTRE CARTAS 1 E 2!

printf("\nEscolha um atributo para comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);
            
            //switch para Opção
            switch (opcao)
            {
            case 1:
                printf("\nComparação de População\n");
                if (populacaoA > populacaoB) {
                    printf("Carta 1 venceu com  %lu habitantes\n", populacaoA);
                } else if (populacaoB > populacaoA) {
                    printf("Carta 2 venceu com %lu habitantes\n", populacaoB);
                } else {
                    printf("Empate! Ambas têm %lu habitantes\n", populacaoA);
                }
                break; 
            case 2: 
                printf("\nComparação de Área\n");
                if (areaA > areaB) {
                    printf("Carta 1 venceu com %2.f km²\n", areaA);
                } else if (areaB > areaA) {
                    printf("Carta 2 venceu co m %2.f km²\n", areaB);
                } else {
                    printf("Empate! Ambas as cartas tem o %2.f km²\n", areaA);
                }
            break;
            case 3: 
                printf("\nCoparação de PIB\n");
                if (pibA > pibB) {
                    printf("Carta 1 venceu com R$ %2.f", pibA);
                } else if (pibB > pibA) {
                    printf("Carta 2 venceu com R$ %2.f", pibB);
                } else {
                    printf("Empate! Ambas as cartas tem R$ %2.f", pibA);
                }
                break;
            case 4:
                printf("\nComparação de Pontos Turísticos\n");
                if (pontosTuristicosA > pontosTuristicosB) {
                    printf("Carta 1 venceu com %d pontos turíscos", pontosTuristicosA);
                } else if (pontosTuristicosB > pontosTuristicosA) {
                    printf("Carta 2 venceu com %d pontos turísticos", pontosTuristicosB);
                } else {
                    printf("Empate! Ambas as catas têm %d de pontos turísticos");
                }
                break;
            case 5:
                printf("\nCoparação de Densidade Populacional\n"); // MENOR VALOR VENCE!
                if (densidadeA < densidadeB) {
                    printf("Carta 1 venceu com densidade %2.f hab/km²\n");
                } else if (densidadeB < densidadeA) {
                    printf("Carte 2 venceu com densidade %2.f hab/km²\n");
                } else {
                    printf("Empate! Ambas as cartas têm %2.f hab/km²\n");
                }
                break;
            case 6: 
                printf("\nCoparação de PIB per capita\n");
                if (pibpercapitaA > pibpercapitaB) {
                printf("Carta 1 venceu com R$ %2.f", pibpercapitaA);
                } else if (pibpercapitaB > pibpercapitaA) {
                    printf("Carta 2 venceu com R$ %2.f", pibpercapitaB);
                } else {
                    printf("Empate! Abmas as catas têm R$ %2.f\n", pibpercapitaA);
                }
                break;
            default:
                break;
            }
        
            // ESCOLHENDO O SEGUNDO ATRIBUTO

            printf("Escolha o SEGUNDO atributo (DIFERENTE DO PRIMEIRO): \n");
            for (int i = 1; i <= 6; i++) 
            {
                if (i != atributo1) {
                    switch (i)
                    {
                    case 1:
                       printf("1. População\n");
                    break;
                    case 2:
                        printf("2. Área\n");
                    break;
                    case 3: 
                        printf("3. PIB\n");
                    break;
                    case 4:
                        printf("4. Densidade Demográfica\n");
                    break;
                    case 5:
                        printf("5. PIB per capita\n");
                    break;
                    case 6:
                        printf("6. Pontos Turísticos\n");
                    break;
                    default:
                        break;
                    }
                }
            }
            
            scanf("%d", &atributo2); // Lê o segundo atributo

            if (atributo2 < 1 || atributo2 > 6 || atributo2 == atributo1) {
                printf("Atributo inválido. Encerrando...\n");
            }
            
            return 1;
            
                switch (atributo1) {
                    case 1: valor1_carta1 = populacaoA; valor1_carta2 = populacaoA; break; 
                    case 2: valor1_carta1 = areaA; valor1_carta2 = areaB; break;
                    case 3: valor1_carta1 = pibA; valor1_carta2 = pibB; break;
                    case 4: valor1_carta1 = densidadeB; valor1_carta2 = densidadeB; break;
                    case 5: valor1_carta1 = pibpercapitaA; valor1_carta2 = pibpercapitaB; break;
                    case 6: valor1_carta1 = pontosTuristicosA; valor1_carta2 = pontosTuristicosB; break;
    }

                switch (atributo2) {
                    case 1: valor2_carta1 = populacaoA; valor2_carta2 = populacaoB; break;
                    case 2: valor2_carta1 = areaA; valor2_carta2 = areaB; break;
                    case 3: valor2_carta1 = pibA; valor2_carta2 = pibB; break;
                    case 4: valor2_carta1 = densidadeA; valor2_carta2 = densidadeB; break;
                    case 5: valor2_carta1 = pibpercapitaA; valor2_carta2 = pibpercapitaB; break;
                    case 6: valor2_carta1 = pontosTuristicosA; valor2_carta2 = pontosTuristicosB; break;
    }

                printf("\n%s vs %s\n", nomeA, nomeB);
                printf("Atributo 1 (%d): %d vs %d\n", atributo1, valor1_carta1, valor1_carta2);
                printf("Atributo 2 (%d): %d vs %d\n", atributo2, valor2_carta1, valor2_carta2);



                int pontos_carta1 = 0;
                int pontos_carta2 = 0;

                    if (atributo1 == 4) {
                        if (valor1_carta1 < valor1_carta2) pontos_carta1++;
                        else if (valor1_carta2 < valor1_carta1) pontos_carta2++;
                    } else {
                        if (valor1_carta1 > valor1_carta2) pontos_carta1++;
                        else if (valor1_carta2 > valor1_carta1) pontos_carta2++;
                    }

                    if (atributo2 == 4) {
                        if (valor2_carta1 < valor2_carta2) pontos_carta1++;
                        else if (valor2_carta2 < valor2_carta1) pontos_carta2++;
                    } else {
                        if (valor2_carta1 > valor2_carta2) pontos_carta1++;
                        else if (valor2_carta2 > valor2_carta1) pontos_carta2++;
                    }


                        int soma1 = valor1_carta1 + valor2_carta1;
                        int soma2 = valor1_carta2 + valor2_carta2;

                        printf("\nSoma dos atributos:\n%s: %d\n%s: %d\n", nomeA, soma1, nomeB, soma2);

                        if (soma1 > soma2)
                            printf("Resultado: %s venceu!\n", nomeA);
                        else if (soma2 > soma1)
                            printf("Resultado: %s venceu!\n", nomeB);
                        else
                            printf("Resultado: Empate!\n");

                        return 0;
}





       /*  //Saída de Dados 

        printf("\nCARTA 1\n");
        printf("Estado: %s\nCódigo: %s\nCidade: %sPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estadoA, codigoA, cidadeA, populacaoA, areaA, pibA, pontosTuristicosA, densidadeA, pibpercapitaA, superpoderA);

        printf("\nCARTA 2\n");
        printf("Estado: %s\nCódigo: %s\nCidade: %sPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n",
        estadoB, codigoB, cidadeB, populacaoB, areaB, pibB, pontosTuristicosB, densidadeB, pibpercapitaB, superpoderB);
       
        // Comparação de atributos
        printf("\nComparação de Cartas:\n");
        printf("População: Carta %d venceu (%d)\n", (populacaoA > populacaoB) ? 1 : 2, populacaoA > populacaoB);
        printf("Área: Carta %d venceu (%d)\n", (areaA > areaB) ? 1 : 2, areaA > areaB);
        printf("PIB: Carta %d venceu (%d)\n", (pibA > pibB) ? 1 : 2, pibA > pibB);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicosA > pontosTuristicosB) ? 1 : 2, pontosTuristicosA > pontosTuristicosB);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadeA < densidadeB) ? 1 : 2, densidadeA < densidadeB);
        printf("PIB per Capita: Carta %d venceu (%d)\n", (pibpercapitaA > pibpercapitaB) ? 1 : 2, pibpercapitaA > pibpercapitaB);
        printf("Super Poder: Carta %d venceu (%d)\n", (superpoderA > superpoderB) ? 1 : 2, superpoderA > superpoderB);
        printf("--------------------------------------------------\n"); */

      /*  //USANDO IF ELSE PARA COMPARAR ATRIBUTOS NUMÉRICOS DE POPULAÇÃO 'A' E 'B'
        printf("COMPARAÇÃO DE POPULAÇÃO: \n");
        printf("Carta 1: %d habitantes | Carta 2: %d habitantes\n", populacaoA, populacaoB);
        
        if (populacaoA > populacaoB) {
            printf("A POPULAÇÃO DA CARTA 1 É A VENCEDORA!\n");
        } else if (populacaoA < populacaoB) {
            printf("A POPULAÇÃO DA CARTA 2 É A VENCEDORA!\n");
        } else {
            printf("EMPATE! AS DUAS CARTAS TÊM A MESMA POPULAÇÃO.\n");
        }
        printf("--------------------------------------------------\n");
        

        printf("COMPARAÇÃO DE ÁREA: \n");
        printf("Carta 1: %.2f km² | Carta 2: %.2f km²\n", areaA, areaB);

        if (areaA > areaB) {
            printf("A ÁREA DA CARTA 1 É A VENCEDORA!\n");
        } else if (areaA < areaB){
            printf("A ÁREA DA CARTA 2 É A VENCEDORA\n");
        } else{
            printf("EMPATE! AS DUAS CARTAS TÊM A MESMA ÁREA.\n");
        }
        printf("--------------------------------------------------\n");

        printf("COMPARAÇÃO DE PIB: \n");
        printf("Carta 1: %f reais | Carta 2: %f reais\n", pibA, pibB);
        if (pibA > pibB) {
            printf("O PIB DA CARTA 1 VENCEU\n");
        } else if (pibA < pibB){
            printf("O PIB DA CARTA 2 VENCEU\n");
        } else{
            printf("EMPATE! AS DUAS CARTAS TÊM O MESMO PIB");
        }
        printf("--------------------------------------------------\n");

        printf("COMPARAÇÃO DE PIB PER CAPITA: \n");
        printf("Carta 1: %10.2f | Carta 2: %10.2f\n", pibpercapitaA, pibpercapitaB);
        if (pibpercapitaA > pibpercapitaB) {
            printf("O PIB PERCAPITA DA CARTA 1 VENCEU\n");
        } else if (pibpercapitaA < pibpercapitaB) {
            printf("O PIB PER CAPITA DA CARTA 2 VENCEU\n");
        } else{
            printf("EMPATE! AS DUAS CARTAS TÊM O MESMO PIB PERCAPITA\n");
        }
        printf("--------------------------------------------------\n");

         printf("COMPARAÇÃO DE DENSIDADE POPULACIONAL: \n");
         printf("Carta 1: %10.2f hab/km² | Carta 2: %10.2f hab/km²\n", densidadeA, densidadeB);
         if (densidadeA < densidadeB){
            printf("A DENSIDADE POPULACIONAL DA CARTA 1 VENCEU\n");
         } else if(densidadeB < densidadeA){
            printf("A DENSIDADE POPULACIONAL DA CARTA 2 VENCEU\n");
         } else{
            printf("EMPATE! AS DUAS CARTAS TÊM A MESMA DENSIDADE POPULACIONAL\n");
         }
         printf("--------------------------------------------------\n");
        */



    