#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> favoriteFoods;
    std::string input;
    
    std::cout << "Enter your favorite food one by one. Type 'done' when finished.\n";
    
    while (true) {
        std::cout << "What's your favorite food? ";
        std::getline(std::cin, input);
        
        // Check if the user is done entering foods
        if (input == "done") {
            break;
        }
        
        // Add the food to the list
        favoriteFoods.push_back(input);
    }
    
    // Print the list of favorite foods
    std::cout << "\nYour favorite foods are:\n";
    for (const auto& food : favoriteFoods) {
        std::cout << "- " << food << "\n";
    }
    
    return 0;
}

