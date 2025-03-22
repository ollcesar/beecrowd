#include <stdio.h>

int main(){

    float N1, N2, N3, N4, media;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media = (((N1*2.0)+(N2*3.0)+(N3*4.0)+(N4*1.0))/10);

    if (media >= 7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
    }else if (media < 5.0){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }else{
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");

        float notaExame;
        
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);

        float novaNota = (media + notaExame)/2;

        if(novaNota >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", novaNota);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", novaNota);
        }

    }

    return(0);
    
}