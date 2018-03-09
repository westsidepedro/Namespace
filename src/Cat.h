/*
 * Cat.h
 *
 *  Created on: Mar 9, 2018
 *      Author: jpetterson
 */

#ifndef CAT_H_
#define CAT_H_

#include <iostream>
using namespace std;

namespace original	//creating our own 'namespace' manually
    {
    const string NAME = "Bill"; //create a const var INSIDE the 'namespace'
    class Cat
	{
	public:
	    Cat(); //constructor
	    virtual ~Cat(); //deconstructor
	    void speak();
	};
    } //end of the 'namespace we made
#endif /* CAT_H_ */
