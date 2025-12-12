/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:28:02 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:34:31 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy)
    : AForm(cpy), _target(cpy._target) {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  if (this != &other)
    _target = other._target;
  return (*this);
}
std::string RobotomyRequestForm ::getTarget() const { return _target; }

void RobotomyRequestForm::execute(const Bureaucrat &b)const {
  time_t timestamp;
  time(&timestamp);
  struct tm *timeInfos = localtime(&timestamp);
  if (b.getGrade() > gradeToExecute())
    throw AForm::GradeTooLowException();
  std::cout << "* BZZZZZZZZZZZZZ *" << std::endl;
  std::cout << "* Drrrrrr Drrrrrr *" << std::endl;
  if (timeInfos->tm_sec % 2 == 0)
    std::cout << b.getName() << " has been robotomized successfully"
              << std::endl;
  else
    std::cout << "The robotomi failled ";
}

RobotomyRequestForm::~RobotomyRequestForm() {}
std::ostream &operator<<(std::ostream &st, RobotomyRequestForm &s) {
  st << "Name : " <<  s.getName() << std::endl;
  st << "Grade to exec : " << s.gradeToExecute() << std::endl;
  st << "Grade to sign : " << s.gradeToSign() << std::endl;
  st << "Target : " << s.getTarget() << std::endl;
  return (st);
}
