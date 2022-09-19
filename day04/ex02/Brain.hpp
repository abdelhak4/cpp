//
// Created by Abdelhak El moussaoui on 9/13/22.
//

#ifndef _BRAIN_HPP
#define _BRAIN_HPP
#include <string>

class Brain {
private:
    std::string ideas[100];
public:
    Brain();
    Brain(Brain& copy);
    Brain& operator=(const Brain& type);
    ~Brain();
	const std::string *getIdeas() const;
	void setter(const std::string& idea);
};


#endif //_BRAIN_HPP
