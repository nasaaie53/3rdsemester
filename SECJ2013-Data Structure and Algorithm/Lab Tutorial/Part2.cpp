#include<iostream>
using namespace std;

//Define a simple class called "Car"
class Car{

    private:
    string model;
    int year;

    public:
    //Constructor
    Car(string model, int year) : model(model), year(year) {}

    //Methode to display car information
    void displayInfo() const{
        cout << "Model: " << model << ", Year: " << year << endl;
    }

    //Method to set a new year
    void setYear(int newYear)
    {
        year = newYear;
    }
};

//Function that takes a Car object by value
void showCarByValue(Car car)
{
    cout << "Pass by Value: " << endl;
    car.displayInfo(); // Displays the info of  the copied object
    car.setYear(2022); // Modifies only the copied object
    car.displayInfo(); // Shows the change in the local copy
}

//Function that takes a Car object by reference
void showCarByReference(Car &car)
{
    cout << "Pass by Reference: " << endl;
    car.displayInfo(); // Displays the info of the original object
    car.setYear(2023); //Modifies the original object
    car.displayInfo(); //Shows the change in the original object
}

//Function that takes a Car object by constant reference
void showCarByConstReference(const Car &car)
{
    cout << "Pass by Const Reference: " << endl;
    car.displayInfo(); // Display the info of the original object
    // car.setYear(2024;); // Uncommenting this line will cause a compilation error (const prevents modification) 
}

int main()
{
    // Create a car object
    Car car1("Toyota", 2020);

    //Pass by Value
    showCarByValue(car1);
    cout << "Original after pass by value: ";
    car1.displayInfo(); // Original object remains unchanged

    //Pass by reference
    showCarByReference(car1);
    cout << "Original after pass by reference: "; // Original object is modified
    car1.displayInfo();

    //Pass by const reference
    showCarByConstReference(car1);
    cout << "Original after pass by const reference: ";
    car1.displayInfo(); // Original object remains unchanged

    system("pause");
    return 0;
}

















