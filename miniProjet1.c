#include <stdio.h>
#include <string.h>
char nom[50][50];
char mycontact[50][40];
char tele[50][50];
int a=0;
int choix;
int n;
void menu() {
    printf("    menu principal\n");
    printf("1 ajouter\n");
    printf("2 afficher\n");
    printf("3 rechercher\n");
    printf("4 supprimer\n");
    printf("5 quitter\n");
    printf("saisir votre choix");
    scanf("%d",&choix); }
void menu_status(){
    printf("choisisser:\n");
    printf("1 enregistrer\n");
    printf("2 annuler\n"); }
 void ajouter() {
    printf("le nombre de contacts");
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        printf("enter le nom %d",i+1);
        scanf("%s",nom[i]);
        printf("entrer le telephone %d",i+1);
        scanf("%s",tele[i]);}
    menu_status();
    int choix_status;
    printf("les options");
    scanf("%d",&choix_status);
    switch (choix_status) {
        case 1 :
        printf("enregistrer");
        break;
        case 2 :
        printf("annuler");
        default :
        printf("choix invalide");}
    printf("contact ajoute avec succee");
  }
    
 void afficher(){
     printf("liste de contactes:\n");
     for(int i=0; i<=n ;i++){
     printf("%s: %s\n",nom[i],tele[i]);}
     }
 void rechercher(){
     char nom_recherche[50];
     int found = 0 ;
     printf("rechercher un contact:");
     scanf("%s",&nom_recherche);
     for (int i=0;i<n;i++){
      if(strcmp(nom_recherche,nom[i]) ==0 ){
         printf("le nom:%s",nom[i]);
         printf("le telephone:",tele[i]);
         found++;
         break;}
     }
     if (!found)
         printf("contact non trouve");
}
void data(){
    char chi_nom[40];
    char chi_tele[30];
    
}
int main(){
    data();
   while (1){
    menu();
    switch(choix){
     case 1 :
     ajouter();
     break;
     case 2 :
     afficher();
     break;
     case 3 :
     rechercher();
     break;
    //  case 4 :
    //  supprimer();
    //  break;
    //  case 5 :
    //  quitter();
    //  break;
    } 
  }
       
    return 0;
}
