/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 19:25:29 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/21 22:39:14 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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

		Bureaucrat c("Alex", 3);
		std::cout << c << std::endl;
		PresidentialPardonForm form3("Trump");
		c.signForm(form3);
		c.executeForm(form3);
		
		
		Intern someRandomIntern;
    	AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    	if (rrf) {
        delete rrf;
    	}
	}
	

	
	catch (std::exception& e)
	{
		std::cerr << "Error ! " << e.what() << std::endl;
	}
}