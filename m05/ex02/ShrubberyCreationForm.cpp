
#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("Shrubbery creation form", 145, 137), target_("") {
  return;
}

// Default constructor overload
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("Shrubbery creation form", 145, 137), target_(target) {
  return;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
    : Form("Shrubbery creation form", 145, 137), target_(other.getTarget()) {
  return;
}

// Copy assignment overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
ShrubberyCreationForm::~ShrubberyCreationForm() { return; }

// target_ getter
std::string ShrubberyCreationForm::getTarget() const { return (target_); }

// execute method overload
void ShrubberyCreationForm::beExecuted() {
  std::ofstream outfile;
  outfile.open(target_.append("_shrubbery"));

  outfile << "    	                                        .    " << std::endl;
  outfile << "                       .            ;        ;     " << std::endl;
  outfile << "       .              .              ;%     ;;     " << std::endl;
  outfile << "         ,           ,                :;%  %;      " << std::endl;
  outfile << "         :         ;                   :;%;'     .," << std::endl;
  outfile << ",.        %;     %;            ;        %;'    ,;  " << std::endl;
  outfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'   " << std::endl;
  outfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'    " << std::endl;
  outfile << "    ;%;      %;        ;%;        % ;%;  ,%;'      " << std::endl;
  outfile << "     `%;.     ;%;     %;'         `;%%;.%;'        " << std::endl;
  outfile << "      `:;%.    ;%%. %@;        %; ;@%;%'           " << std::endl;
  outfile << "         `:%;.  :;bd%;          %;@%;'             " << std::endl;
  outfile << "           `@%:.  :;%.         ;@@%;'              " << std::endl;
  outfile << "             `@%.  `;@%.      ;@@%;                " << std::endl;
  outfile << "               `@%%. `@%%    ;@@%;                 " << std::endl;
  outfile << "                 ;@%. :@%%  %@@%;                  " << std::endl;
  outfile << "                   %@bd%%%bd%%:;                   " << std::endl;
  outfile << "                     #@%%%%%:;;                    " << std::endl;
  outfile << "                     %@@%%%::;                     " << std::endl;
  outfile << "                     %@@@%(o);  . '                " << std::endl;
  outfile << "                     %@@@o%;:(.,'                  " << std::endl;
  outfile << "                 `.. %@@@o%::;                     " << std::endl;
  outfile << "                    `)@@@o%::;                     " << std::endl;
  outfile << "                     %@@(o)::;                     " << std::endl;
  outfile << "                    .%@@@@%::;                     " << std::endl;
  outfile << "                    ;%@@@@%::;.                    " << std::endl;
  outfile << "                   ;%@@@@%%:;;;.                   " << std::endl;
  outfile << "               ...;%@@@@@%%:;;;;,..                " << std::endl;
  outfile.close();
}
