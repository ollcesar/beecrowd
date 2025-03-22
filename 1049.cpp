#include <stdio.h>

int main(){

    char ordem[20], familia[20], alimentacao[20];

    scanf("%s %s %s", ordem, familia, alimentacao);

    if(ordem == "vertebrado"){

        if(familia == "ave"){

            if(alimentacao == "carnivoro"){

                printf("aguia\n");

            }else if(alimentacao == "onivoro"){

                printf("pomba\n");

            }

        }else if(familia == "mamifero"){

            if(alimentacao == "onivoro"){

                printf("homem\n");

            }else if(alimentacao == "herbivoro"){

                printf("vaca\n");

            }

        }

    }else if(ordem == "invertebrado"){

        if(familia == "inseto"){

            if(alimentacao == "hematofago"){

                printf("pulga\n");

            }else if(alimentacao == "herbivoro"){

                printf("lagarta\n");

            }

        }else if(familia == "anelideo"){

            if(alimentacao == "hematofago"){

                printf("sanguessuga\n");

            }else if(alimentacao == "onivoro"){

                printf("minhoca\n");

            }

        }
    }

    return 0;
}