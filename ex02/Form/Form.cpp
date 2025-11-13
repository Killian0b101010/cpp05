/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:40:53 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 17:19:45 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form() : _Name("Aniss"), _gradeToSigne(30), _gradeToExecute(25) {
  _signed = false;
  std::cout << "Default constructor" << std::endl;
}

Form::Form(const Form &copy)
    : _Name(copy._Name), _signed(copy._signed),
      _gradeToSigne(copy._gradeToSigne), _gradeToExecute(copy._gradeToExecute) {
  _signed = false;
  ;
}
void Form ::beSigned(Bureaucrat const &b) {
  if (b.getGrade() > _gradeToSigne)
    throw GradeTooLowException();
  _signed = true;
}

Form ::Form(std::string const &name, int gradToSign, int gradToExecute)
    : _Name(name), _signed(false), _gradeToSigne(gradToSign),
      _gradeToExecute(gradToExecute) {
  if (_gradeToSigne < 1 || _gradeToExecute < 1)
    throw GradeTooHighException();

  if (_gradeToSigne > 150 || _gradeToExecute > 150)
    throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() {
  return ("Grade Too Low.");
}

const char *Form::GradeTooHighException::what() const throw() {

  return ("Grade Too High.");
}

Form::~Form() { std::cout << "Destructor called" << std::endl; }

std::string const &Form::getName() const { return (_Name); }

int const &Form::gradeToExecute() const { return (_gradeToExecute); }

int const &Form::gradeToSign() const { return (_gradeToSigne); }

bool const &Form::isSigned() const { return (_signed); }

std::ostream &operator<<(std::ostream &stream, Form const &other) {
  stream << "Name  = " << other.getName() << std::endl;
  stream << "Grade to Execute = " << other.gradeToExecute() << std::endl;
  stream << "Grade to sign = " << other.gradeToSign() << std::endl;
  stream << "isSigned status = " << other.isSigned() << std::endl;
  return (stream);
}
