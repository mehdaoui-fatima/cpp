#include <iostream>
#include <string>
#include <fstream> //Stream class to both read and write from/to files.


int getn(std::ifstream& ifs)
{
    int n;
    std::string value;

    n = 0;
    while (getline(ifs, value))
        n++;
    ifs.clear();
    ifs.seekg(0, ifs.beg);
    ifs.close();
    return n;
}



void    replace(std::string filename, std::string s1, std::string s2)
{
    std::string value;
    std::string count;
    std::ifstream ifs;
    int index;
    int n;

    ifs.open(filename);
    if (!ifs.is_open()|| s1.empty() || s2.empty())
    {
        std::cout << "file must exist, s1 and s2 should not be empty" << std::endl;
        return;
    }
    else
    {
        n = getn(ifs);
        ifs.open(filename);
        std::ofstream ofs(filename + ".replace");
        while (getline(ifs, value))
        {
            while((index = value.find(s1)) >= 0)
            {
                std::cout << value << " ---" << index << std::endl;
                ofs << value.substr(0, index) + s2;
                value.assign(
                value.substr(index + s1.length(), value.length()));
            }
            if (n > 1)
                ofs <<  value + "\n";
            else
                ofs << value;
            n--;
        }
        ofs.close();
        ifs.close();
    }
}


int main(int c, char **argv)
{
    std::string filename = "numbers";
    std::string s1 = "hi";
    std::string s2 = "test";

    replace(filename, s1, s2);
}   