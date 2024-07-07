# Car Rental System

The Car Rental System is a console-based application written in C++ that allows users to browse available cars, view details, and lease a car by providing personal information and payment details.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- **Display Menu**: View a list of available cars with their details including company, model, color, max speed, price, and year.
- **Car Details**: Select a car to see detailed information such as model, color, max speed, price, and year.
- **Lease Confirmation**: Confirm the lease of a selected car by entering personal details (name, national ID) and payment amount.
- **Payment Validation**: Validate if the entered payment amount meets or exceeds the car's price.
- **User Authentication**: Password-based login system to access the car rental system.

## Installation

1. **Clone the repository:**

   ```bash
   git clone https://github.com/yourusername/car-rental-system.git
   ```

2. **Navigate to the project directory:**

   ```bash
   cd car-rental-system
   ```

3. **Compile the program:**

   ```bash
   g++ main.cpp -o car_rental_system
   ```

4. **Run the program:**

   ```bash
   ./car_rental_system
   ```

## Usage

1. **Login:**
   - Enter the password to access the Car Rental System.

2. **View Cars:**
   - Choose from the displayed menu to view available cars.

3. **Select Car:**
   - Enter the corresponding number to select a car and view its details.

4. **Lease Car:**
   - Confirm if you want to lease the selected car.
   - Provide your name, national ID, and payment amount.
   - The system will validate the payment amount.

5. **Continue or Exit:**
   - Decide whether to continue browsing cars or exit the program.

## Contributing

Contributions are welcome! Please follow these steps to contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/add-new-feature`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature/add-new-feature`).
6. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Feel free to customize the sections according to additional features, specific instructions for setup, or any other details relevant to your project.
