/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:28:02 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:35:16 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &cpy)
    : AForm(cpy), _target(cpy._target) {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  if (this != &other)
    _target = other._target;
  return (*this);
}

std::string PresidentialPardonForm::getTarget() const { return _target; }

void PresidentialPardonForm::execute(const Bureaucrat &b)const {
  if (gradeToSign() == false)
    throw AForm::FormNotSignedException();
  if (b.getGrade() > gradeToExecute())
    throw AForm::GradeTooLowException();
  std::cout << "Informs that " << _target
            << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
PresidentialPardonForm ::~PresidentialPardonForm() {}

std::ostream &operator<<(std::ostream &st, PresidentialPardonForm &s) {
  st << "Name : " <<  s.getName() << std::endl;
  st << "Grade to exec : " << s.gradeToExecute() << std::endl;
  st << "Grade to sign : " << s.gradeToSign() << std::endl;
  st << "Target : " << s.getTarget() << std::endl;
  return (st);
}
