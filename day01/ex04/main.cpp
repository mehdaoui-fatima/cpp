#include <iostream>
#include <string>
#include <fstream> //Stream class to both read and write from/to files.

void    replace(FILE file, std::string s1, std::string s2)
{
    

}


int main(int c, char **argv)
{
    std::ifstream    ifs("file");
    std::string s1 = "test";
    std::string s2 = "testReplaced";
    replace(file, s1, s2);
    return (0);
}   