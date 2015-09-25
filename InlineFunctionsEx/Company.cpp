/*
 * Copyright SciSpike
 *
 * This file contains the implementation of the Company class
 */

#include "company.h"
#include <iostream.h>

/*
 * Constructor for person
 */
// Yes, we could definitly pass this as a const &
Company::Company(const std::string& name ) {
   companyName = name;
   cout << "Company named " << companyName.data() << " has been created" << endl;
}

/*
 * Destructor for person
 */
Company::~Company() {
   employees.clearAll();
   cout << "Company named " << companyName.data() << " has been removed" << endl;
}

/*
 * Print the name of the company and all the employees
 */
// Would you make this function const? YES
void Company::print() const {
   cout << endl << "Company name: " << companyName.data() << endl;
   cout << "Employees:" << endl;
   for (int i = 0; i < employees.getSize(); i++ ) {
      cout << ".... " << employees[i]->getName().data() << endl;
   }
	cout << endl;
}

/*
 * Hire a person
 */
// Would you change the newHire parameter? NO
// Would you make this function const? NO
void Company::hire(Person* newHire) {
   employees.addAtEnd( newHire );
}

