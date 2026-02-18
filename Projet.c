#include<stdio.h>
int main(){
int x,n,i,somme=0,cpt=0,somme1=0,cpt1=0;
float moy,moyi;
do{
    printf("Saisir n entier:");
    scanf("%d",&n);
    }while(n<0);
    for(i=0;i<n;i++){
        do{
            puts("Veuillez saisir un entier");
            scanf("%d",&x);
        }while(x>0);
        if(x%2==0){
        	somme=somme+x;
        	cpt++;
		}
		else{
			somme1=somme1+x;
			cpt1++;
		}
    }
    moy=somme/cpt;
    moyi=somme1/cpt1;
    printf("La moyenne des nombres pairs est : %f",moy);
    printf("La moyenne des nombres impairs est : %f",moyi);
return 0;
}
