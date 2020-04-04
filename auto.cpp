#include <utility>
#include <iostream>

template<typename T>
void tfunc(T ) {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
}

int func_value() {
    return 42;
}

int& func_ref() {
    static int value = 42;
    return value;
}

const int& func_cref() {
    static const int value = 42;
    return value;
}

int* func_ptr() {
    static int value = 42;
    return &value;
}

const int * func_cptr() {
    static int value = 42;
    return &value;
}

const int * const func_ccptr() {
    static const int value = 42;
    return &value;
}

// int&& func_rref() {
//     int value = 42;
//     return std::move(value);
// }

int main(int argc, char * argv[]) {

    // tfunc(..) - узнать тип переменной

    {
        // auto v1 = func_value();         // 1.1 - v1 type ?
        // auto& v2 = func_value();        // 1.2 - v2 type ?
        // const auto& v3 = func_value();  // 1.3 - v3 type ?
        // auto&& v4 = func_value();       // 1.4 - v4 type ?
    }

    {
        // auto v1 = func_ref();           // 2.1 - v1 type ?
        // auto& v2 = func_ref();          // 2.2 - v2 type ?
        // const auto& v3 = func_ref();    // 2.3 - v3 type ?
        // auto&& v4 = func_ref();         // 2.4 - v4 type ?
    }

    {
        // auto v1 = func_cref();          // 3.1 - v1 type ?
        // auto& v2 = func_cref();         // 3.2 - v2 type ?
        // const auto& v3 = func_cref();   // 3.3 - v3 type ?
        // auto&& v4 = func_cref();        // 3.4 - v4 type ?
    }

    {
        // auto v1 = func_ptr();           // 4.1 - v1 type ?
        // auto& v2 = func_ptr();          // 4.2 - v2 type ?
        // const auto& v3 = func_ptr();    // 4.3 - v3 type ?
        // auto&& v4 = func_ptr();         // 4.4 - v4 type ?
    }

    {
        // auto v1 = func_cptr();          // 5.1 - v1 type ?
        // auto& v2 = func_cptr();         // 5.2 - v2 type ?
        // const auto& v3 = func_cptr();   // 5.3 - v3 type ?
        // auto&& v4 = func_cptr();        // 5.4 - v4 type ?
    }

    {   
        // auto v1 = func_ccptr();         // 6.1 - v1 type ?
        // auto& v2 = func_ccptr();        // 6.2 - v2 type ?
        // const auto& v3 = func_ccptr();  // 6.3 - v3 type ?
        // auto&& v4 = func_ccptr();       // 6.4 - v4 type ?
    }

    {
        // auto v1 = func_rref();          // 7.1 - v1 type ?
        // auto& v2 = func_rref();         // 7.2 - v2 type ?
        // const auto& v3 = func_rref();   // 7.3 - v3 type ?
        // auto&& v4 = func_rref();        // 7.4 - v4 type ?
    }
    
    {
        // auto v1(10);            // 8.1 - v1 type ?
        // auto v2 = 10;           // 8.2 - v2 type ?
        // auto v3{10};            // 8.3 - v3 type ?
        // auto v4 = {10};         // 8.4 - v4 type ?
        // auto v5 = {1, 2, 3};    // 8.5 - v5 type ?
        // auto v6 = {1, 2, 3.0};  // 8.6 - v6 type ?
    }
    
    return 0;
}
