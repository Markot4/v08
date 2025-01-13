#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
    while (true) {
        try {
            int a = vsite::oop::v8::input_num(std::cin);
            char op = vsite::oop::v8::input_op(std::cin);
            int b = vsite::oop::v8::input_num(std::cin);
            double result = vsite::oop::v8::calc(a, op, b);
            std::cout << a << " " << op << " " << b << " = " << result << std::endl;
        }
        catch (const vsite::oop::v8::base_exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    return 0;
}