/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:09:53 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:31:04 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

void replaceStrings(std::string &s1, std::string &s2, std::string &line, std::ofstream &outfile)
{
    if (s1.empty())
        return;

    std::string newLine = line;
    size_t pos = 0;

    while ((pos = newLine.find(s1, pos)) != std::string::npos) 
    {
        newLine.erase(pos, s1.length());
        newLine.insert(pos, s2);
        pos += s2.length();
    }
    outfile << newLine << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        return(std::cerr << "\033[1;31m Error! \033[0m Program must take exactly three parameters in the following order:\n"
            <<" • filename\n"
            <<" • string s1\n" 
            <<" • string s2\n" << std::endl, 1);
    }

    std::string  infileName = argv[1];
    std::string outfileName = infileName + ".replace";
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::string     line;

    if (s1.empty()) 
        return (std::cerr << "\033[1;31mError:\033[0m s1 cannot be an empty string.\n", 1);

    std::ifstream infile(infileName.c_str());
    if (!infile.is_open())
        return(std::cerr << "\033[1;31m Error! \033[0m Cannot open file " << infileName << std::endl, 1);

    std::ofstream outfile(outfileName.c_str());
    if (!outfile.is_open())
    {
        infile.close();
        return(std::cerr << "\033[1;31m Error! \033[0m Cannot create file " << outfileName << std::endl, infile.close(), 1);
    }

    while (std::getline(infile, line)) 
            replaceStrings(s1, s2, line, outfile);
    
    infile.close();
    outfile.close();
    return (0);
}
