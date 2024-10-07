#include <boost/ut.hpp>
#include <algorithm>
#include <vector>
#include "algorithms.hpp"

int main() {
    using namespace boost::ut;

    std::vector<int> v1 {1, 2, 3, 4, 5, 6};
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    
    auto func = [] (int x) { return 2 * x; } ;

    algos::for_each_n(v1.begin(), 3, func);
    std::for_each_n(v2.begin(), 3, func);

    "for_each_n"_test = [=] {
        expect(v1 == v2);
    };
    
}
