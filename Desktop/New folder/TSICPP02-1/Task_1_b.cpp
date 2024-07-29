/*=================================================================
/* TSICPP02-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 1_b.
/*===================================================================================
/*  Define a structure Address and a nested structure Person that includes Address.
/*===================================================================================*/
#include <iostream>
#include <string> // For using std::string
using namespace std;

// Define the Address structure
struct Address {
    string street;
    string city;
    int zip;
};

// Define the Person structure that includes Address and other attributes
struct Person {
    string name;
    int age;
    Address address; // Nested Address structure
};

int main() {
    // Create an instance of Person
    Person person;

    // Input person's details
    cout << "Enter person's name: ";
    cin>>person.name;

    cout << "Enter person's age: ";
    cin >> person.age;
    // Input address details
    cout << "Enter street address: ";
    cin>>person.address.street;
    cout << "Enter city: ";
    cin>>person.address.city;
    cout << "Enter zip code: ";
    cin >> person.address.zip;

    // Display person's information
    cout << "\nPerson Information:" << endl;
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Street: " << person.address.street << endl;
    cout << "City: " << person.address.city << endl;
    cout << "Zip: " << person.address.zip << endl;

    return 0;
}
