/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:40:53 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/15 13:42:18 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>

AForm::AForm() : _Name("Aniss"), _gradeToSigne(30), _gradeToExecute(25) {
  _signed = false;
}

AForm::AForm(const AForm &copy)
    : _Name(copy._Name), _signed(copy._signed),
      _gradeToSigne(copy._gradeToSigne), _gradeToExecute(copy._gradeToExecute) {
  _signed = false;
  ;
}
void AForm ::beSigned(Bureaucrat const &b) {
  if (b.getGrade() > _gradeToSigne)
    throw GradeTooLowException();
  _signed = true;
}

AForm ::AForm(std::string const &name, int gradToSign, int gradToExecute)
    : _Name(name), _signed(false), _gradeToSigne(gradToSign),
      _gradeToExecute(gradToExecute) {
  if (_gradeToSigne < 1 || _gradeToExecute < 1)
    throw GradeTooHighException();

  if (_gradeToSigne > 150 || _gradeToExecute > 150)
    throw GradeTooLowException();
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("Grade Too Low.");
}

const char *AForm::GradeTooHighException::what() const throw() {

  return ("Grade Too High.");
}
const char *AForm::FormNotSignedException::what() const throw() {
  return ("Form Not Signed.");
}
AForm::~AForm() { std::cout << "Destructor called" << std::endl; }

std::string const &AForm::getName() const { return (_Name); }

int const &AForm::gradeToExecute() const { return (_gradeToExecute); }

int const &AForm::gradeToSign() const { return (_gradeToSigne); }

bool const &AForm::isSigned() const { return (_signed); }

std::ostream &operator<<(std::ostream &stream, AForm const &other) {
  stream << "Name  = " << other.getName() << std::endl;
  stream << "Grade to Execute = " << other.gradeToExecute() << std::endl;
  stream << "Grade to sign = " << other.gradeToSign() << std::endl;
  stream << "isSigned status = " << other.isSigned() << std::endl;
  return (stream);
}
