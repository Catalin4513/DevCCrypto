#include "vgn.h"
#include "vgm.h"
#include "csr.h"
#include "csk.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 60

int main(int argc, char *argv[])
{
	char *programe =argv[0];
		char *optiuni =argv[1];
		char *mesaj = argv[2];
	
    if(argc==1){
        
        fprintf(stderr,"%s:  to few arguments \n",programe);
        exit(5);
    }
    
    if(argc==2){
         if (strcmp(optiuni,"-Ecsr")==0 || strcmp(optiuni,"-Dcsr")==0)
      {
		 fprintf(stderr,"%s: no  message:(  \n",programe);exit(4); }
        else
         if (strcmp(optiuni,"-Ecsr")==1 || strcmp(optiuni,"-Dcsr")==1)
        {
		fprintf(stderr,"%s: no  option \n",programe);exit(3);  }
        //fprintf(stderr,"%s: no option or message \n",programe);
        exit(2);
    }
    
    
    if(argc==3){
    	  if (strcmp(optiuni,"-EcsrMSG")==0)
            CSR_encryptMSG(mesaj);
            
            else if (strcmp(optiuni,"-DcsrMSG")==0)
            CSR_decryptMSG(mesaj);
            else if  (strcmp(optiuni,"-Dcsr")==0)
            CSR_decrypt(mesaj);
            else  if (strcmp(optiuni,"-Enc_V")==0)
            VGN_encrypt(mesaj);
            else  if (strcmp(optiuni,"-Enc_M")==0)
            VGM_encrypt(mesaj);
            
             else  if (strcmp(optiuni,"-Dec_V")==0)
            VGN_decrypt(mesaj);
             else  if (strcmp(optiuni,"-Dec_M")==0)
            VGM_decrypt(mesaj);
            else if (strcmp(optiuni,"-Ecsr")==0)
            CSR_encrypt(mesaj);
            else 	
			if (strcmp(optiuni,"-EcsrMat")==0)
            CSR_enc_math(mesaj);
        else  if (strcmp(optiuni,"-DcsrMat")==0)
            CSR_dec_math(mesaj);
        else 
    	if (strcmp(optiuni,"-Ecsr")==1 || strcmp(optiuni,"-Dcsr")==1
		|| strcmp(optiuni,"-EcsrMat")==1 || strcmp(optiuni,"-DcsrMat")==1
		|| strcmp(optiuni,"-DcsrMSG")==1 || strcmp(optiuni,"-EcsrMSG")==1
		|| strcmp(optiuni,"-Enc_V")==1)
    	{
		fprintf(stderr,"%s: illegal option\n ",programe);
            exit(2);}}
            
            if(argc>3){
            		fprintf(stderr,"%s: too many strings\n ",programe);
            		exit(1);
			}
            
           
            
    	
    exit(0);	
	}
