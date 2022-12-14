#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
class Bureaucrat;
class Form
{
	private :
		const std::string	_name;
		bool				_signed;
		const int			_sGrade;
		const int			_eGrade;
	public :
		Form(void);
		Form(std::string name, int signedGrade, int executedGrade);
		Form(const Form& copy);
		Form& operator= (const Form& obj);
		std::string	getName(void)const;
		bool		getSigned(void)const;
		int			getSGrade(void)const;
		int			getEGrade(void)const;
		void		beSigned(Bureaucrat &bur);
		virtual void execute(Bureaucrat const & executor) const = 0;
		virtual ~Form(void);
	class GradeTooHighException : public std::exception
	{
		public :
			const char * what (void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char * what (void) const throw();
	};
};
std::ostream& operator<< (std::ostream& out, const Form& obj);
#endif