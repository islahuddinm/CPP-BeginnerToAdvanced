#include <iostream>

/* in this file we just want to see
if we call most 'special(derived class)', default constructors in other classes are going to be called in
inheritance hierarchy even though we dont call them. it is going to call starting
from most basic class(base class) going down to 'most special(derived class)' that we call.*/

class employee {
private:
    std::string name;
    std::string company;
    int age;

public:
    std::string address;
    std::string hobby;

public:
    std::string getName() {
        return this->name;        
    }
    std::string getCompany() {        
        return this->company;
    }
    int getAge() {  
        return this->age;
    }
    
    employee() {
        std::cout << "Default consturctor for Employee called......\n";
    }
    employee(std::string nameParam, std::string companyParam, int ageParam) {
        name = nameParam;
        company = companyParam;
        age = ageParam;
    }
        
    void introduceYourself() {
        std::cout << "Name : " << name << '\n';
        std::cout << "Company : " << company << '\n';
        std::cout << "Age : " << age << '\n' << '\n';
    }    
};


class developer : public employee {
public:
    std::string favProgrammingLanguage;

    developer() {
        std::cout << "Default consturctor for Developer called......\n";
    }
    developer(std::string nameParam, std::string companyParam, int ageParam, std::string favProgrammingLanguageParam) : employee(nameParam, companyParam, ageParam) { // constructor
        favProgrammingLanguage = favProgrammingLanguageParam;
    }
    
    void fixBug() {
        std::cout << getName() << " fix bug using " << favProgrammingLanguage << '\n';
    }
};


class engineer : public employee {
public:  

    engineer() {
        std::cout << "Default consturctor for Engineer called......\n";
    }
    engineer(std::string nameParam, std::string companyParam, int ageParam) : employee(nameParam, companyParam, ageParam) { // default constructor        
    }   
    
    void work() {
        std::cout << employee::getName() << " is working " << '\n';
    }    
};


class civilEngineer : public engineer {
public:

    civilEngineer() {
        std::cout << "Default consturctor for Civil Employee called......\n";
    }
    civilEngineer(std::string nameParam, std::string companyParam, int ageParam) : engineer(nameParam, companyParam, ageParam) { // default constructor        
    }   
    
    void work() {
        std::cout << engineer::getName() << " is working in " << getCompany() <<'\n';
    }
};


int main() {

    civilEngineer C3; // this calls 'most special(derived class)'.

    return 0;
}