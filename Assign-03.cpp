// Created by: Shem
// Created on: 11/1/2025
// This takes pizza ordes
// Copyright 2025 Shem

#include <iomanip>
#include <iostream>
#include <string>

int main() {
// Constants
const float ChickenTopping = 3.00;
const float BeefTopping = 2.00;
const float VegetableTopping = 1.10;
const float SmallPizza = 10.00;
const float LargePizza = 16.00;
const float ExtraLargePizza = 25.00;
const float HST = 0.13;

// Display pizza selection
std::cout << "Welcome to Shem's Pizza Shop!" << std::endl;
std::cout << "Pick a selection:" << std::endl;
std::cout << "1: Small pizza + Chicken Topping" << std::endl;
std::cout << "2: Small pizza + Beef Topping" << std::endl;
std::cout << "3: Small pizza + Vegetable Topping" << std::endl;
std::cout << "4: Large pizza + Chicken Topping" << std::endl;
std::cout << "5: Large pizza + Beef Topping" << std::endl;
std::cout << "6: Large pizza + Vegetable Topping" << std::endl;
std::cout << "7: Extra-large pizza + Chicken Topping" << std::endl;
std::cout << "8: Extra-large pizza + Beef Topping" << std::endl;
std::cout << "9: Extra-large pizza + Vegetable Topping" << std::endl;

// Ask for pizza selection
std::string selection;
std::cout << "Enter a selection (1-9): ";
std::cin >> selection;

float base_price = 0.0;
std::string selection_description;
// If statments for the sellection of options
if ((selection == "1" || selection == "2" || selection == "3" ||
    selection == "4" || selection == "5" || selection == "6" ||
    selection == "7" || selection == "8" || selection == "9") &&
    selection != "") {
    if (selection == "1") {
        base_price = SmallPizza + ChickenTopping;
        selection_description = "Small pizza + Chicken Topping";
    } else if (selection == "2") {
        base_price = SmallPizza + BeefTopping;
        selection_description = "Small pizza + Beef Topping";
    } else if (selection == "3") {
        base_price = SmallPizza + VegetableTopping;
        selection_description = "Small pizza + Vegetable Topping";
    } else if (selection == "4") {
        base_price = LargePizza + ChickenTopping;
        selection_description = "Large pizza + Chicken Topping";
    } else if (selection == "5") {
        base_price = LargePizza + BeefTopping;
        selection_description = "Large pizza + Beef Topping";
    } else if (selection == "6") {
        base_price = LargePizza + VegetableTopping;
        selection_description = "Large pizza + Vegetable Topping";
    } else if (selection == "7") {
        base_price = ExtraLargePizza + ChickenTopping;
        selection_description = "Extra-large pizza + Chicken Topping";
    } else if (selection == "8") {
        base_price = ExtraLargePizza + BeefTopping;
        selection_description = "Extra-large pizza + Beef Topping";
    } else if (selection == "9") {
        base_price = ExtraLargePizza + VegetableTopping;
        selection_description = "Extra-large pizza + Vegetable Topping";
    }
// Calculate subtotal, tax, and total
    float subtotal = base_price;
    float tax = subtotal * HST;
    float total = subtotal + tax;
// Display results with 2 decimal places
    std::cout << "You selected: " << selection_description << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "Your total is $" << total << std::endl;
    std::cout << "Thank you for ordering from Shem's Pizza Shop!" << std::endl;
} else {
    std::cout << "Invalid selection or "
    <<"empty input. Please enter a number from 1 to 9." << std::endl;
}
}
