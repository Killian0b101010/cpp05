/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:40:53 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/08 18:43:20 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() { std::cout << "Default constructor" << std::endl; }

Form::Form(const Form &copy)
    : _Name(copy._Name), _isSigned(copy._isSigned),
      _isExecuted(copy._isExecuted), _signed(copy._signed) {
  ;
}

Form::~Form() { std::cout << "Destructor called" << std::endl; }

std::string const Form::getName() const { return (_Name); }

int const Form::getIsSigned() const { return (_isSigned); }

int const Form::isExecuted() const { return (_isExecuted); }

bool const Form::isSigned() const {
  if (_signed == 1)
    return (1);
}

std::ostream &operator<<(std::ostream &stream, Form const &other) {
  stream << other.getName() << other.getIsSigned() << other.isExecuted()
         << other.isSigned() << std::endl;
  return (stream);
}
