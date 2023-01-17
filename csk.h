#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 60



  char* CSK_keygen(char key[60]){
	

  int i, j,k,n;
  const char letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//char key[20];
  printf("Key: ");
 
   scanf("%59s", key);  
strcat(key, letters);

 
n=strlen(key);  
  for (i = 0; i < n; i++){
  	for (j = i+1; j < n; j++){
  		if (key[i]==key[j]){
  			for(k=j;k<n;k++)
  			key[k]=key[k+1];
		  }
	  }
  
  }
  char* key2;
  for (i = 0; i < n; i++)
  key2=key2+key[i];
   //for (i = 0; i < strlen(key); i++)
 // printf("%c",key[i]);
 
  return key2;
	
	
	
}
 
void CSR_encryptMSG(char* msg){
  printf("Encrypting...\n");
  int i, j,k,n;
  char enc[60] ;
  char key[60];

 
 CSK_keygen(key);
 
 char letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// printf("%c",letters[0]);
n=strlen(msg);

  for (i = 0; i < n; i++)
  {
 
  	for (j = 0; j < strlen(letters); j++){
  	 
  	 	if (msg[i]==letters[j]){

			   enc[i]=key[j];
  	 		 printf("%c",key[j]);
  	 		
  	 	continue;
		   }
	   }
  }
  
       // for (i = 0; i < strlen(enc); i++)
  //printf("%c",enc[i]);
  
  printf("\n\n");
}


void CSR_decryptMSG(char* msg){
  printf("Decrypting...\n");
  int i, j,k,n;
  char enc[60] ;
  char key[20];

 
 CSK_keygen(key);
 
 char letters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// printf("%c",letters[0]);
n=strlen(msg);

  for (i = 0; i < n; i++)
  {
 
  	for (j = 0; j < strlen(letters); j++){
  	 
  	 	if (msg[i]==key[j]){

			   enc[i]=letters[j];
  	 		
  	 		
  	 	continue;
		   }
	   }
  }
  
        for (i = 0; i < strlen(enc); i++)
  printf("%c",enc[i]);
  
  printf("\n\n");
}
