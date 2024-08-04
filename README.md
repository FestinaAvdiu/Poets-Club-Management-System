# The Poets Club Management System 📚 

## Description

The Poets Club Management System is a console-based application in C language, designed to manage a database of poetry club members. It allows you to track their performance, promote members based on their participation, and perform various management tasks.

**🎉 Fun Fact:** This was my very first programming project! 

## Purpose

The primary purpose of this project is to create a tool that can:
- Access and manage a database of poetry club members.
- Keep track of their performance.
- Determine which members qualify for promotion based on their participation.
- Provide options to manage members, including adding, searching, promoting, and saving changes.

## Project Structure

The project is separated into the following files:

- **`main.c`**: Contains the main logic and user interface for the program.
- **`functions.c`**: Contains the implementation of various functions used in the program.
- **`functions.h`**: Header file that declares functions and includes necessary libraries.
- **`database.txt`**: A text file used to store member data.

## 🌟 Features

The program provides the following features:

- Check the number of members on the list.
  
- Allocate memory for the structure array.
  
- Read data from the database file into the structure array.

- Display five options to the user:

![Example Image]([https://drive.google.com/file/d/1y-Jg9iWkvmUcD46CkFr3TOmeTx9q9lHD/view?usp=sharing])


    📜 Print the list of members.
  

    ➕ Add a new club member to the list.

    🔍 Search for a member by ID.

    🌟 Promote a member.

    💾 Save all changes and quit.
    
- Allow the user to continue or quit based on their input.
  
- Only promote members who have been part of the club for at least 1.5 years and have a “Participant” role.
  
- Changes are saved to the text file only when option 5 (Save changes) is selected.

## How to Run the Program

   - Open a terminal or command prompt.
     
   - Navigate to the directory containing the source code files.
     
   - Run the following command to compile the program:
     
     ```sh
     gcc main.c functions.c -o main
     ./main
     ```
