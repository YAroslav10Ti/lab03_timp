#include "../formatter_ex_lib/formatter_ex.h"
#include "../solver_lib/solver.h"
#include <iostream>

int main() {
    int a = 5, b = 3;
    std::cout << "Solution: " << solver::solve(a, b) << std::endl;
    std::cout << formatter_ex::format_ex("Solved!") << std::endl;
    return 0;
}
