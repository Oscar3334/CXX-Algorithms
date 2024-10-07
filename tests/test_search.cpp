#include <boost/ut.hpp>
#include <algorithm>
#include "algorithms.hpp"

int main() {
    using namespace boost::ut;

    std::string str = "absab";
    std::string sub = "ab";
    
    auto binPred = [](char a, char b) { return a == b; };
    "search"_test = [=] {
        expect(algos::search(str.begin(), str.end(), sub.begin(), sub.end())
                == std::search(str.begin(), str.end(), sub.begin(), sub.end()));
        expect(algos::search(str.begin(), str.end(), sub.begin(), sub.end(), binPred)
                == std::search(str.begin(), str.end(), sub.begin(), sub.end(), binPred));
    };
    
}
