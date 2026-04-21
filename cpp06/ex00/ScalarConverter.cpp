/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 01:12:37 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/22 01:42:30 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

bool    ScalarConverter::isPseudo(const std::string& lit)
{
    std::string pseudo[] = {"nan", "nanf", "+inf", "+inff", "-inf", "-inff"};
    
}


ScalarConverter::~ScalarConverter(){}
