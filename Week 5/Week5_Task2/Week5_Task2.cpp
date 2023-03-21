#include <iostream>
#include <fstream>
#include <ios>

void printCurrentFileContent() {
    const char* name = "Week5_Task2.cpp";

    std::ifstream ifStream(name);

    const int buffer_size = 1024;
    char line[buffer_size];
    while (ifStream.getline(line, buffer_size))
    {
        std::cout << line << "\n";
    }

    ifStream.close();
}


int main()
{
    printCurrentFileContent();
}