#include <stdio.h>

int main(){
    int voto=0,vb=0,vn=0,kelvin=0,marcia=0,luizC=0,tamires=0;

        printf("\nEleicao para presidente da chapa estudantil IFSM\n\n");
        printf("Candidatos:\n\nKelvin (1)\nMarcia (2)\nLuiz C (3)\nTamires (4)\n\n");
        printf("Eleitor 1 ,Digite seu voto:\n");
        scanf("%d", &voto);
        if(voto==1){
            kelvin++;
        }
        if(voto==2){
            marcia++;
        }
        if(voto==3){
            luizC++;
        }
        if(voto==4){
            tamires++;
        }
        if(voto<1){
            vb++;
        }
        else{
            if(voto>4){
            vn++;}
        }
        
        printf("\nEleitor 2,Digite seu voto:\n");
        scanf("%d", &voto);
        if(voto==1){
            kelvin++;
        }
        if(voto==2){
            marcia++;
        }
        if(voto==3){
            luizC++;
        }
        if(voto==4){
            tamires++;
        }
        if(voto<1){
            vb++;
        }
        else{
            if(voto>4){
            vn++;}
        }
        
        
        printf("\nEleitor 3,Digite seu voto:\n");
        scanf("%d", &voto);
        if(voto==1){
            kelvin++;
        }
        if(voto==2){
            marcia++;
        }
        if(voto==3){
            luizC++;
        }
        if(voto==4){
            tamires++;
        }
        if(voto<1){
            vb++;
        }
        else{
            if(voto>4){
            vn++;}
        }
        
        
        printf("\nEleitor 4,Digite seu voto:\n");
        scanf("%d", &voto);
        if(voto==1){
            kelvin++;
        }
        if(voto==2){
            marcia++;
        }
        if(voto==3){
            luizC++;
        }
        if(voto==4){
            tamires++;
        }
        if(voto<1){
            vb++;
        }
        else{
            if(voto>4){
            vn++;}
        }
        
        
        printf("\nEleitor 5,Digite seu voto:\n");
        scanf("%d", &voto);
        if(voto==1){
            kelvin++;
        }
        if(voto==2){
            marcia++;
        }
        if(voto==3){
            luizC++;
        }
        if(voto==4){
            tamires++;
        }
        if(voto<1){
            vb++;
        }
        else{
            if(voto>4){
            vn++;}
        }
        
        printf("\n");
        if(kelvin>marcia&&kelvin>luizC&&kelvin>tamires){
            printf("Kelvin Eleito\n");
        }
        if(marcia>kelvin&&marcia>luizC&&marcia>tamires){
            printf("Marcia Eleita\n");
        }
        if(luizC>kelvin&&luizC>marcia&&luizC>tamires){
            printf("Luiz C Eleito\n");
        }
        if(tamires>kelvin&&tamires>marcia&&tamires>luizC){
            printf("Tamires Eleita\n");
        }

        if(kelvin==marcia ){
            printf("Kelvin e Marcia empataram em votos\n");
        }
        if( kelvin==luizC ){
            printf("Kelvin e Luiz C empataram em votos\n");
        }
        if(kelvin==tamires){
            printf("Kelvin e tamires empataram em votos\n");
        }
        if(marcia==luizC){
            printf("marcia e Luiz C empataram em votos\n");
        }
        if(marcia==tamires){
            printf("Marcia e tamires empataram em votos\n");
        }
        if(luizC==tamires){
            printf ("Luiz e tamires empataram em votos \n");
        }
      
        printf ("Votos Kelvin: %d", kelvin);
        printf ("\nVotos Marcia: %d", marcia);
        printf ("\nVotos Luiz C: %d", luizC);
        printf ("\nVotos Tamires: %d", tamires);
        printf ("\nVotos brancos: %d", vb);
        printf ("\nVotos nulos: %d", vn);

}