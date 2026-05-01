/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:48:03 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/25 19:47:15 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    makeConjugate(std::complex<double>& c)
{
    c = std::conj(c);   
}

void    increment(int &i)
{
    i++;
}

int main(void)
{
    int intArray[] = {1, 2, 3, 5, 6};
    std::cout << "The original array of ints is : ";
    ::iter(intArray, 5, printElement<int>);
    std::cout << std::endl;
    ::iter(intArray, 5, increment);
    std::cout << "The new incremented array of ints is : ";
    ::iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::string stringArray[] = {"Hello", "World", "Forty", "Two"};
    std::cout << "The original array of strings is : ";
    ::iter(stringArray, 4, printElement<std::string>);
    std::cout << std::endl;

    const int constIntArray[] = {42, 43, 44};
    std::cout << "The original array of const ints is : ";
    ::iter(constIntArray, 3, printElement<int>);
    std::cout << std::endl;

    std::complex<double> complexArray[] = {
        std::complex<double>(1.0, 2.0),
        std::complex<double>(3.0, 4.0),
        std::complex<double>(5.0, 6.0)
    };
    
    std::cout << "The original array of complex numbers is : ";
    ::iter(complexArray, 3, printComplex<double>);
    std::cout << std::endl;
    
    ::iter(complexArray, 3, makeConjugate);
    std::cout << "The new conjugate array of complex numbers is : ";
    ::iter(complexArray, 3, printComplex<double>);
    std::cout << std::endl;

}
