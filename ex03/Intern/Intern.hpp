/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:21:39 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/16 12:27:16 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef INTERN_CPP
#define INTERN_CPP

#include "../AForm/AForm.hpp"
#include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include <exception>
#include <string>
class Bureaucrat;

class Intern {
private:
  std::string fname;
  std::string target;

public:
  Intern();
  Intern(const Intern &src);
  Intern &operator=(const Intern &cpy);
  AForm *makeForm(std::string name, std::string target);
  ~Intern();
  class FormNotExist : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
#endif
