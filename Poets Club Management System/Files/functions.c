#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"functions.h" 

/////////////// DEFINE THE FUNCTIONS ////////////

int options(){

    int option;

    printf("\n\nChoose one of the options: \n\n");
    printf("\t\t1: PRINT THE POETRY CLUB MEMBERS LIST\n\n");
    printf("\t\t2: ADD A NEW MEMBER TO THE LIST\n\n");
    printf("\t\t3: SEARCH FOR A MEMBER BY ID\n\n");
    printf("\t\t4: PROMOTE A MEMBER\n\n");
    printf("\t\t5: SAVE CHANGES & QUIT\n\n");

    printf("Option: ");

    scanf("%d", &option);

    printf("\n");

    return option;

}


void list(member *stud, int length){

    for(int i = 0; i < length; i++){
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);

    }

}

int addMember(member **stud, int *length){

    if(!(*stud = (member *)realloc(*stud, ++(*length)*sizeof(member))))
	{ 
	 printf("ERROR: there is no memory enough\n");

     return 0;
	}

    printf("ID: \t");
    scanf("%d", &(*stud)[*length-1].number);
    printf("Name: \t");
    scanf("%s", (*stud)[*length-1].fname);
    printf("Surname: ");
    scanf("%s", (*stud)[*length-1].lname);
    printf("Email: \t");
    scanf("%s", (*stud)[*length-1].email);
    printf("Class: \t");
    scanf("%d", &(*stud)[*length-1].class);
    printf("Years: \t");
    scanf("%f", &(*stud)[*length-1].years);
    printf("Role: \t");
    scanf("%s", (*stud)[*length-1].role);


}


void searchByID(member *stud, int length){
    int found = 0;

    FILE *file;

    int number;
    printf("Enter ID Number to Search:\n");
    scanf("%d", &number);

    file = fopen("database.txt", "r");

    for(int i = 0; i < length; i++) {
        fscanf(file, "%d%s%s%s%d%f%s", &stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, &stud[i].class, &stud[i].years, stud[i].role);
 
        if(stud[i].number == number){
            found = 1;
            printf("\nFound it!");
            printf("\n\n%d\t\t%s %s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);

        }
    }

    if(found != 1){
        printf("\n\nCouldn't find the member!\n\n"); 
    }

    fclose(file);

}


int tryAgain(member *stud, int length){

    char again; 
    printf("\n\nDo you want to try another option? (y/n) \n"); 
    scanf(" %c", &again);
    printf("\n");
    if(again == 'y'){ 
        return 1;
    
    } else { 
        printf("The program exits. Bye!\n\n");
        return 0; 
    }
}


void quitProgram(member *stud, int length){

   // SAVING THE CHANGES //
    FILE *file;

    file = fopen("database.txt", "w");

    for(int i = 0; i < length; i++)
    {
      fprintf(file, "%d\t\t%s %s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);

    }

    fflush(file);
    fclose(file);

    free(stud);

    printf("\nChanges are saved into the file. Bye!\n\n");

}

void promote(member *stud, int length){
    
    int found = 0;

    FILE *file;

    float years = 1.50;
    char role[] = "Participant";

    printf("\n\nLet's see if any member meets the requirements for a promotion!\n\n");


    file = fopen("database.txt", "r");

    for(int i = 0; i < length; i++){

        fscanf(file, "%d%s%s%s%d%f%s", &stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, &stud[i].class, &stud[i].years, stud[i].role);
 
        if(years <= stud[i].years){
            if((strcmp(role, stud[i].role)) == 0){
                printf("\n\n%d\t\t%s %s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);
                found++;
            }
        }

    }



    if(found >= 1){
        char name[40];
        printf("\n\nThese are the members found!\n\n");
        printf("Which one do you want to promote? (write the student's name)\n\n");
        scanf("%s", name); 

        FILE *newFile; 
        newFile = fopen("newFile.txt", "w");
        char newRole[40];

        for(int i = 0; i < length; i++){

            fscanf(file, "%d%s%s%s%d%f%s", &stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, &stud[i].class, &stud[i].years, stud[i].role);
 
            if((strcmp(name, stud[i].fname)) == 0){

                printf("Enter New Role: ");
                scanf("%s", stud[i].role);
                    

            }   

            fprintf(newFile, "%d\t\t%s %s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);
                
        }

        fclose(file);
        fclose(newFile);

        file = fopen("database.txt", "w");
        newFile = fopen("newFile.txt", "r");

        for(int i = 0; i < length; i++){
            fscanf(newFile, "%d%s%s%s%d%f%s", &stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, &stud[i].class, &stud[i].years, stud[i].role);
            fprintf(file, "%d\t\t%s %s\t\t%s\t\t%d\t\t%.2f\t\t%s\n", stud[i].number, stud[i].fname, stud[i].lname, stud[i].email, stud[i].class, stud[i].years, stud[i].role);
            
        }

        fclose(file);
        fclose(newFile);
        remove("newFile.txt");

        printf("\n\nPromotion done successfully!\n\n");

        
    }

    if(found < 1){
        printf("\n\nCouldn't find any!\n\n"); 
    }

}