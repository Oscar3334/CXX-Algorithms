#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

namespace algos {
    
    template< typename InputIterator, typename UnaryPredicate >
    bool all_of(InputIterator first, InputIterator last, UnaryPredicate p) {
        for (InputIterator i = first; i < last; i++) {
            if (!p(*i)) return false;
        }
        return true;
    }

    template< typename InputIterator, typename UnaryPredicate >
    bool any_of(InputIterator first, InputIterator last, UnaryPredicate p) {
        for (InputIterator i = first; i < last; i++) {
            if (p(*i)) return true;
        }
        return false;
    }

    template< typename InputIterator, typename UnaryPredicate >
    bool none_of(InputIterator first, InputIterator last, UnaryPredicate p) {
        for (InputIterator i = first; i < last; i++) {
            if (p(*i)) return false;
        }
        return true;
    }
    
}

#endif
