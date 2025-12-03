#include <string>
#include <iostream>
#include <fstream>

void    replaceinfile(std::string fileName, std::string oldWord, std::string newWord) {
    std::fstream Myfile;
    Myfile.open(fileName.c_str(), std::ios::in);
    if (!Myfile.is_open())
    {
        std::cout << "Error: Unable to open the file for reading." << std::endl;
        return;
    }
    std::fstream tempFile((fileName + ".replace").c_str(), std::ios::out);
    if (!tempFile.is_open()) 
    {
        std::cout << "Error: Unable to create a temporary file for writing." << std::endl;
        Myfile.close();
        return;
    }
    std::string line;
    if (oldWord.empty())
        return;
    while (getline(Myfile, line)) 
    {
        std::string modifiedLine;
        size_t pos = 0;
        while (pos < line.length()) 
        {
            size_t fond = line.find(oldWord, pos);
            if (fond == std::string::npos) 
            {
                modifiedLine += line.substr(pos);
                break;
            }
            modifiedLine += line.substr(pos, fond - pos) + newWord;
            pos = fond + oldWord.length();
        }
        tempFile << modifiedLine << '\n';
    }
    Myfile.close();
    tempFile.close();
}

int main(int argc, char **argv) {
    if (argc != 4)
    {
        std::cout << "Usage: " << argv[0] << " <file> <old_word> <new_word>" << std::endl;
        return 1;
    }
    replaceinfile(argv[1], argv[2], argv[3]);
    return 0;
}