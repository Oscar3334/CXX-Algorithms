#ifndef ALGORITHMS_HPP
#define ALGORITHMS_HPP

namespace algos {
    
    template< typename InputIt, typename UnaryPred >
    bool all_of(InputIt first, InputIt last, UnaryPred p) {
        for (; first < last; ++first) {
            if (!p(*first)) return false;
        }
        return true;
    }

    template< typename InputIt, typename UnaryPred >
    bool any_of(InputIt first, InputIt last, UnaryPred p) {
        for (; first < last; ++first) {
            if (p(*first)) return true;
        }
        return false;
    }

    template< typename InputIt, typename UnaryPred >
    bool none_of(InputIt first, InputIt last, UnaryPred p) {
        for (; first < last; ++first) {
            if (p(*first)) return false;
        }
        return true;
    }
    
    template< typename InputIt, typename UnaryFunc >
    UnaryFunc for_each(InputIt first, InputIt last, UnaryFunc f) {
        for (; first < last; ++first) {
            f(*first);
        }
        return f;
    }
    
    template< typename InputIt, typename Size, typename UnaryFunc >
    InputIt for_each_n(InputIt first, Size n, UnaryFunc f) {
        while (n > 0) {
            --n;
            f(*first);
            ++first;
        }
        return first;
    }
    
    // well this is just painful
    template< typename ForwardIt1, typename ForwardIt2 >
    ForwardIt1 search(ForwardIt1 first, ForwardIt1 last,
                        ForwardIt2 s_first, ForwardIt2 s_last) {
        while (first < last) {
            ForwardIt1 it = first;
            ForwardIt2 s_it = s_first;
            while (*it == *s_it) {
                if (s_it == s_last) return first;
                if (it == last) return last;
                ++it;
                ++s_it;
            }
            ++first;
        }
        return last;
    }

    // why did i decide to do this?
    template< typename ForwardIt1, typename ForwardIt2, typename BinaryPred>
    ForwardIt1 search(ForwardIt1 first, ForwardIt1 last,
                        ForwardIt2 s_first, ForwardIt2 s_last,
                        BinaryPred p) {
        while (first < last) {
            ForwardIt1 it = first;
            ForwardIt2 s_it = s_first;
            while (p(*it, *s_it)) {
                if (s_it == s_last) return first;
                if (it == last) return last;
                ++it;
                ++s_it;
            }
            ++first;
        }
        return last;
    }

#if 0 // TODO: IMPLEMENT THIS
    // why is there more
    template< typename ForwardIt1, typename ForwardIt2 >
    ForwardIt1 find_end(ForwardIt1 first, ForwardIt1 last,
                        ForwardIt2 s_first, ForwardIt2 s_last) {
        
    }
    
    // overloads aghhhhhhhhhhhhhhhh
    template< typename ForwardIt1, typename ForwardIt2, typename BinaryPred>
    ForwardIt1 find_end(ForwardIt1 first, ForwardIt1 last,
                        ForwardIt2 s_first, ForwardIt2 s_last,
                        BinaryPred p) {
        
    }
#endif
}

#endif
