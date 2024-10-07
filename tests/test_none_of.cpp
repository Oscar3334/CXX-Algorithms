#include <boost/ut.hpp>
#include <algorithm>
#include <vector>
#include "algorithms.hpp"

int main() {
    using namespace boost::ut;

    std::vector<int> vec = {0, 1, 2, 3, 4, 5};
    auto pred1 = [] (int n) { return n == 5; };
    auto pred2 = [] (int n) { return n > 0; };
    auto pred3 = [] (int n) { return n < 0; };
    
    auto a = vec.begin();
    auto b = vec.end();
    
    "none_of"_test = [=] {
        expect(algos::none_of(a, b, pred1) == std::none_of(a, b, pred1));
        expect(algos::none_of(a, b, pred2) == std::none_of(a, b, pred2));
        expect(algos::none_of(a, b, pred3) == std::none_of(a, b, pred3));
    };
    
}
