#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
    std::vector<std::string> inputs;
    std::string input;

    // Prompt the user for inputs
    std::cout << "Enter multiple inputs (type 'y' to finish):\n";
    while (true) {
        std::cin >> input;
        if (input == "y") {
            break;
        }
        inputs.push_back(input);
    }

    // Generate a random index
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomIndex = std::rand() % inputs.size();

    // Print the randomly selected input
    std::cout << "Randomly selected input: " << inputs[randomIndex] << std::endl;

    return 0;
}