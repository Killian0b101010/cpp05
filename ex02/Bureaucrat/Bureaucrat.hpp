/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:29:12 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/14 18:25:33 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <string>
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"
#define BOLD "\033[1m"
class AForm;
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
  void signForm(AForm &form);
  void executForm(AForm const &form);
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
