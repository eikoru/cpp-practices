#include <iostream>

int main() {

    std::string name;
    std::string course;
    int year;
    int fnum;
    int snum;



    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your course: ";
    std::getline(std::cin, course);

    std::cout << "Enter your academic year: ";
    std::cin >> year;

    std::cout << "Enter your first number: ";
    std::cin >> fnum;

    std::cout << "Enter your second number: ";
    std::cin >> snum;

//operations
    int sum = fnum + snum;
    double quotient = fnum / snum;
    int product = fnum * snum;
    int difference = fnum - snum;

    std::cout << "----------------------------------------------------------------------------" << '\n';
    std::cout << "Hello User " << name << " You are from " << course << " Year " << year << '\n';
    std::cout << "----------------------------------------------------------------------------" << '\n';
    std::cout << "The sum of " << fnum << " and " << snum << " is " << sum << '\n';
    std::cout << "The quotient of " << fnum << " and " << snum << " is " << quotient << '\n';
    std::cout << "The product of " << fnum << " and " << snum << " is " << product << '\n';
    std::cout << "The difference of " << fnum << " and " << snum << " is " << difference << '\n';
    std::cout << "----------------------------------------------------------------------------" << '\n';

    return 0;
}