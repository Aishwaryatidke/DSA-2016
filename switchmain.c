/*
========================================================================
======================================================================
* Name switchmain.c
* Author
: Aishwarya Prakash Tidke (S.Y.Btech in Computer Engineering from CoEP)
* Description : Implementation of string.h header file functions
* Copyright (C) Aishwarya Tidke
* ID : aishwaryanita.tidke@gmail.com
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2.1 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
========================================================================
======================================================================
*/


#include<stdio.h>
#include"stringh.h"
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#define MAX 120



int main(){

              
              char line[MAX], choice;
              char *token = NULL, *tokid = NULL, *fname = NULL, *istr1 = NULL, *istr2 = NULL, *istr3 = NULL, *ostr = NULL, *result = NULL;    
              int i, ch, r;
	      FILE *fp;
              token = (char*)malloc(sizeof(char));
              result = (char*)malloc(sizeof(char));
        	/*open a file "data.txt"*/
              fp = fopen("data.txt", "r");
	       if(fp == NULL) {
		  perror("open failed\n");
		  return errno;
	      }
         
       else{
     
                printf("****---------------------TESTCASES FOR string.h-------------------------***\n\t");
			while (fgets(line, sizeof (line), fp)){
			 token = strtok(line,":");
			 if (token != NULL) {
				tokid = token;  /*tokid is the id of functions which is a first token got from file*/			
			}
			printf("\n");
			ch = atoi(tokid);  /* Conversion of string to int */
	
		switch(ch){
			case 1:                
                                               /*fname as a function name (strlen1)*/  
                                                token = strtok(NULL, ":"); 
                                                fname = token;
                                                printf("Function name : %s\t", fname);
                                                
                                                /*first input string*/  
                                                token = strtok(NULL, ":");
                                                istr1 = token;
                                                
                                                 /*output string*/
                                                token = strtok(NULL, ":");
                                                ostr = token;
           
                                                int m = atoi(ostr); /*conversion of string to int*/
 						
                                               /*strlen1 function calling*/
                                                int x = strlen1(istr1);
                                                  if(x == m)
                                                   printf("test passed\n\t");
                                                  else
                                                   printf("test failed\n\t");
				
			                          break;


			case 2:
                                         /*(strcpy1) function name*/  
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                          
                                          /*input string*/       
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                                           
                                           /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     				         
                                          
                                          /*strcpy1 function calling*/          
                                          strcpy1(result, istr1);
                                        
                                                   if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;

			case 3:                 /*(strncpy1) function name*/
                                  	        token = strtok(NULL, ":"); 
                                  	        fname = token;
                                                printf("Fuction name : %s\t", fname);
                                                
                                                /*input string 1*/ 
                                                token = strtok(NULL, ":");
                                                istr1 = token; 
                                               
                                                /*input string 2*/
                                                token = strtok(NULL, ":");
                                                istr2 = token;                  
                                             
                                                int maxlen = atoi(istr2);  
                                                 /*output string*/                                     
                                                token = strtok(NULL, ":");
                                                ostr = token;
                                            
                                                 strncpy1(result, istr1, maxlen);
                                                   if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
						    
							break;

			case 4:
                                        /*function name(stpcpy)*/
				         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                         
                                          /*input string 1*/        
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                   
                                          /*output string*/
                                          token = strtok(NULL,":");
                                          ostr = token;
     				
                                          
                                          /*stpcpy1 function calling*/          
                                          stpcpy1(result,istr1);
                                                   if(strcmp(result, ostr) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
					 
			case 5:
                                        /*function name (strcat1)*/
				         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name: %s\t", fname);
                                         
                                          /*input string 1*/        
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
                                          /*input string 2*/
                                          token = strtok(NULL, ":");
                                          istr2 = token; 
                                           
                                          /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          
                                          /*strcat1 function calling*/          
                                          strcat1(result, istr1, istr2);
                                                   if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
			        
			case 6:
				         /*function name (strncat1)*/
				         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                          
                                          /*input string 1*/       
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
                                          /*input string 2*/
                                          token = strtok(NULL, ":");
                                          istr2 = token; 
                                           
                                           /*input string 3*/
                                           token = strtok(NULL, ":");
                                           istr3 = token; 
                                          
                                           int xn = atoi(istr3); /*xn is a maxlength*/
                                           
                                           /*output string*/  
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          
                                          /*strncat1 function calling*/          
                                          strncat1(result, istr1, istr2, xn);
                                                   if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
			        

			        
			case 7:          /*function name (strrev1)*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                           
                                          /*input string 1*/      
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					  /*input string 2*/ 
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                          int c = atoi(istr2);   
                                        
                                           /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					 
                                          
                                          /*strrev1 function calling*/          
                                          strrev1(result, istr1,c);
                                                   if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
			    
                                             
			case 8:
                                        /*function name (strcmp1)*/

                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                           
                                         /*input string 1*/      
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					  /*input string 2*/ 
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                          
                                          /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					   int in = atoi(ostr);
                                          
                                          /*strcmp1 function calling*/          
                                         r = strcmp1(istr1, istr2);
                                                   if(in == r)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
				
			case 9:         
                                         /*function name (strncmp1)*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                          
                                          /*input string 1*/       
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					  /*input string 2*/ 
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                            
                                          /*input string 3*/ 
					  token = strtok(NULL, ":");
                                          istr3 = token;
                                          int acmp = atoi(istr3);
                                          
                                          /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					   int in1 = atoi(ostr);
                                          
                                          /*strncmp1 function calling*/          
                                          strncmp1(istr1, istr2, acmp);
                                                   if(in1 == r)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
				
			case 10:         /*function name (strchr1)*/ 
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                           
                                          /*input string 1*/      
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					  /*input string 2*/ 
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                          char istr22 = *istr2;

					 
                                           /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          
                                          /*strchr1 function calling*/          
                                          result = strchr1(istr1, istr22);
                                                    if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;

			case 11:          
                                         /*function name (strrchr1)*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Function name : %s\t", fname);
                                          
                                          /*input string 1*/
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					  /*input string 2*/ 
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                          char ich12 = *istr2;
					   
                                          /*output string*/  
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          
                                          /*strrchr1 function calling*/          
                                          result = strrchr1(istr1, ich12);
                                                    if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;


 			case 12:          /*function name (strfreq())*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                           
                                          /*input string 1*/      
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
					   /*input string 2*/
					  token = strtok(NULL, ":");
                                          istr2 = token; 
                                           char chf = *istr2;
					 
                                          /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
                                          int freo = atoi(ostr); 
     					  
                                          
                                          /*strfreq function calling*/          
                                          r = strfreq(istr1, chf);
                                                    if(freo == r )
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;

			case 13:          
                                        /* function name (strascii)*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                                 
                                        /*input string 1*/
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                          char casc = *istr1;
                                           
					   /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
                                           int fascii = atoi(ostr);
     					  
                                          
                                          /*strascii function calling*/          
                                              strascii(*istr1);
                                              r = atoi(istr1);
                                                    if(fascii == r )
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;

			case 14:          
                                       /*function name (strlwr1) */
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                                
                                         /*input string 1*/
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                           
                                          /*output string 1*/			 
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          
                                          /*strlwr1 function calling*/          
                                          result = strlwr1(istr1);
                                                    if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;



			case 15:          
                                        /*function name (strupr1)*/
                                         token = strtok(NULL, ":"); 
                                	 fname = token;
                     	                 printf("Fuction name : %s\t", fname);
                                               
                                         /*input string*/   
                                          token = strtok(NULL, ":");
                                          istr1 = token; 
                                
                                          /*output string*/
                                          token = strtok(NULL, ":");
                                          ostr = token;
     					  
                                          /*strupr1 function calling*/          
                                          result = strupr1(istr1);
                                                    if(strcmp(ostr, result) == 0)
							printf("test passed\n\t");
						   else
							printf("test failed\n\t");
                                 
			                         break;
                     

			
		}/*end of switch case*/

               }/*end of while*/

             }/*enf of else*/
	return 0;
}/*enf of main*/


