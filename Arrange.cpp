#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> inputs;
    std::string input;

    std::cout << "Enter input (type 'd' to finish):\n";
    while (true) {
        std::getline(std::cin, input);
        if (input == "d") {
            break;
        }
        inputs.push_back(input);
    }

    // Sort the inputs alphabetically
    std::sort(inputs.begin(), inputs.end());

    // Print the alphabetically arranged inputs
    std::cout << "Alphabetically arranged inputs:\n";
    for (const auto& str : inputs) {
        std::cout << str << std::endl;
    }

    return 0;
}
