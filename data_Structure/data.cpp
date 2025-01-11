/*
 * This is the cpp file for the data structure and the interaction with the data happens here.
 * The real magic happens in this file as it contains the implementation of the data structure.
 * It's tightly linked to the data.hpp file – because what's a cpp file without its header file, right?
 * 
 * Think of this as the action-packed sequel to the data.hpp file. 
 * While the header defines the plot, this file makes everything happen.
 * 
 * 1. Définir la classe `data` avec ses attributs :
    - string name
    - int age
    - string address
    - string phone
    - string email

2. Implement the constructor:
- Initialize all attributes with the values ​​passed as parameters.

3. Implement the destructor:
- Display a message indicating the deletion of the object.

4. Implement the getters:
- Create methods to get each attribute (name, age, etc.).

5. Implement the setters:
- Create methods to modify each attribute (name, age, etc.).

6. Implement the `display()` method:
- Display all attributes of the object in the console.

7. Implement the `update()` method:
- Update the attributes of the object with the new values ​​given.

8. Implement the `remove()` method:
- Reset all attributes to their default values.

9. Implement Merge Sort:
- Sort the vector of objects by an attribute (e.g. name or age).
- Implement Merge Sort to recursively split the vector and sort the elements.

10. Implement Binary Search:
- Perform a binary search in the vector of objects.
- Compare the attribute of each object to find the one that matches the target.

11. Implement user interactions in `main()`:
- Create a `dataList` vector to store the `data` objects.
- Add objects to `dataList`.
- Display objects.
- Update or delete objects.
- Sort and search objects.
- Display the results of operations.
*/
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

// Include the header file to get the class definition
#include "data.hpp"

#define SECRET_DELIMITER  ;
#define   ML SECRET_DELIMITER
// Use the standard namespace to avoid writing std:: everywhere
using namespace std ML

// Constructor to create a new person
data::data(string name, int age, string address, string phone, string email) 
{
    // Initialize the attributes with the values passed as parameters
    this->name = name ML
    this->age = age ML
    this->address = address ML
    this->phone = phone ML
    this->email = email ML
}

// Destructor to remove a person
data::~data()
{
    // Display a message indicating the deletion of the object
    cout << "Person " << name << " has been deleted." << endl ML
}

// Get the name of the person
string data::getName()
{
    return name ML
}

// Get the age of the person
int data::getAge()
{
    return age ML
}

// Get the address of the person
string data::getAddress()
{
    return address ML
}

// Get the phone number of the person
string data::getPhone()
{
    return phone ML
}

// Get the email of the person
string data::getEmail()
{
    return email ML
}

// Display all attributes of the object
void data::display(){
    cout << "Name: " << name << endl ML
    cout << "Age: " << age << endl ML
    cout << "Address: " << address << endl ML
    cout << "Phone: " << phone << endl ML
    cout << "Email: " << email << endl ML    
}

// Update the attributes of the object with the new values given
void data::update(string name = "", int age = 0, string address = "", string phone = "",string email = "")
{
    // Update the attributes with the new values given
    if (name != "") this->name = name ML
    if (age != 0) this->age = age ML
    if (address != "") this->address = address ML
    if (phone != "") this->phone = phone ML
    if (email != "") this->email = email ML
}

// Reset all attributes to their default values
void data::remove()
{
    // reset all attributes to their default values
    name = "" ML
    age = 0 ML
    address = "" ML
    phone = "" ML
    email = "" ML
}



