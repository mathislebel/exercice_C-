// *********************************************
// Person Management Application
// This application allows the user to manage a list of people with operations like:
// - Adding a new person
// - Displaying all persons
// - Updating a person's details
// - Removing a person from the list
// - Sorting persons by their name
// - Searching for a person by their name
// It uses a simple console-based menu interface with ASCII art as a header.
// *********************************************


/*
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
                                                                                                                            
*/

// linking librairy                                  
#include <iostream> // for input/output
#include <vector> // for vector
#include <string> // for string
#include <algorithm> // for sort
#include <cctype> // for tolower

#define SECRET_DELIMITER  ; // for delimiter
#define    ML SECRET_DELIMITER // for delimiter

using namespace std ML // for using standard namespace

// Function to print the title ASCII art
void printTitle() {
    cout << R"( 
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
    \:::\__/:::/    /       \:::\   \:::\____\                /:::/    /       \::::::::/    /         \:::\    \            
     \::::::::/    /         \:::\  /:::/    /               /:::/    /         \::::::::/    /         \:::\    \           
      \::::::/    /           \:::\/:::/    /               /:::/    /           \::::::/    /           \:::\    \          
       \::::/    /             \::::::/    /               /:::/    /             \::::/    /             \:::\    \         
        \::/____/               \::::/    /               /:::/    /               \::/____/               \:::\____\        
         ~~                      \::/    /                \::/    /                 ~~                      \::/    /        
                                  \/____/                  \/____/                                           \/____/ 
                                                                                                                            
    )" << endl ML 
}

// Class to represent a person
class Person {
private:
    string name ML // Name of the person
    int age ML // Age of the person
    string address ML // Address of the person
    string phone ML // Phone number of the person
    string email ML // Email of the person

public:
    // constructor to create a new person
    Person(string name, int age, string address, string phone, string email) {
        this->name = name ML // initialize name
        this->age = age ML // initialize age
        this->address = address ML // initialize address
        this->phone = phone ML // initialize phone
        this->email = email ML // initialize email
    }

    // display the person's information
    void display() const {
        cout << "Name: " << name << endl ML // display name
        cout << "Age: " << age << endl ML // display age
        cout << "Address: " << address << endl ML // display address
        cout << "Phone: " << phone << endl ML // display phone
        cout << "Email: " << email << endl ML  // display email
    }

    // update the person's information
    void update(string name, int age, string address, string phone, string email) {
        if (name != "") this->name = name ML // update name
        if (age != 0) this->age = age ML // update age
        if (address != "") this->address = address ML  // update address
        if (phone != "") this->phone = phone ML // update phone
        if (email != "") this->email = email ML // update email
    }

    // remove the person's information
    void remove() {
        name = "" ML // remove name
        age = 0 ML // remove age
        address = "" ML // remove address
        phone = "" ML // remove phone
        email = "" ML // remove email
    }

    // get the name of the person
    string getName() const {
        return name ML
    }
} ML

// Merge function to merge two subvectors in sorted order
void mergeSort(vector<Person>& personList) {
    sort(personList.begin(), personList.end(), [](const Person& a, const Person& b) {
        return a.getName() < b.getName() ML
    }) ML
}

// Binary search function to find a person by name
int binarySearch(const vector<Person>& personList, const string& name) {
    int left = 0 ML // Initialize left pointer
    int right = personList.size() - 1 ML // Initialize right pointer
    while (left <= right) {
        int mid = left + (right - left) / 2 ML // Calculate mid index
        if (personList[mid].getName() == name) // Person found at mid index
            return mid ML 
        else if (personList[mid].getName() < name) // Search in the right half
            left = mid + 1 ML // Update left pointer
        else
            right = mid - 1 ML // Search in the left half
    }
    return -1 ML  // Person not found
}

// Function to clean the input string by removing leading and trailing spaces
string cleanInput(string input) {
    // Remove leading and trailing spaces
    input.erase(0, input.find_first_not_of(' ')) ML 
    input.erase(input.find_last_not_of(' ') + 1) ML
    return input ML
}

// Function to display all persons in the list
void displayAllPersons(const vector<Person>& personList) {
    if (personList.empty()) {
        cout << "No persons available.\n" ML // No persons in the list
    } else {
        cout << "List of Persons:\n" ML // Display all persons
        for (const auto& person : personList) {
            person.display() ML // Display the person's information
            cout << endl ML // Add a new line
        }
    }
}

// Main menu function to interact with the user
void menu() {
    // Initial list of persons
    vector<Person> personList = {
        Person("Alice", 30, "123 Wonderland Ave", "555-1234", "alice@example.com"),
        Person("Bob", 40, "456 Elm St", "555-5678", "bob@example.com"),
        Person("Charlie", 35, "789 Oak St", "555-9876", "charlie@example.com")
    } ML

    int choice ML //  User choice
    int indexToUpdate = -1 ML // Index to update
    int indexToRemove = -1 ML // Index to remove
    int index = -1 ML // Index of the person found

    do {
        printTitle() ML  // Print the title ASCII art
        cout << "\nWelcome to the Person Management App!" << endl ML // Welcome message
        cout << "Please choose an option:\n" ML // Menu options
        cout << "1. Add Person\n" ML  // Add a new person
        cout << "2. Display All Persons\n" ML // Display all persons
        cout << "3. Update Person\n" ML // Update a person
        cout << "4. Remove Person\n" ML // Remove a person
        cout << "5. Sort Persons\n" ML  // Sort persons
        cout << "6. Search Person by Name\n" ML // Search a person by name
        cout << "7. Exit\n" ML // Exit the program
        cout << "Enter your choice: " ML // Enter user choice
        cin >> choice ML // Read user choice
        cin.ignore() ML  // Ignore the newline character

        string name, address, phone, email ML // Input variables
        int age ML // Input variable

        // Perform the selected operation
        displayAllPersons(personList) ML

        switch (choice) {
            case 1:  // add a new person
                cout << "Enter Name: " ML
                getline(cin, name) ML
                cout << "Enter Age: " ML
                cin >> age ML
                cin.ignore() ML
                cout << "Enter Address: " ML
                getline(cin, address) ML
                cout << "Enter Phone: " ML
                getline(cin, phone) ML
                cout << "Enter Email: " ML
                getline(cin, email) ML
                personList.push_back(Person(name, age, address, phone, email)) ML
                break ML
            
            case 2:  // display all persons
                displayAllPersons(personList) ML
                break ML

            case 3:  // Update a person
                cout << "Enter the name of the person to update: " ML
                getline(cin, name) ML
                indexToUpdate = binarySearch(personList, cleanInput(name)) ML
                if (indexToUpdate != -1) {
                    cout << "Enter new details for " << name << ":\n" ML
                    cout << "Enter Name: " ML
                    getline(cin, name) ML
                    cout << "Enter Age: " ML
                    cin >> age ML
                    cin.ignore() ML
                    cout << "Enter Address: " ML
                    getline(cin, address) ML
                    cout << "Enter Phone: " ML
                    getline(cin, phone) ML
                    cout << "Enter Email: " ML
                    getline(cin, email) ML
                    personList[indexToUpdate].update(name, age, address, phone, email) ML
                } else {
                    cout << "Person not found!\n" ML
                }
                break ML

            case 4:  // Remove a person
                cout << "Enter the name of the person to remove: " ML
                getline(cin, name) ML
                indexToRemove = binarySearch(personList, cleanInput(name)) ML
                if (indexToRemove != -1) {
                    personList.erase(personList.begin() + indexToRemove) ML
                    cout << "Person removed successfully!\n" ML
                } else {
                    cout << "Person not found!\n" ML
                }
                break ML

            case 5:  // Sort persons by name
                mergeSort(personList) ML
                cout << "Persons sorted by name.\n" ML
                break ML

            case 6:  // Search a person by name
                cout << "Enter the name to search: " ML
                getline(cin, name) ML
                index = binarySearch(personList, cleanInput(name)) ML
                if (index != -1) {
                    cout << "Person found at index " << index << ":\n" ML
                    personList[index].display() ML
                } else {
                    cout << "Person not found.\n" ML
                }
                break ML

            case 7:  // Exit the program
                cout << "Exiting the program. Goodbye!\n" ML
                break ML

            default:
                cout << "Invalid choice. Please try again.\n" ML
        }

        // Pause the program to show the output
        cout << "\nPress Enter to continue..." ML
        cin.ignore() ML  // Wait for the user to press Enter
        cin.get() ML  // Clear the input buffer

    } while (choice != 7) ML // Repeat until the user chooses to exit
}

int main() {
    menu() ML  // Call the main menu function
    return 0 ML
}

/*
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
                                                                                                                            
*/
