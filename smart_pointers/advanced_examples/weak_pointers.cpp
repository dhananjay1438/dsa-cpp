#include <iostream>

class Address;
class Person {
    
    std::string name;
    std::weak_ptr<Address> address;

    public:
    Person(){}
    Person(std::string name) : name(name) {}

    void setAddress(std::shared_ptr<Address> address) {
        std::cout << "Inside Person\n";
        this->address = address;
    }
    ~Person() { std::cout << "Destroying Person\n"; }
};

class Address {

    std::string address;
    std::weak_ptr<Person> person;

    public:
    Address(){}
    Address(std::string address): address(address) {}

    void setPerson(std::shared_ptr<Person> person) {
        std::cout << "Inside Address\n ";
        this->person = person;
    }

    ~Address() { std::cout << "Destroying Address\n"; }

};

int main(void) { 


    std::shared_ptr person = std::make_shared<Person>("Adam");
    std::shared_ptr address = std::make_shared<Address>("Brazil");

    person->setAddress(address);
    address->setPerson(person);
    std::cout << person.use_count() << " " << address.use_count() << "\n";

    return 0;
}