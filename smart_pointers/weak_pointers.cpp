#include <iostream>

int main(void) {

    // Use of weak pointers is only to prevent cyclic dependencies getting formed in
    // shared pointers

    std::shared_ptr<int> s_ptr = std::make_shared<int>(32);

    std::weak_ptr<int> w_ptr = s_ptr;

    if (w_ptr.lock()) {
        std::shared_ptr<int> temp = w_ptr.lock();
        std::cout << *temp << "\n";
        std::cout << temp.use_count() << "\n";

    } else {
        std::cout << "Pointer does not exist";
    }

    std::cout << s_ptr.use_count();

    return 0;
}