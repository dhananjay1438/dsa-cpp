#include <iostream>
#include <memory>

int main(void) {

    std::shared_ptr<int> s_ptr = std::make_shared<int>(100);

    std::shared_ptr<int> another_pointer = s_ptr;

    std::cout << another_pointer.use_count() << "\n";

    // Uses count referencing

    s_ptr.reset(new int(32));

    std::cout << s_ptr << "\n";
    std::cout << *s_ptr << "\n";
    std::cout << another_pointer << "\n";
    std::cout << *another_pointer << "\n";


    return 0;
}