
#pragma once
#include <iostream>
#include <ostream>
#include <fstream>

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm: public AForm
{
    private:
        const std::string m_target;
         void            performAction()const;


    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm();
};