#include <iostream>
#include <stdexcept>

class Base {

    public:
    Base() {
        std::cout << "In constructor\n";
    }

    void throwException() {
        throw std::invalid_argument("Exception thrown");
    }

    void noThrowException() {
        std::cout << "Exception is not thrown\n";
    }

    ~Base() {
        std::cout << "In destructor\n";
    }


};

int main(void) {

    std::unique_ptr<Base> b = std::make_unique<Base>();
    /*
    When using raw pointers, the memory doesn't get freed. Suppose we throw an exception
    just like what we are doing in try block, the memory doesn't get freed, because it directly
    goes to catch block and hence memory is not freed.

    When using unique_pointers, even though we throw an exception the memory gets freed automatically,
    because this is how it is implemented under the hood.
    */
    // Base *b = new Base();

    try {
        b->throwException();
        delete b;
    } catch (std::invalid_argument e ) {
        std::cout << e.what() << "\n";
    }

    // 100 lines of code

    return 0;
}