#include <iostream>
#include <fstream>
#include <locale>

int main(void) {
    setlocale(LC_ALL, "Portuguese");
    std::ofstream outputFile("test.json");

    if(outputFile.is_open()) {
        outputFile << "{\n";
        outputFile << "\t\"isAlive\": true,\n";
        outputFile << "\t\"age\": 23\n";
        outputFile << "}";
        outputFile.close();
    } else {
        std::cout << "Unhandled error" << std::endl;
    }
}