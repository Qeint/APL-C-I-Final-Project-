#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand((unsigned int)(time(NULL)));
    int i;
    int o;
    int c;
    int choose;//Letters
    int choosse;//Cap letters
    int choossse;//Numbers
    char capLetter;
    char letter;

    printf("Do your want capital letters?\n");
     printf("1 - No\n"); 
     printf("2 - Yes\n"); 
     printf("Enter: ");
     scanf(" %d",&choose);

    printf("Do you want lowercase letters?\n");
     printf("1 - No\n"); 
     printf("2 - Yes\n"); 
     printf("Enter: ");
     scanf(" %d",&choosse);

    printf("Do you want numbers?\n");
    printf("1 - No\n"); 
     printf("2 - Yes\n"); 
     printf("Enter: ");
     scanf(" %d",&choossse);
    
   
  
    printf("How long do you want the password to be?\n");

    scanf(" %d",&o);

     char *pass=malloc(sizeof(char)*o*3);


    printf("Password:\n");
    getchar();

    
    if(choose==1 &&choosse==1 ){  
          printf("Hasta la vista baby\n\n\n"); exit(0);}
      
    
//Password Gene
    for (i = 0; i < o*3; i+=3) {
        pass[i] ='0'+ (rand() % 9);
         if(choossse==1){
           pass[i]='a' + (rand() % 26);
         }
           if(choosse==1){
             pass[i]='A' + (rand() % 26);
           }


        capLetter = 'A' + (rand() % 26);
        if(choose==1){
          capLetter='a' + (rand() % 26);
        }
        if(choosse==1){
             capLetter='A' + (rand() % 26);
           }

        pass[i + 1] = capLetter;
        letter = 'a' + (rand() % 26);
        if(choosse==1){
          letter='A' + (rand() % 26);
        }
        if(choose==1){
             letter='0'+ (rand() % 9);
           }

        pass[i + 2] = letter;
        
        printf("%c%c%c", pass[i], pass[i + 1], pass[i + 2]);
    }
    printf("\n\n");
}

//case'3':{ printf("Hasta la vista baby\n\n\n"); exit(0);