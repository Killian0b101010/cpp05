/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:32:12 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/11 19:50:39 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
Intern::Intern() { std::cout << "Intern created" << std::endl; }

Intern::Intern(const Intern &src) {
  *this = src;
  std::cout << "Intern created by copy" << std::endl;
}

Intern::~Intern() { std::cout << "Intern destroyed" << std::endl; }

Intern &Intern::operator=(const Intern &src) {
  if(this != &src)
  {
    this->fname = src.fname;
    this->target = src.target;
  }
  std::cout << "Intern assigned" << std::endl;
  return (*this);
}

AForm *createRobot(std::string target) {
  return new RobotomyRequestForm(target);
}

AForm *createPresidential(std::string target) {
  return new PresidentialPardonForm(target);
}

AForm *createShruberryForm(std::string target) {
  return new ShrubberyCreationForm(target);
}
const char *Intern::FormNotExist::what() const throw() {
  return ("Form not exist");
}
AForm *Intern::makeForm(std::string name, std::string target) {
  AForm *(*makers[3])(std::string target) = {&createPresidential, &createRobot,
                                             &createShruberryForm};

  std::string names[3] = {"PresidentialPardonForm", "RobotomyRequestForm",
                          "ShrubberyCreationForm"};
  for (int i = 0; i < 3; i++) {
    if (names[i] == name) {
      std::cout << "Intern class creates" << name << std::endl;
      return makers[i](target);
    }
  }
  throw FormNotExist();
}
