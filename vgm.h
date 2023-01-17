#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define SIZE 60


void VGM_encrypt(char* msg){
	int seed=time(NULL);
 printf("Encrypting...\n");
  int i, j,k,m1,m2,m3;
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[60];
 
  printf("Key: ");
  scanf("%59s",key);
 
  k=0;
 //  k=k%(strlen(key)-1);
  for (i = 0; i < strlen(msg); i++){
  
 for (j = 0; j < strlen(letters); j++)
 
  {
          if (msg[i]==letters[j]){
		  
          m1=j;}
          if(key[k]==letters[j]){
		  //printf("%c",letters[j]);
          m2=j;}
		  }
          if(k==(strlen(key)-1))
          k=0;
          else
          k++;
         enc[i]=letters[(m1+m2+seed)%strlen(letters)];
        // printf("%i",seed);
        //printf("\n");
         
        
         printf("%c",enc[i]);
          
          
      }
                    
        //  printf("Encrypted message: \n");
         // for (i = 0; i < 7; i++)
  //printf("%c",enc[i]);

printf("\n Seed: %i",seed);
  printf("\n\n");
}


void VGM_decrypt(char* msg){
	
 printf("Decrypting...\n");
  int i, j,k,m1,m2,m3;
 
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char key[60];
 int seed=0;
  printf("Key: ");
  scanf("%59s",key);
  printf("Seed: ");
 scanf("%d",&seed);

  //printf("%d",seed);
  
 
  k=0;
 //  k=k%(strlen(key)-1);
  for (i = 0; i < strlen(msg); i++){
  
 for (j = 0; j < strlen(letters); j++)
 
  {
          if (msg[i]==letters[j]){
		  
          m1=j;}
          if(key[k]==letters[j]){
		  //printf("%c",letters[j]);
          m2=j;}
		  }
          if(k==(strlen(key)-1))
          k=0;
          else
          k++;
          
        enc[i]=letters[(strlen(letters)-abs((m1-m2-seed))%strlen(letters))];
         printf("%c",enc[i]);
          
          
      }
                    
        //  printf("Encrypted message: \n");
         // for (i = 0; i < 7; i++)
  //printf("%c",enc[i]);
 // printf("\n Seed: %d",seed);
  
  printf("\n\n");
}
