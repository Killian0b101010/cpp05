/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiteixei <kiteixei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:41:03 by kiteixei          #+#    #+#             */
/*   Updated: 2025/11/08 18:41:47 by kiteixei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <cstdbool>
#include <ostream>
#include <string>

class Form {
private:
  std::string const _Name;
  const bool _signed;
  const int _isSigned;
  const int _isExecuted;

public:
  Form();
  ~Form();
  Form(const Form &copy);
  Form &operator=(const Form &other) = delete;

  std::string const getName() const;
  int const getIsSigned() const;
  int const isExecuted() const;
  bool const isSigned() const;
};
#endif

std::ostream &operator<<(std::ostream &stream, const Form &copy);
