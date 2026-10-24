#include<iostream>
using namespace std;

//Define a class called "AboutMe"
class AboutMe{

    private:
    //Attributes
    string name;
    int age;
    string matricNumber;
    string address;

    public:
    //Constructor
    AboutMe(string name, int age, string matricNumber, string address)
    {
        this->name = name;
        this->age = age;
        this->matricNumber = matricNumber;
        this->address = address;
    }

    //Method to display information
    void displayInfo()
    {
        cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Matric Number: " << matricNumber << "\n" << "Address: " << address << endl;
    }

};

int main()
{
    //Create an object of the AboutMe class
    AboutMe person1("Nasaaie", 20, "A25CS0118", "Alor Setar,Kedah");

    //Call the method to display the information
    person1.displayInfo();

    system("pause");
    return 0;
}