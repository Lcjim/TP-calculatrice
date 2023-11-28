#include <stdio.h>
#include <math.h>




int main(){
    char choix;
    char nature;
    int number1;
    int number2;
    int calcul;


    printf("pour continuer à calculer appuyer [0:oui, 1:non]");
    scanf("%d",&choix);
    getchar();
    while(choix==0){
        printf(" choisir la nature de calcul\n"
               "addition= +, soustraction = -, multiplication = * , division = / \n"
               ", puissance = ^ , racine carrée = s, et pourcentage = %.\n");
        scanf("%c",&nature);
        if (nature== '+'){                              /* on mets + comme nature pour faire la somme du premier nombre et le second */
            printf(" choisir le premier nombre.\n");
            scanf("%d",&number1);
            getchar();
            printf(" choisir le second nombre.\n");
            scanf("%d",&number2);
            getchar();
            calcul=number1 + number2;
            printf("le résultat de %d + %d est: %d  \n",number1,number2, calcul);

        }else if (nature== '-'){                           /* on mets - comme nature pour faire la différence du premier nombre et le second */
            printf(" choisir le premier nombre.\n");
            scanf("%d",&number1);
            getchar();
            printf(" choisir le second nombre.\n");
            scanf("%d",&number2);
            getchar();
            calcul=number1 - number2;
            printf("le résultat de %d - %d est: %d  \n",number1,number2, calcul);

        }else if (nature== '*') {                       /* on mets * comme nature pour faire la multiplication du premier nombre et le second */
            printf(" choisir le premier nombre.\n");
            scanf("%d", &number1);
            getchar();
            printf(" choisir le second nombre.\n");
            scanf("%d", &number2);
            getchar();
            calcul = number1 * number2;
            printf("le résultat de %d x %d est: %d \n", number1, number2, calcul);
            if (number1 ||number2 == 0) {          /* si le premier nombre et le second est 0,erreur car il suit les règles mathématique */
                printf("Erreur de cacul!\n,on peut multiplier par zero");

            }
        }else if (nature=='/'){        /* on mets / comme nature pour faire division du premier nombre et le second */
            printf(" choisir le premier nombre.\n");
            scanf("%d",&number1);
            getchar();
            printf(" choisir le second nombre.\n");
            scanf("%d",&number2);
            getchar();

            if (number1 && number2 != 0) {       /* fair l'opération du premier nombre et le second sauf si les un des deux c'est un 0 car sinon erreur mathématique*/
                calcul = number1 / number2;
                printf("Le résultat de %d / %d est : %d\n", number1, number2, calcul);
            } else {
                printf("Erreur de calcul ! On ne peut pas diviser par zéro.\n");
            }
        }else if (nature == '^'){       /* on mets ^ comme nature pour faire la puissance du nombre  de base et le exponent */
            printf(" choisir le premier nombre sera la base.\n");
            scanf("%d",&number1);
            getchar();
            printf(" choisir le second nombre sera l'exponent.\n");
            scanf("%d",&number2);
            getchar();
            calcul=pow(number1,number2);
            printf("le résultat de %d ** %d  est: %d \n",number1,number2, calcul);

        }else if (nature == 's') {     /* on mets s comme nature pour faire la racine du premier nombre */
            printf(" choisir le premier nombre sera la base.\n");
            scanf("%d", &number1);
            getchar();
            if(number1>1){          /* la racine du premier nombre doit être positive donc supérieur à 1 */
                calcul = sqrt(number1);
                printf("le résultat de racine( %d ) est: %d \n", number1, calcul);
            }else if (number1 <0 ){       /* la racine du premier est négative, donner aucun résultat */
                printf("Opérateur non reconnu,La racine carrée d'un nombre négatif n'existe pas.\n");
            }
        }else if (nature== '%') {        /* on mets % comme nature pour le pourcentage du premier nombre et le second */
            printf("choisir un nombre  .\n");
            scanf("%d", &number1);
            getchar();
            printf("le second sert de pourcentage.\n");
            scanf("%d", &number2);
            getchar();
            calcul =  number1* number2/100;
            printf("le résultat de %d x %d/100 est: %d \n", number1, number2, calcul);
        }
        printf("pour continuer à calculer appuyer [0:oui, 1:non]");
        scanf("%d",&choix);
        getchar();
    }
    printf("vous avez sortie de la calculatrice");

    return 0;
}
