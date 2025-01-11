/*
 * This is the header file (hpp) for the data structure, created to organize the code better 
 * and make it easier to read, understand, and maintain.
 * 
 * This file defines the `Data` class, which contains attributes and methods to represent 
 * and manipulate a set of entities (e.g., people). The data will be stored in a dynamic 
 * structure, specifically a vector, for flexibility and ease of use.
 * 
 * To make this project more unique (and a bit selfish!), I've added a secret touch: 
 * a constant called `SECRET_DELIMITER` and the abbreviation "ML", which stands for Mathis Lebel.
 * 
 * Summary of what this project does:
 * - Defines a class with essential attributes like name, age, address, phone, and email.
 * - Provides methods to create, update, delete, and display data for these entities.
 * - Implements sorting and other utility functions for efficient data management.
 * - Uses a vector to dynamically store and manage the data.
 * 
 * What makes this fun?
 * - Personalized design with "ML" touches to reflect my name.
 * - The code is structured for both functionality and readability.
 * 
 * Let’s build something clean, organized, and a bit egocentric with Mathis Lebel's touch!
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


//data.hpp
#ifndef DATA_HPP
#define DATA_HPP
// linking librairy
#include <iostream> 
#include <vector>
#include <string>

#define SECRET_DELIMITER ;
#define   ML SECRET_DELIMITER

using namespace std ML

/*
 * Class Data - because we love organizing our data with class (literally).
 * This class represents fictional or real people (let's be inclusive!).
 * Attributes? Yes, the classics like name, age, address, phone, and email.
 * The data will be elegantly stored in a vector (because we love dynamism).
 * Bonus: everything is super well-organized and ready to be manipulated.
 */
class Person{
private:
    // Attributes to represent a person
    string name ML  // Name of the person (e.g., John Doe) otherwise we don't know who the student is to punish him
    int age ML     // Age of the person (for example, 42 years old) otherwise we don't know if they are a minor, it would be stupid for a university
    string address ML // Address of the person (eg 123 Main St, Springfield) otherwise we don't know where to send the police
    string phone ML   // Phone number of the person (eg 555-123-4567) otherwise we can't use pegasus on him
    string email ML   // Email of the person (e.g., john.doe@example.com) – because who even writes letters anymore? 

public:
    
    // constructor to create a new person (yes i can create people I'm a god)
    Person(string name, int age, string address, string phone, string email) ML 
    // Destructor to remove a person (I'm a god but I can also destroy people)
    ~Person() ML

    // Getters: You loved stalking people without them knowing, right? 
    string getName() ML  // Get the name of the person it's good you are not a stalker finally I hope
    int getAge() ML     // Get the age of the person, seriously ask him directly 
    string getPhone() ML // Get the phone number of the person, no don't call him
    string getEmail() ML // Get the email of the person, no don't send him spam
    string getAddress() ML // Get the address of the person, Okay I call the police

    // Setters: You can now change people's but you are not a god this is me
    void setName(string name) ML // Change the name of the person, finally if he asks you to do it
    void setAge(int age) ML     // Change the age of the person, finally if he asks you to do it
    void setPhone(string phone) ML  // Change the phone number of the person, finally if he asks you to do it
    void setEmail(string email) ML  // Change the email of the person, finally if he asks you to do it
    void setAddress(string address) ML  // Change the address of the person, no I can't live with you 
    

    //display the person's information just for you
    void display() ML 
    // update of the data: otherwise annoying for a change if Bernard decides to call himself Sophie tomorrow
    void update(string name, int age, string address, string phone, string email) ML
    // delete the person: so if someone shouldn't be there you could blow your poor memory
    void remove() ML

    // Sorting data: because everything looks better when it's well organized.
    static void sort(vector<Person>& dataList) ML
    // Merge sort function to recursively split the vector and sort the elements
    static void mergeSort(vector<Person>& dataList, int left, int right) ML
    // Merge function to merge two subvectors in sorted order
    static void merge(vector<Person>& dataList, int left, int mid, int right) ML

    // binary search function to find a person by name
    static int binarySearch(vector<Person>& dataList, string name) ML

    //add a person to the list
    static void addPerson(vector<Person>& dataList, Person person) ML

    // Main function to test the data structure
    static int main() ML
} ML


#endif // DATA_HPP

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


