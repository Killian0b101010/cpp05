/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:28:21 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 16:51:59 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "../Form/Form.hpp"

Bureaucrat::Bureaucrat() {
  std::cout << "Bureaucrat constructor default called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grad) : Name(name) {
  if (grad < 1)
    throw GradeTooHighException();
  else if (grad > 150)
    throw GradeTooLowException();
  else
    Grad = grad;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) { *this = copy; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other) {
    this->Grad = other.Grad;
  }
  return (*this);
}

int Bureaucrat::getGrade() const { return (Grad); }

std::string Bureaucrat::getName() const { return (Name); }

void Bureaucrat::retrogradation() {
  if (Grad + 1 < 1)
    throw GradeTooHighException();
  Grad++;
}

void Bureaucrat::promotion() {
  if (Grad - 1 > 150)
    throw GradeTooLowException();
  Grad--;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Grade Too Low.");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

  return ("Grade Too High.");
}

void Bureaucrat::signForm(Form &form) {
  try {
    form.beSigned(*this);
    std::cout << Name << " signed " << form.getName() << std::endl;
  } catch (std::exception &e) {
    std::cout << Name << " couldn’t sign " << form.getName()
              << " because bureaucrat is lvl " << getGrade() << " contract lvl "
              << form.gradeToSign() << " " << e.what() << std::endl;
  }
}
Bureaucrat::~Bureaucrat() { std::cout << "Destructor called" << std::endl; }

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &other) {
  stream << other.getName() << ", bureaucrat grade " << other.getGrade()
         << std::endl;
  return (stream);
}
