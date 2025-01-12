```plaintext
        _______                   _____                    _____                   _______                   _____          
        /::\    \                 /\    \                  /\    \                 /::\    \                 /\    \         
       /::::\    \               /::\    \                /::\____\               /::::\    \               /::\    \        
      /::::::\    \             /::::\    \              /::::|   |              /::::::\    \              \:::\    \       
     /::::::::\    \           /::::::\    \            /:::::|   |             /::::::::\    \              \:::\    \      
    /:::/~~\:::\    \         /:::/\:::\    \          /::::::|   |            /:::/~~\:::\    \              \:::\    \     
   /:::/    \:::\    \       /:::/__\:::\    \        /:::/|::|   |           /:::/    \:::\    \              \:::\    \    
  /:::/    / \:::\    \      \:::\   \:::\    \      /:::/ |::|   |          /:::/    / \:::\    \              \:::\    \   
 /:::/____/   \:::\____\   ___\:::\   \:::\    \    /:::/  |::|___|______   /:::/____/   \:::\____\              \:::\    \  
|:::|    |     |:::|    | /\   \:::\   \:::\    \  /:::/   |::::::::\    \ |:::|    |     |:::|    |              \:::\    \ 
|:::|____|     |:::|    |/::\   \:::\   \:::\____\/:::/    |:::::::::\____\|:::|____|     |:::|    |_______________\:::\____\
 \:::\    \   /:::/    / \:::\   \:::\   \::/    /\::/    / ~~~~~/:::/    / \:::\    \   /:::/    / \::::::::::::::::::/    /
  \:::\    \ /:::/    /   \:::\   \:::\   \/____/  \/____/      /:::/    /   \:::\    \ /:::/    /   \::::::::::::::::/____/ 
   \:::\    /:::/    /     \:::\   \:::\    \                  /:::/    /     \:::\    /:::/    /     \:::\~~~~\~~~~~~       
    \:::\__/:::/    /       \:::\   \:::\____\                /:::/    /       \:::\__/:::/    /       \:::\    \            
     \::::::::/    /         \:::\  /:::/    /               /:::/    /         \::::::::/    /         \:::\    \           
      \::::::/    /           \:::\/:::/    /               /:::/    /           \::::::/    /           \:::\    \          
       \::::/    /             \::::::/    /               /:::/    /             \::::/    /             \:::\    \         
        \::/____/               \::::/    /               /:::/    /               \::/____/               \:::\____\        
         ~~                      \::/    /                \::/    /                 ~~                      \::/    /        
                                  \/____/                  \/____/                                           \/____/         
```



# Person Management Application

## Description

The **Person Management Application** is a console-based tool designed to manage a list of people. Users can:

- **Add new persons** to the list.
- **Display all persons** in the list.
- **Update person details** (name, age, address, phone, and email).
- **Remove a person** from the list.
- **Sort persons** alphabetically by their name.
- **Search for a person** by their name.

This application allows for easy management of a collection of people, with an interactive menu-driven interface. It uses basic data structures and algorithms, such as vectors and sorting.

## Features

1. **Add Person**: Lets the user add a new person with their details (name, age, address, phone, and email).
2. **Display All Persons**: Shows a list of all persons in the current database.
3. **Update Person**: Allows the user to update the details of a specific person.
4. **Remove Person**: Removes a person from the database.
5. **Sort Persons**: Sorts all the persons by their name in ascending order.
6. **Search Person by Name**: Searches for a person by their name and returns the details.

## Requirements

- **C++ compiler**: Ensure you have a C++ compiler that supports C++11 or later (e.g., GCC, Clang, Visual Studio).
- **Standard C++ libraries**: The code uses the following libraries:
  - `<iostream>` for input and output operations.
  - `<vector>` for dynamic arrays to store people.
  - `<string>` for handling text data.
  - `<algorithm>` for sorting functions.
  - `<cctype>` for character manipulation (though not utilized heavily in this version).

## Installation

1. **Clone the repository** (or copy the files):
   ```bash
   git clone https://github.com/yourusername/person-management.git
2. **Open in the visual studio code**

3. **Open a new ternimal in visual studio code**

     **Navigate to the project directory:**
    ```bash
    cd data_structure
    ```
    **Compile the C++ source code:**
    ```bash
    g++ -std=c++11 -o data data.cpp
    ```
    **Run the application:**
    ```bash
   ./person_manager
    ```

## How to Use

When you run the application, you will be greeted with an ASCII art title and an interactive menu. Each option corresponds to a specific functionality:

### Menu Options:
**Add Person:**
You will be prompted to enter the name, age, address, phone number, and email of the new person.

**Display All Persons:**
Displays all the persons in the list with their respective details.

**Update Person:**
Search for a person by name. If found, you can update their details.

**Remove Person:**
Search for a person by name. If found, you can remove them from the list.

**Sort Persons:**
Sorts all the persons alphabetically by their name.
Search Person by Name:
Search for a person by name and view their details if found.

**Exit:**
Exits the application.


## Example Run:
```plaintext
        _______                   _____                    _____                   _______                   _____          
        /::\    \                 /\    \                  /\    \                 /::\    \                 /\    \         
       /::::\    \               /::\    \                /::\____\               /::::\    \               /::\    \        
      /::::::\    \             /::::\    \              /::::|   |              /::::::\    \              \:::\    \       
     /::::::::\    \           /::::::\    \            /:::::|   |             /::::::::\    \              \:::\    \      
    /:::/~~\:::\    \         /:::/\:::\    \          /::::::|   |            /:::/~~\:::\    \              \:::\    \     
   /:::/    \:::\    \       /:::/__\:::\    \        /:::/|::|   |           /:::/    \:::\    \              \:::\    \    
  /:::/    / \:::\    \      \:::\   \:::\    \      /:::/ |::|   |          /:::/    / \:::\    \              \:::\    \   
 /:::/____/   \:::\____\   ___\:::\   \:::\    \    /:::/  |::|___|______   /:::/____/   \:::\____\              \:::\    \  
|:::|    |     |:::|    | /\   \:::\   \:::\    \  /:::/   |::::::::\    \ |:::|    |     |:::|    |              \:::\    \ 
|:::|____|     |:::|    |/::\   \:::\   \:::\____\/:::/    |:::::::::\____\|:::|____|     |:::|    |_______________\:::\____\
 \:::\    \   /:::/    / \:::\   \:::\   \::/    /\::/    / ~~~~~/:::/    / \:::\    \   /:::/    / \::::::::::::::::::/    /
  \:::\    \ /:::/    /   \:::\   \:::\   \/____/  \/____/      /:::/    /   \:::\    \ /:::/    /   \::::::::::::::::/____/ 
   \:::\    /:::/    /     \:::\   \:::\    \                  /:::/    /     \:::\    /:::/    /     \:::\~~~~\~~~~~~       
    \:::\__/:::/    /       \:::\   \:::\____\                /:::/    /       \:::\__/:::/    /       \:::\    \            
     \::::::::/    /         \:::\  /:::/    /               /:::/    /         \::::::::/    /         \:::\    \           
      \::::::/    /           \:::\/:::/    /               /:::/    /           \::::::/    /           \:::\    \          
       \::::/    /             \::::::/    /               /:::/    /             \::::/    /             \:::\    \         
        \::/____/               \::::/    /               /:::/    /               \::/____/               \:::\____\        
         ~~                      \::/    /                \::/    /                 ~~                      \::/    /        
                                  \/____/                  \/____/                                           \/____/         
  Welcome to the Person Management App!
Please choose an option:
1. Add Person
2. Display All Persons
3. Update Person
4. Remove Person
5. Sort Persons
6. Search Person by Name
7. Exit

Enter your choice: 1
Enter Name: John Doe
Enter Age: 25
Enter Address: 123 Main Street
Enter Phone: 555-1234
Enter Email: johndoe@example.com

Person added successfully!

```

# Person Management System

## Additional Notes
The program will continue to loop and prompt you for actions until you choose to Exit.
The search, update, and remove operations depend on a binary search algorithm, which requires that the list of persons be sorted. If unsorted, the operations may not work as expected.
The list is maintained as a vector of `Person` objects.

## Code Overview

### Person Class:
- **Attributes:**
  - `name`: Represents the name of the person.
  - `age`: Represents the age of the person.
  - `address`: Represents the address of the person.
  - `phone`: Represents the phone number of the person.
  - `email`: Represents the email address of the person.

- **Methods:**
  - `display()`: Prints the details of a person.
  - `update()`: Allows updating a person's details.
  - `remove()`: Resets the person's attributes to default values.
  - `getName()`: Returns the name of the person, useful for search and sorting.

### Functions:
- `mergeSort()`: Sorts the list of persons by name using the C++ Standard Library’s `sort()` function.
- `binarySearch()`: Implements binary search to find a person by name efficiently.
- `cleanInput()`: Removes leading and trailing spaces from user input.
- `displayAllPersons()`: Displays all the persons in the list.
- `menu()`: Displays the main menu and handles user input to perform operations.

## Example Structure

```bash
src/
├── main.cpp          # Main program file containing the logic
├── Person.h          # Header file for the Person class
└── README.md         # This file

```

# License

This project is open-source and free to use. Feel free to fork, modify, and contribute.

Feel free to customize the instructions or details specific to your repository, such as adjusting the username for your GitHub repo or adding further details to the setup process.

```plaintext
        _______                   _____                    _____                   _______                   _____          
        /::\    \                 /\    \                  /\    \                 /::\    \                 /\    \         
       /::::\    \               /::\    \                /::\____\               /::::\    \               /::\    \        
      /::::::\    \             /::::\    \              /::::|   |              /::::::\    \              \:::\    \       
     /::::::::\    \           /::::::\    \            /:::::|   |             /::::::::\    \              \:::\    \      
    /:::/~~\:::\    \         /:::/\:::\    \          /::::::|   |            /:::/~~\:::\    \              \:::\    \     
   /:::/    \:::\    \       /:::/__\:::\    \        /:::/|::|   |           /:::/    \:::\    \              \:::\    \    
  /:::/    / \:::\    \      \:::\   \:::\    \      /:::/ |::|   |          /:::/    / \:::\    \              \:::\    \   
 /:::/____/   \:::\____\   ___\:::\   \:::\    \    /:::/  |::|___|______   /:::/____/   \:::\____\              \:::\    \  
|:::|    |     |:::|    | /\   \:::\   \:::\    \  /:::/   |::::::::\    \ |:::|    |     |:::|    |              \:::\    \ 
|:::|____|     |:::|    |/::\   \:::\   \:::\____\/:::/    |:::::::::\____\|:::|____|     |:::|    |_______________\:::\____\
 \:::\    \   /:::/    / \:::\   \:::\   \::/    /\::/    / ~~~~~/:::/    / \:::\    \   /:::/    / \::::::::::::::::::/    /
  \:::\    \ /:::/    /   \:::\   \:::\   \/____/  \/____/      /:::/    /   \:::\    \ /:::/    /   \::::::::::::::::/____/ 
   \:::\    /:::/    /     \:::\   \:::\    \                  /:::/    /     \:::\    /:::/    /     \:::\~~~~\~~~~~~       
    \:::\__/:::/    /       \:::\   \:::\____\                /:::/    /       \:::\__/:::/    /       \:::\    \            
     \::::::::/    /         \:::\  /:::/    /               /:::/    /         \::::::::/    /         \:::\    \           
      \::::::/    /           \:::\/:::/    /               /:::/    /           \::::::/    /           \:::\    \          
       \::::/    /             \::::::/    /               /:::/    /             \::::/    /             \:::\    \         
        \::/____/               \::::/    /               /:::/    /               \::/____/               \:::\____\        
         ~~                      \::/    /                \::/    /                 ~~                      \::/    /        
                                  \/____/                  \/____/                                           \/____/         
```


