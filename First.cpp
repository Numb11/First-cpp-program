#include <iostream>

using namespace std;
int main()
{
    std::cout << "Enter name?";
    string name;
    int age;
    std::cin >> name;
    std::cout << "What is your age " << name << "?";
    std::cin >> age;
    if (age > 10){
        cout << name << " is older than 10 years old!\n";
    }
    else {
        cout << name << " is younger than 10 years old!\n";
    }
    std::cout << "This is a master peice programmed by the one and only coding god!";
}

