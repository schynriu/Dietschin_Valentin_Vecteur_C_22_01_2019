#include <stdio.h>
#include <stdlib.h>
#define TAILLE 20


typedef struct tJeton{// positionnement du compteur dans le tableau
    int nX;
    int nY;
    int nCpt;
    int nCpt2;
}tJeton;


int main(){
int MonTableau [TAILLE][TAILLE];//creation du tableau
tJeton m_jeton;

        initialiser(MonTableau[TAILLE][TAILLE],&m_jeton);
        valeur(MonTableau[TAILLE][TAILLE],&m_jeton);
        //addition(MonTableau[TAILLE][TAILLE],&m_jeton);
        afficher(MonTableau[TAILLE][TAILLE],&m_jeton);
        return 0;

}
void initialiser(int MonTableau[TAILLE][TAILLE], tJeton *m_jeton){


     for(m_jeton->nX=0;m_jeton->nX<TAILLE;m_jeton->nX++){
        for(m_jeton->nY=0;m_jeton->nY<TAILLE;m_jeton->nY++){
                MonTableau[m_jeton->nX][m_jeton->nY]=0;
        }
    }
}

void valeur(int MonTableau[TAILLE][TAILLE], tJeton*m_jeton){

    m_jeton->nCpt=1;
    printf("Rentrez la coordonnée x et y du premier vecteur, le tableau a une capacité maximum de 20*20 \n");
    scanf("%d%d",m_jeton->nX,m_jeton->nY);
    MonTableau[m_jeton->nX][m_jeton->nY]=m_jeton->nCpt;

    printf("C'est le point de depart de votre premier vecteur, quel est son point d'arriver ? Rentrez deux valeur ,x et y valeur \n");
    scanf ("%d%d",m_jeton->nX,m_jeton->nY);
    MonTableau[m_jeton->nX][m_jeton->nY]=m_jeton->nCpt;


    m_jeton->nCpt2=2;
    printf("Rentrez la coordonnee x et y du second vecteur a present \n");
    scanf("%d%d",m_jeton->nX,m_jeton->nY);
    MonTableau[m_jeton->nX][m_jeton->nY]=m_jeton->nCpt2;

    printf("C'etait le point de depart de votre second vecteur, quel est son point d'arriver ? Rentrez deux valeur ,x et y valeur \n");
    scanf ("%d%d",m_jeton->nX,m_jeton->nY);
    MonTableau[m_jeton->nX][m_jeton->nY]=m_jeton->nCpt2;


}



void addition(int MonTableau[TAILLE][TAILLE], tJeton *m_jeton){



}

void afficher(int MonTableau[TAILLE][TAILLE], tJeton *m_jeton){
int nCpt=0;
int nCpt2=0;

    for(nCpt=0;nCpt<TAILLE;nCpt++){
        for(nCpt2=0;nCpt2<TAILLE;nCpt2++){
            printf("%d ",MonTableau[nCpt][nCpt2]);
        }
        printf("\n");
    }
}

