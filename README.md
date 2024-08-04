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

    📜 Print the list of members.

    ➕ Add a new club member to the list.

    🔍 Search for a member by ID.

    🌟 Promote a member.

    💾 Save all changes and quit.
    
- Allow the user to continue or quit based on their input.
  
- Only promote members who have been part of the club for at least 1.5 years and have a “Participant” role.
  
- Changes are saved to the text file only when option 5 (Save changes) is selected.

## Here’s how the program looks in action:

Options offered to the user:

![Example Image 1](https://drive.google.com/uc?export=view&id=1y-Jg9iWkvmUcD46CkFr3TOmeTx9q9lHD)

If 1st option chosen: 

![Example Image 2](https://drive.google.com/uc?export=view&id=1HEALozX75CV7Mll5jOmw4EWUaPbxos4F)

If 2nd option chosen: 

![Example Image 3](https://drive.google.com/uc?export=view&id=1vb8CfOxyldPkGBukFjxRRpYroLgIwIBo)

Saving the newly added member's data (using option 5):

![Example Image](https://drive.google.com/uc?export=view&id=1SdlxW56SfAv04PGatElsEl266zElFq78)


The updated database:

![Example Image](https://drive.google.com/uc?export=view&id=1BwczQG5BX611YMf5CJ6vX_nFAd165-T-)


If 3rd option chosen: 

![Example Image](https://drive.google.com/uc?export=view&id=1syzz0g_vyJJNxYbxk25BSLQ-0623f3y6)

Member Found vs Member Not Found: 

![Example Image](https://drive.google.com/uc?export=view&id=1Ehp-gxmRHc1OnS_OBXAhFp1fJw7Fu5ni)

![Example Image](https://drive.google.com/uc?export=view&id=1YJYXbGOD84AAtpGnYBrWr-Lb5q4ASmMz) 


If 4th option chosen:

![Example Image](https://drive.google.com/uc?export=view&id=1Lt69mGRXLaj34scBVVtYzaypr2JN8-A8)
![Example Image](https://drive.google.com/uc?export=view&id=1nXVx8b3mhxcwbg7sldQIo-5EV0wwA4oc)

The updated database with the new promotion:

![Example Image](https://drive.google.com/uc?export=view&id=19NUQCW3vvopx_GNZQwfd0VYrPUCfUdwb)
