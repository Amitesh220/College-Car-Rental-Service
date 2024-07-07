#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>  
#include <limits>
#include <iomanip>
#include <ctime>

using namespace std;

struct Car {
    string company;
    string model;
    string color;
    string max_speed;
    int price;
    int year;

    Car(string comp, string mod, string col, string max_sp, int pr, int yr)
        : company(comp), model(mod), color(col), max_speed(max_sp), price(pr), year(yr) {}
};

struct LeaseInfo {
    string name;
    string national_id;
    int payment_amount;

    LeaseInfo(string nm, string id, int amount)
        : name(nm), national_id(id), payment_amount(amount) {}
};


void displayMenu(const vector<Car>& cars);
void displayCarDetails(const Car& car);
bool confirmLease(const Car& car);
void processLease(const Car& car, LeaseInfo& lease);
bool isValidPayment(const Car& car, int payment);
void clearScreen();
void pauseScreen();
void loginUser();
void printWelcomeMessage();
void printGoodbyeMessage();

int main() {
    vector<Car> cars = {
        Car("Maruti Suzuki", "800", "Yellow", "80 Km/h", 1000, 2020),
        Car("Volkswagen", "2020", "Black", "200 Km/h", 2000, 2012),
        Car("BMW", "Q7", "Red", "300 Km/h", 4000, 2019),
        Car("Audi", "R8", "Brown", "250 Km/h", 6000, 2018),
        Car("KIA", "Saltos", "Blue", "320 Km/h", 7000, 2017),
        Car("Toyota", "Innova", "Silver", "200 Km/h", 2500, 2016),
        Car("Mercedes", "Benz", "Black", "200 Km/h", 4000, 2015),
        Car("Mahindra", "Thar", "Grey", "250 Km/h", 6000, 2021),
        Car("TATA", "Nano", "Red", "180 Km/h", 800, 2010)
    };

    LeaseInfo lease("", "", 0);

    loginUser();
    printWelcomeMessage();

    string decision;
    do {
        displayMenu(cars);
        int choice;
        cout << "\nYour Choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= cars.size()) {
            displayCarDetails(cars[choice - 1]);
            if (confirmLease(cars[choice - 1])) {
                processLease(cars[choice - 1], lease);
            }
        } else {
            cout << "Invalid choice. Please select again." << endl;
        }

        cout << "\nDo you want to continue? (yes/no): ";
        cin >> decision;
        clearScreen();
    } while (decision == "yes");

    printGoodbyeMessage();
    pauseScreen();

    return 0;
}

void displayMenu(const vector<Car>& cars) {
    clearScreen();
    cout << "---------------------------------------------\n";
    cout << "\t\t\tCollege Car Rental System\n";
    cout << "---------------------------------------------\n\n";

    int num = 1;
    for (const auto& car : cars) {
        cout << setw(2) << num << ". " << car.company << " " << car.model << " (" << car.color << ")" << endl;
        num++;
    }
}

void displayCarDetails(const Car& car) {
    clearScreen();
    cout << "---------------------------------------------\n";
    cout << "Details of " << car.company << " " << car.model << "\n";
    cout << "---------------------------------------------\n";
    cout << "Model:         " << car.model << endl;
    cout << "Color:         " << car.color << endl;
    cout << "Max Speed:     " << car.max_speed << endl;
    cout << "Price:         " << car.price << "K" << endl;
    cout << "Year:          " << car.year << endl;
}

bool confirmLease(const Car& car) {
    string decision;
    cout << "\nDo you want to lease this car? (yes/no): ";
    cin >> decision;
    return (decision == "yes");
}

void processLease(const Car& car, LeaseInfo& lease) {
    clearScreen();
    cout << "---------------------------------------------\n";
    cout << "Lease Process for " << car.company << " " << car.model << "\n";
    cout << "---------------------------------------------\n\n";

    cout << "Please provide your details:\n";
    cout << "Name: ";
    cin >> lease.name;
    cout << "Aadhar card: ";
    cin >> lease.national_id;
    cout << "Payment Amount: ";
    cin >> lease.payment_amount;

    if (isValidPayment(car, lease.payment_amount)) {
        cout << "\nLease process successful!\n";
    } else {
        cout << "\nInsufficient payment amount. Lease process aborted.\n";
    }
}

bool isValidPayment(const Car& car, int payment) {
    return (payment >= car.price);
}

void clearScreen() {
    system("CLS");
}

void pauseScreen() {
    system("PAUSE");
}

void loginUser() {
    string password;
    cout << "Welcome to college Car Rental System\n";
    cout << "--------------------------------\n\n";
    cout << "Please enter your password to continue: ";
    cin >> password;

    if (password != "systum") {
        cout << "Incorrect password. Access denied.\n";
        exit(EXIT_FAILURE);
    }
}

void printWelcomeMessage() {
    cout << "---------------------------------------------\n";
    cout << "\tWelcome to College Car Rental System\n";
    cout << "---------------------------------------------\n\n";
}

void printGoodbyeMessage() {
    cout << "---------------------------------------------\n";
    cout << "\tThank you for using our service!\n";
    cout << "---------------------------------------------\n\n";
}
