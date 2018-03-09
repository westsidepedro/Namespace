/*
 * Animals.h
 *
 *  Created on: Mar 9, 2018
 *      Author: jpetterson
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_
#include <iostream>

using namespace std;

namespace nameAnything
    {
    const string NAME = "Tom";  //create a const var INSIDE the 'namespace'
    
    class Cat
	{
	public:
	    Cat();  // constructor
	    virtual ~Cat();  //desconstructor
	    void speak();
	};
    
    } /* namespace nameAnything */

#endif /* ANIMALS_H_ */
