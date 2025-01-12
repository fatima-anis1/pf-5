#include <iostream>
using namespace std;

int ids[50];       // to store IDs
string names[50];  // to store names
int count = 0;     // to track how many students have been added

// Function to add a new student
void addStudent() {
    cout << "Enter ID: ";
    cin >> ids[count];  // Add new student ID
    cout << "Enter Name: ";
    cin >> names[count];  // Add new student Name
    count++;  // Increase the student count
    cout << "Student added!" << endl;
}

// Function to show all students
void showStudents() {
    if (count == 0) {
        cout << "No students to show." << endl;
        return;
    }
    // Loop to print all students and their details
    for (int i = 0; i < count; i++) {
        cout << "ID: " << ids[i] << ", Name: " << names[i] << endl;
    }
}

// Function to search for a student by ID
void searchStudent() {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (ids[i] == id) {
            // ID found, display the student's name
            cout << "Found: " << names[i] << endl;
            return;
        }
    }
    // ID not found, print a message
    cout << "Student not found!" << endl;
}

int main() {
    int choice;
    do {
        // Showing menu options
        cout << "\n1. Add student\n2. Show Students\n3. Search Student\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;  // Input user's choice

        if (choice == 1)
            addStudent();
        else if (choice == 2)
            showStudents();
        else if (choice == 3)
            searchStudent();
        else if (choice == 4)
            cout << "Goodbye!" << endl;
        else
            cout << "Invalid choice" << endl;
    } while (choice != 4);  // Program ends when the user wants to exit

    return 0;
}
