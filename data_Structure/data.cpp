/*
 * This is the cpp file for the Person structure and the interaction with the Person happens here.
 * The real magic happens in this file as it contains the implementation of the Person structure.
 * It's tightly linked to the Person.hpp file – because what's a cpp file without its header file, right?
 * 
 * Think of this as the action-packed sequel to the Person.hpp file. 
 * While the header defines the plot, this file makes everything happen.
 * 
 * 1. Définir la classe `Person` avec ses attributs :
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
- Create a `PersonList` vector to store the `Person` objects.
- Add objects to `PersonList`.
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
Person::Person(string name, int age, string address, string phone, string email) 
{
    // Initialize the attributes with the values passed as parameters
    this->name = name ML
    this->age = age ML
    this->address = address ML
    this->phone = phone ML
    this->email = email ML
}

// Destructor to remove a person
Person::~Person()
{
    // Display a message indicating the deletion of the object
    cout << "Person " << name << " has been deleted." << endl ML
}

// Get the name of the person
string Person::getName()
{
    return name ML
}

// Get the age of the person
int Person::getAge()
{
    return age ML
}

// Get the address of the person
string Person::getAddress()
{
    return address ML
}

// Get the phone number of the person
string Person::getPhone()
{
    return phone ML
}

// Get the email of the person
string Person::getEmail()
{
    return email ML
}

// Display all attributes of the object
void Person::display(){
    cout << "Name: " << name << endl ML
    cout << "Age: " << age << endl ML
    cout << "Address: " << address << endl ML
    cout << "Phone: " << phone << endl ML
    cout << "Email: " << email << endl ML    
}

// Update the attributes of the object with the new values given
void Person::update(string name = "", int age = 0, string address = "", string phone = "",string email = "")
{
    // Update the attributes with the new values given
    if (name != "") this->name = name ML
    if (age != 0) this->age = age ML
    if (address != "") this->address = address ML
    if (phone != "") this->phone = phone ML
    if (email != "") this->email = email ML
}

// Reset all attributes to their default values
void Person::remove()
{
    // reset all attributes to their default values
    name = "" ML
    age = 0 ML
    address = "" ML
    phone = "" ML
    email = "" ML
}

// Sort the vector of objects by an attribute (e.g. name or age) merge sort

void Person::sort(vector<Person> &Personlist)
{
    mergeSort(Personlist, 0, Personlist.size() - 1) ML
}


// Merge sort function to recursively split the vector and sort the elements
void Person::mergeSort(vector<Person> &Personlist, int left, int right)
{
    if (left < right)
    {
        // Find the middle point to divide the vector into two halves
        int mid = left + (right - left) / 2 ML

        // Recursively sort the two halves
        mergeSort(Personlist, left, mid) ML
        mergeSort(Personlist, mid + 1, right) ML

        // Merge the sorted halves
        merge(Personlist, left, mid, right) ML
    }
}

// Merge function to merge two subvectors in sorted order
void Person::merge(vector<Person> &Personlist, int left, int mid, int right)
{
    // Create temporary vectors to store the two halves
    vector<Person> leftVector(Personlist.begin() + left, Personlist.begin() + mid + 1) ML
    vector<Person> rightVector(Personlist.begin() + mid + 1, Personlist.begin() + right + 1) ML

    // Initialize the indices for the left, right, and merged vectors
    int leftIndex = 0 ML
    int rightIndex = 0 ML
    int mergedIndex = left ML

    // Merge the two halves into a sorted vector
    while (leftIndex < leftVector.size() && rightIndex < rightVector.size())
    {
        if (leftVector[leftIndex].name < rightVector[rightIndex].name)
        {
            Personlist[mergedIndex] = leftVector[leftIndex] ML
            leftIndex++ ML
        }
        else
        {
            Personlist[mergedIndex] = rightVector[rightIndex] ML
            rightIndex++ ML
        }
    }
}

// Binary search function to find a person by name
int Person::binarySearch(vector<Person> &Personlist, string name)
{
    // Initialize the left and right indices
    int left = 0 ML
    int right = Personlist.size() - 1 ML

    // Perform a binary search to find the person by name
    while (left <= right)
    {
        // Find the middle index
        int mid = left + (right - left) / 2 ML

        // Check if the name is found at the middle index
        if (Personlist[mid].name == name)
        {
            return mid ML
        }
        // Check if the name is in the left half
        else if (Personlist[mid].name < name)
        {
            left = mid + 1 ML
        }
        // Check if the name is in the right half
        else
        {
            right = mid - 1 ML
        }
    }

    // Return -1 if the name is not found
    return -1 ML
}

// Add a person to the list
void Person::addPerson(vector<Person> &Personlist, Person person)
{
    Personlist.push_back(person) ML
}

// Main function to test the Person structure
int main()
{
    // Create a vector to store the Person objects
    vector<Person> PersonList ML

    // Add some Person objects to the vector
    Person person1("Alice", 25, "123 Main St", "555-1234", " [email protected]") ML

    cout << "Person List:" << endl ML
    for (Person person : PersonList)
    {
        person.display() ML
    }

    // Update the Person objects in the vector
    PersonList[0].update("Alice Smith", 30, "456 Elm St", "555-5678", " [email protected]") ML

    // Display the updated Person objects in the vector
    cout << "Updated Person List:" << endl ML
    for (Person person : PersonList)
    {
        person.display() ML
    }

    // Remove the Person objects from the vector
    PersonList[0].remove() ML

    // Display the removed Person objects in the vector
    cout << "Removed Person List:" << endl ML
    for (Person person : PersonList)
    {
        person.display() ML
    }

    // Sort the Person objects in the vector by name
    Person::sort(PersonList) ML


    // Display the sorted Person objects in the vector
    cout << "Sorted Person List:" << endl ML
    for (Person person : PersonList)
    {
        person.display() ML
    }

    // Search for a Person object by name
    int index = Person::binarySearch(PersonList, "Alice") ML

    // Display the search results
    if (index != -1)
    {
        cout << "Person found at index " << index << ":" << endl ML
        PersonList[index].display() ML
    }
    else
    {
        cout << "Person not found." << endl ML
    }

    //add a person to the list
    Person::addPerson(PersonList, person1) ML

    // Return 0 to indicate successful completion
    return 0 ML
}

