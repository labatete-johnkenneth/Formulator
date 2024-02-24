#include <iostream>
#include <cstdlib>
int main()  {
  float programNumber, weightInKilograms, heightInMeters, bMI;
  std::cout << "1.) BMI Calculator\nChoose a program (1-10): ";
  std::cin >> programNumber;
  if (programNumber == 0b1)  {
    std::cout << "Enter weight in kilograms: ";
    std::cin >> weightInKilograms;
    std::cout << "Enter height in meters: ";
    std::cin >> heightInMeters;
    bMI = weightInKilograms / (heightInMeters * heightInMeters);
    std::cout << "Your BMI is: " << bMI << '\n';
  }
  return EXIT_SUCCESS;
}
