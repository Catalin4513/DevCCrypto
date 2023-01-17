#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 60


char* stringToBinary(char* s) {
    int i,j,c;
    char binary;
    for(i=0;i<s[i]!='\0';i++){
    //	c=str[i];
    	for(j=7;j+1>0;j--){
    		if(str[i]>=(1<<j))
    		{
    			str[i]=str[i]-(1<<j);
    			binary=bynary+"1";
    			else 
    			binary=bynary+"0";
			}
		}
	}
    
    return binary;
}

void VGB_encrypt(char* msg){
	
 printf("Encrypting...\n");
  int i, j,k,m1,m2,m3;
  char enc[25];
  char key[60];
 
  printf("Key: ");
  scanf("%59s",key);
  int encb[60];
 int msgb[60]= stringToBinary(msg);
 int keyk[60]= stringToBinary(key);
  k=0;
 //  k=k%(strlen(key)-1);
 
  for (i = 0; i < strlen(msgb); i++){
  	
	
 encb[i]= msgb[i]^keyk[j];

     
   if(j+1==strlen(keyk))
   j=0;
   else j++;
   
   printf("%c",encb[i]);
   
      }
                    
        //  printf("Encrypted message: \n");
         // for (i = 0; i < 7; i++)
  //printf("%c",enc[i]);
  
  printf("\n\n");
}


void VGB_decrypt(char* msg){
	
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
