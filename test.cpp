#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <create|delete>" << std::endl;
        return 1;
    }

    std::string command = argv[1];

    if (command == "create") {
        std::cout << "Creating data..." << std::endl;
        // Add code to create data here
    } else if (command == "delete") {
        std::cout << "Deleting data..." << std::endl;
        // Add code to delete data here
    } else {
        std::cout << "Invalid command. Use 'create' or 'delete'." << std::endl;
        return 1;
    }

    return 0;
}
