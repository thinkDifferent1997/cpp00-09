/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elsikira@student.42.paris>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 23:42:31 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/24 00:10:01 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
    std::srand(std::time(NULL));

    for (int i = 0; i < 5; i++)
    {
        std::cout << " Test " << i << ":" << std::endl;
        Base* p = generate();
        
        std::cout << "Identify via Pointer:  ";
        identify(p);
        
        std::cout << "Identify via Reference: ";
        identify(*p);
        
        delete p;
    }
}