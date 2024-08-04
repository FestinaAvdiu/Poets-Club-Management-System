//////////////////// THE HEADER FILE ///////////////////

///////// DECLARE THE STRUCTURE ARRAY /////////

typedef struct Members{
    int number;
    char fname[40];
    char lname[40];
    char email[40];
    int class;
    float years;
    char role[40];

}member;


///////// DECLARE THE FUNCTIONS (PROTOYPES) /////////

int options(); 
void list(member *stud, int length);
int addMember(member **stud, int *length);
void searchByID(member *stud, int length);
void quitProgram(member *stud, int length);
int tryAgain(member *stud, int length);
void promote(member *stud, int length);

