
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 60


void CSR_encrypt(char* msg){
  printf("Encrypting...\n");
  int i, j, key;
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Key: ");
  scanf("%i",&key);
  for (i = 0; i < strlen(msg); i++)
      for (j = 0; j < strlen(letters); j++)
          if (msg[i]==letters[j])
          if ((j+key)<strlen(letters))    
          enc[i] = letters[j+key];  
          else enc[i] = letters[(j+key)-strlen(letters)];
          
          
          printf("Encrypted message: \n");
          for (i = 0; i < strlen(msg); i++)
  printf("%c",enc[i]);
  
  printf("\n\n");
}

void CSR_decrypt(char* msg){
  printf("Decriptare...\n");
  int i, j, key;
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("Key: ");
  scanf("%i",&key);
  for (i = 0; i < strlen(msg); i++)
      for (j = 0; j < strlen(letters); j++)
          if (msg[i]==letters[j])
           if ((j-key)>0)    
          enc[i] = letters[j-key];  
          else enc[i] = letters[(j-key)+strlen(letters)];
          
          
          printf("Decripted message: \n");
          for (i = 0; i < strlen(msg); i++)
  printf("%c",enc[i]);
  
  printf("\n\n");
}







void CSR_enc_math(char* msg){ 
  printf("Encrypting...matematic\n"); 
  int i, j, key; 
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
  printf("Key: "); 
  scanf("%i",&key); 
  for (i = 0; i < strlen(msg); i++) 
   for (j = 0; j < strlen(letters); j++) 
    if (msg[i]==letters[j]) 
            enc[i] = letters[(j + key) % 26]; 
             
    printf("Encrypted message: \n"); 
     for(i = 0; i<strlen(msg); i++){ 
          printf("%c",enc[i]); 
          } 
   
  printf("\n\n"); 
}





void CSR_dec_math(char* msg){ 
  printf("Encrypting...matematic\n"); 
  int i, j, key; 
  char enc[25], letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
  printf("Key: "); 
  scanf("%i",&key); 
  for (i = 0; i < strlen(msg); i++) 
   for (j = 0; j < strlen(letters); j++) 
    if (msg[i]==letters[j]) 
            enc[i] = letters[(j - key) % 26]; 
             
    printf("Encrypted message: \n"); 
     for(i = 0; i<strlen(msg); i++){ 
          printf("%c",enc[i]); 
          } 
   
  printf("\n\n"); 
}
