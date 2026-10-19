#include<iostream>
using namespace std;

//Define a simple class called "Stundent"
class Student{
    private:
    string name;
    int age;

    public:
    //Default constructor
    Student() : name("Unknown"), age(0) {}

    //Parameterized constructor 
    Student(string n, int a) : name(n), age(a) {}

    //Method to display student information
    void displayInfo() const{
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    //Method to set student details
    void setDetails(string n, int a)
    {
        name = n;
        age = a;
    }
};

//Function to display information of an array 
void displayStudents(const Student* students, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << "Student " << i + 1 << ": ";
        students[i].displayInfo();
    }
}

int main()
{
    //Create an array of 3 Student objects
    Student students[3] = 
    {
        Student("Upin", 20),
        Student("Mei Mei", 22),
        Student("Jarjit", 19)
    };


    // Pointer to the array of students
    Student* ptr = students;

    //Iterate through the array using the pointer
    for(int i = 0; i < 3; ++i)
    {
        cout << "Student " << i + 1 << ": ";
        ptr->displayInfo(); //Using pointer to call the method
        ptr++; // Move pointer to the next object in the array
    }

    //Reset pointer back to the beginning of the array
    ptr = students;

    //Modify teh details of the first student using the pointer
    ptr->setDetails("Mail", 21);

    //Display all students again to show the change
    cout << "\nAfter modifying the first student's details: \n";
    displayStudents(students, 3); //Using the new function to display students

    system("pause");
    return 0;
}