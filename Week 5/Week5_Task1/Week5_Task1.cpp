#include <iostream>
#include <fstream>
#include <ios>

int findFileLength(const char* name) {
    std::ifstream ifStream(name);
    if (!ifStream)
    {
        std::cout << "Error";
        return -1;
    }

    ifStream.seekg(0, std::ios::end);
    int length = ifStream.tellg();

    ifStream.close();

    return length;
}

int main()
{
    std::ofstream ofStream("test.txt");
    ofStream << "Suspendisse faucibus, orci ut pretium dignissim, quam justo elementum tortor, at porta diam arcu ut eros.\nFusce dictum eros non lectus facilisis faucibus. Curabitur bibendum laoreet hendrerit.\n Aenean eget iaculis est. Fusce aliquet erat non tristique ultrices.\n Donec cursus metus non mauris ultricies dignissim./nOrci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus.";
    ofStream.close();

    

    std::cout << findFileLength("test.txt");
}