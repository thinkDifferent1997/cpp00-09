/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elsikira@student.42.paris>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 23:42:22 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/24 00:23:38 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
    public:
        virtual ~Base(){};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};
Base* generate(void);
void identify(Base* p);
void identify(Base& p);