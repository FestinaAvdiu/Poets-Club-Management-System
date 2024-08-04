#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"



int main()
{
   /////////////// OPEN THE FILE FOR READING ///////////////
   
   FILE *file;
   file = fopen("database.txt", "r"); 

   if(file == NULL)
   {
      printf("Error opening the file!\n"); 
      return(1);
   }
   

   /////////////// CHECK NUMBER OF MEMBERS ///////////////

   int lines = 0;
   char characters = fgetc(file);

   while((characters = fgetc(file)) != EOF){

      if (characters == '\n'){
            lines++; 
         }

   }

   printf("\n\n\n```````````````````````````````````````````````````````````````````````\n");
   printf("\nThere are %d members in the club! \n\n", lines);

   int numOfMembers = lines;

   fclose(file);
   

   /////////////////////// ALLOCATE THE MEMORY NEEDED //////////////////
   
   file = fopen("database.txt", "r"); 

   if(file == NULL)
   {
      printf("Error opening the file!\n"); 
      return(1);
   }

   
   member *student = malloc(sizeof(member) * numOfMembers);
   if (student == NULL) {
      printf("Error: Unable to allocate memory.\n");
      return(1);
   } else {
      printf(" - Memory block required for the structure array has been allocated!\n\n");
   }

   /////////////// READ THE CONTENT OF FILE AND STORE INTO THE STRUCTURE ARRAY ///////////////

   for(int i = 0; i < numOfMembers; i++)
   {
      fscanf(file, "%d%s%s%s%d%f%s", &student[i].number, student[i].fname, student[i].lname, student[i].email, &student[i].class, &student[i].years, student[i].role);

   }

   printf(" - Data has been read from the file into the structure array!\n\n");

   fclose(file);
   

   ///////////////////// GIVE THE USER THE OPTIONS /////////////////
 
   
   do{
      
      switch(options()){
         case 1:
            list(student, lines); 
            break;

         case 2:
            addMember(&student, &lines);
            break;

         case 3: 
            searchByID(student, lines);
            break;

         case 4:
            promote(student, lines);
            break;

         case 5: 
            quitProgram(student, lines);
            return 0;

         default: 
         printf("Please choose 1, 2, 3, 4, or 5.\n\n");


      }

   }while(tryAgain(student, lines));

   return 0;

}









