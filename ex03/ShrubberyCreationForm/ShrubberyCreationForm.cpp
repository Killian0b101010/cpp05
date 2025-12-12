/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:28:02 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/16 12:39:21 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShruberryCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy)
    : AForm(cpy), _target(cpy._target) {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  if (this != &other)
    _target = other._target;
  return (*this);
}

std::string ShrubberyCreationForm ::getTarget() const { return _target; }

void ShrubberyCreationForm ::execute(const Bureaucrat &b) {
  if (gradeToSign() == false)
    throw AForm::FormNotSignedException();
  if (b.getGrade() > gradeToExecute())
    throw AForm::GradeTooLowException();
  std::string filename = _target + "_shrubbery";
  std::ofstream out(filename.c_str());

  if (!out) {
    std::cerr << "Error: could not open file " << filename << std::endl;
    return;
  }
  out << "      /\\\n";
  out << "     /**\\\n";
  out << "    /****\\\n";
  out << "   /******\\\n";
  out << "  /********\\\n";
  out << "      ||\n";
  out << "      ||\n";
  out.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
std::ostream &operator<<(std::ostream &st, ShrubberyCreationForm &s) {
  st << s.getName() << std::endl;
  st << s.gradeToExecute() << std::endl;
  st << s.gradeToSign() << std::endl;
  st << s.getTarget() << std::endl;
  st << s.isSigned() << std::endl;
  return (st);
}
