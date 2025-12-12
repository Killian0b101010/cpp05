/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:41:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/12/11 19:56:40 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include "../Bureaucrat/Bureaucrat.hpp"
#include <exception>
#include <ostream>
#include <string>

class Bureaucrat;
class AForm {

private:
  std::string const _Name;
  bool _signed;
  const int _gradeToSigne;
  const int _gradeToExecute;

public:
  AForm();
  AForm(std::string const &name, int gradToSign, int gradToExecute);
  virtual ~AForm();
  AForm(const AForm &copy);

  std::string const &getName() const;
  int const &gradeToExecute() const;
  bool const &isSigned() const;
  int const &gradeToSign() const;
  virtual void beSigned(Bureaucrat const &b);
  virtual void execute(Bureaucrat const &e) const = 0;
  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
  class FormNotSignedException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
#endif

std::ostream &operator<<(std::ostream &stream, const AForm &copy);
