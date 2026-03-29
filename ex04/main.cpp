#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

static void replaceAll(const std::string& content, const std::string& search, const std::string& replace, std::string& output)
{
    std::size_t start = 0;
    std::size_t found;

    while ((found = content.find(search, start)) != std::string::npos)
    {
        output.append(content, start, found - start);
        output.append(replace);
        start = found + search.length();
    }
    output.append(content, start, content.size() - start);
}

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " filename s1 s2" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);

    if (s1.empty())
    {
        std::cerr << "Error: s1 must not be empty" << std::endl;
        return 1;
    }

    std::ifstream input(filename.c_str(), std::ios::in | std::ios::binary);
    if (!input.is_open())
    {
        std::cerr << "Error: cannot open input file" << std::endl;
        return 1;
    }

    std::string content((std::istreambuf_iterator<char>(input)), std::istreambuf_iterator<char>());
    input.close();

    std::string result;
    replaceAll(content, s1, s2, result);

    std::ofstream output((filename + ".replace").c_str(), std::ios::out | std::ios::binary);
    if (!output.is_open())
    {
        std::cerr << "Error: cannot create output file" << std::endl;
        return 1;
    }

    output << result;
    output.close();
    return 0;
}
