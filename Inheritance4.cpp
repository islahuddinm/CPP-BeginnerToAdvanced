#include <iostream>

// this file explaind 'destructor', 'copy constructor' and 'using employee::employee;' /////////////////////

// destructor will destroy all copy constructor first after that then destroy all constructor.

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
    employee(employee& source)
    : name(source.name), company(source.company), age(source.age) // anothet way initialize variable.
    {
        std::cout << "Costum copy constructor Eployee" << '\n';
    } 
    ~employee() {
        std::cout << "Destructor executing employee()!" << name << '\n';
    }
        
    void introduceYourself() {
        std::cout << "Name : " << name << '\n';
        std::cout << "Company : " << company << '\n';
        std::cout << "Age : " << age << '\n' << '\n';
    }    
};



class developer : public employee {
public:
    using employee::employee; // this is how to grab all employee data. we can use this class even though we dant have constructor here because we have grab all data from base class.

    std::string favProgrammingLanguage;

    developer() {
        std::cout << "Default consturctor for Developer called......\n";
    }
    //developer(std::string nameParam, std::string companyParam, int ageParam, std::string favProgrammingLanguageParam) : employee(nameParam, companyParam, ageParam) { // constructor
    //    favProgrammingLanguage = favProgrammingLanguageParam;
    //}
    
    void fixBug() {
    //    std::cout << getName() << " fix bug using " << favProgrammingLanguage << '\n';
    }
};



class engineer : private employee {
public:  
    using employee::getName;
    using employee::getCompany;
    using employee::getAge;

    engineer() {
        std::cout << "Default consturctor for Engineer called......\n";
    }
    engineer(std::string nameParam, std::string companyParam, int ageParam) : employee(nameParam, companyParam, ageParam) { // default constructor        
    }  
    engineer(engineer& source)
    : employee(source)
    {
        std::cout << "Costum copy constructor Engineer" << '\n';
    }
     ~engineer() {
        std::cout << "Destructor executing engineer()!" << getName() << '\n';
    }
      

    void work() {
        std::cout << employee::getName() << " is working " << '\n';
    }    
};



class civilEngineer : public engineer {
public:
    int contract = 1;

    civilEngineer() {
        std::cout << "Default consturctor for Civil Engineer called......\n";
    }
    civilEngineer(std::string nameParam, std::string companyParam, int ageParam, int contractParam)
    : engineer(nameParam, companyParam, ageParam), contract(contractParam)/* this is another way initialize instead of in function body.*/  {        
    }   
    civilEngineer(civilEngineer& source)
    : engineer(source), contract(source.contract)
    {
        std::cout << "Costum copy constructor Civil Engineer" << '\n';
    }
    ~civilEngineer() {
        std::cout << "Destructor executing civilEngineer()!" << getName() << '\n';
    }      
    
    friend std::ostream& operator<<(std::ostream& out, civilEngineer& civilEngineerSource) {
        out << "Name : " << civilEngineerSource.getName() << ", "
            << "Company : " << civilEngineerSource.getCompany() << ", "
            << "Age : " << civilEngineerSource.getAge() << ", "
            << "Contract : " << civilEngineerSource.contract;
        return out;
    }

    void work() {
        std::cout << engineer::getName() << " is working in " << getCompany() <<'\n';
    }
};



int main() {   

    developer employee4("Mike Dev", "Boring", 45);
    employee4.introduceYourself();

    civilEngineer employee3("John", "Boring", 40, 5);
    std::cout << employee3 << '\n' << '\n';

    civilEngineer employee2 = employee3; // how to copy constructor.    

    return 0;
}