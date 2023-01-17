#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 60




void VGN_encrypt(char* msg){
	
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
         enc[i]=letters[(m1+m2)%26];
        
         printf("%c",enc[i]);
          
          
      }
                    
        //  printf("Encrypted message: \n");
         // for (i = 0; i < 7; i++)
  //printf("%c",enc[i]);
  
  printf("\n\n");
}


void VGN_decrypt(char* msg){
	
 printf("Decrypting...\n");
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
         enc[i]=letters[(m1-m2+26)%26];
        
         printf("%c",enc[i]);
          
          
      }
                    
        //  printf("Encrypted message: \n");
         // for (i = 0; i < 7; i++)
  //printf("%c",enc[i]);
  
  printf("\n\n");
}

