#include<iostream>
#include<string>
using namespace std;


class Vehicle{

    protected:
    string brand;
    int year;

    public:
    Vehicle(string b, int y)
    {
        brand = b;
        year = y;
    }

    virtual void displaydetails()
    {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;

    }

    virtual double calculateTax() = 0;



};

class Car : public Vehicle {

    private:
    int numDoors;

    public:
    Car(string b, int y, int doors) : Vehicle(b, y)
    {
        numDoors = doors;
    }

    void displaydetails()
    {
        cout << "Car Details: " << endl;
        Vehicle::displaydetails();
        cout << "Number of Doors " << numDoors << endl;
        cout << "Tax: MYR" << calculateTax() << endl;

    }

    double calculateTax()
    {
        return 100.0 + (numDoors * 50.0);
    }
    

};


class Motorcycle : public Vehicle{

    private:
    string type;

    public:
    Motorcycle(string b, int y, string t) : Vehicle(b, y)
    {
        type = t;
    }

    void displaydetails()
    {
        cout << "Motorcycle Details: " << endl;
        Vehicle::displaydetails();
        cout << "Type: " << type << endl;
        cout << "Tax: MYR " << calculateTax() << endl;

    }

    double calculateTax()
    {
        return 50.0;
    }

};


class Garage{

    private:
    int numVehicles;
    Vehicle* vehicles[5];

    public:
    Garage(){
        numVehicles = 0;

    }

    void addVehicle(Vehicle* v)
    {
        if (numVehicles >= 5)
        {
            throw "The maximum number of vehicles has been reached!!";
        }
        vehicles[numVehicles] = v;
        numVehicles++;

    }

    void displayinfo()
    {
        cout << "***** Garage Details *****" << endl;
        for (int i = 0; i < numVehicles; i++) {
            cout << i + 1 << ". ";
            vehicles[i]->displaydetails();
            cout << "-------------------------" << endl << endl;
        }

    }

};

int main()
{
    Garage myGarage;

    Vehicle* v1 = new Car("Toyota", 2015, 4);
    Vehicle* v2 = new Car("BMW", 2019, 2);
    Vehicle* v3 = new Motorcycle("Honda", 2020, "Sport");
    Vehicle* v4 = new Car("Nissan", 2018, 5);
    Vehicle* v5 = new Motorcycle("Harley-Davidson", 2017, "Cruiser");

    try {
        myGarage.addVehicle(v1);
        myGarage.addVehicle(v2);
        myGarage.addVehicle(v3);
        myGarage.addVehicle(v4);
        myGarage.addVehicle(v5);

        //Vehicle* v6 = new Car("Kancil", 1996, 4);
       // myGarage.addVehicle(v6);

        myGarage.displayinfo();

} catch ( const char* msg)
{
    cout << "An error occurred: " << msg << endl;
}


system("pause");
return 0;

}