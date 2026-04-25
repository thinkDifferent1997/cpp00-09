/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 01:12:37 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/23 22:37:22 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}



void    ScalarConverter::printConversions(double d)
{
    std::cout << "char: ";
    if (d < 0 || d > 127 || d != d) //C++98 NaN check
        std::cout << "impossible";
    else if (!std::isprint(static_cast<int>(d)))
        std::cout << "Non displayable";
    else
        std::cout << "'" << static_cast<char>(d) << "'";
    std::cout << std::endl;

    std::cout << "int: ";
    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max() || d != d)
        std::cout << "impossible";
    else
        std::cout << static_cast<int>(d);
    std::cout << std::endl;

    bool hasDecimal = (d - static_cast<long>(d) != 0);
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double:" << std::fixed << std::setprecision(1) << d << std::endl;
    
}

bool    ScalarConverter::isPseudo(const std::string& literal)
{
    std::string pseudo[] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff"};
    for (int i = 0; i < 6; ++i)
    {
        if (literal == pseudo[i])
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            if (i < 2)
            {
                std::cout << "float: nanf" << std::endl;
                std::cout << "double: nan" << std::endl;
            }
            else
            {
                std::cout << "float: " << (pseudo[i].find('+') != std::string::npos ? "+inff" : "-inff")<< std::endl;
                std::cout << "double: " << (pseudo[i].find('+') != std::string::npos ? "+inf" : "-inf")<< std::endl;
            }
            return true;
        }
    }
    return false;
}

void    ScalarConverter::convert(const std::string& literal)
{
    if (isPseudo(literal))
        return;

    char*   endptr = NULL;
    double  d;

    if (literal.length() == 1 && (!std::isdigit(literal[0])))
        d = static_cast<double>(literal[0]);
    else
    {
        d = std::strtod(literal.c_str(), &endptr);
        if (*endptr != '\0' && std::string(endptr) != "f")
        {
            std::cout << "Error: Invalid literal format!" << std::endl;
            return;
        }
    }
    printConversions(d);
}

ScalarConverter::~ScalarConverter(){}
