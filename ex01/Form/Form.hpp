/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:41:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/12 16:13:34 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include "../Bureaucrat/Bureaucrat.hpp"
#include <cstdbool>
#include <exception>
#include <ostream>
#include <string>

class Bureaucrat;
class Form {

private:
  std::string const _Name;
  bool _signed;
  const int _gradeToSigne;
  const int _gradeToExecute;

public:
  Form();
  Form(std::string const &name, int gradToSign, int gradToExecute);
  ~Form();
  Form(const Form &copy);

  std::string const &getName() const;
  int const &gradeToExecute() const;
  bool const &isSigned() const;
  int const &gradeToSign() const;
  void beSigned(Bureaucrat const &b);

  class FormException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
#endif

std::ostream &operator<<(std::ostream &stream, const Form &copy);
