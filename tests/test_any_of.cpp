#include <boost/ut.hpp>
#include <algorithm>
#include "algorithms.hpp"

int main() {
    using namespace boost::ut;

    std::vector<int> vec = {0, 1, 2, 3, 4, 5};
    auto pred1 = [] (int n) { return n == 5; };
    auto pred2 = [] (int n) { return n > 0; };
    auto pred3 = [] (int n) { return n < 0; };
    
    auto a = vec.begin();
    auto b = vec.end();
    
    "any_of"_test = [=] {
        expect(algos::any_of(a, b, pred1) == std::any_of(a, b, pred1));
        expect(algos::any_of(a, b, pred2) == std::any_of(a, b, pred2));
        expect(algos::any_of(a, b, pred3) == std::any_of(a, b, pred3));
    };
    
}
