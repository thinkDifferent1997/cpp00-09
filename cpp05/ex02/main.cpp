/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:29 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/19 23:24:47 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	std::srand(std::time(0));
	try
	{
		Bureaucrat a("John", 10);
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		ShrubberyCreationForm form("My form");
		a.signForm(form);
		a.executeForm(form);

		Bureaucrat b("Moha", 1);
		std::cout << b << std::endl;
		RobotomyRequestForm form2("Bender");
		b.signForm(form2);
		b.executeForm(form2);
	}
	
	catch (std::exception& e)
	{
		std::cerr << "Error ! " << e.what() << std::endl;
	}
}