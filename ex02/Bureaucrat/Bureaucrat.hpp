/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:29:12 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 17:03:23 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;
class Bureaucrat {
  std::string const Name;
  int Grad;

public:
  Bureaucrat();
  Bureaucrat(const Bureaucrat &copy);
  Bureaucrat &operator=(const Bureaucrat &ope);
  Bureaucrat(std::string const name, int grad);
  ~Bureaucrat();

  void retrogradation();
  void promotion();
  int getGrade() const;
  std::string getName() const;
  void signForm(Form &form);

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
std::ostream &operator<<(std::ostream &stream, Bureaucrat const &other);
#endif
