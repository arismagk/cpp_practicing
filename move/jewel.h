#ifndef JEWEL_H
#define JEWEL_H

#include <algorithm>  // swap is moved to utility
#include <utility>    // as of C++11
#include <iostream>

#include "gem.h"
#include "rock.h"


class Jewel  {
public:
    Jewel(): Jewel(Gem::Kind::Glass){
        COUNT(t);
    }

    Jewel(Gem::Kind k) : m_gem(new Gem(k)){
        COUNT(t);
    }

    // copy constructor
    Jewel(const Jewel& vb) : m_gem(nullptr){
        m_gem = new Gem(*(vb.m_gem));
        COUNT(t);
    }

    ~Jewel(){
        delete m_gem;
        if(m_gem == nullptr){
            destructor_with_nullptr();
        } else {
            COUNT(t);
        }
    }

    void destructor_with_nullptr(){
        COUNT(t);
    }

    void swap(Jewel& r) noexcept {
        std::swap(m_gem, r.m_gem);
    }

    Jewel& operator=(Jewel vb){
        swap(vb);
        COUNT(t);
        return *this;
    }

#if 0    /* this is for part 'c' of the exercise */
    // move constructor
    Jewel(Jewel&& vb) : m_gem(vb.m_gem){
        vb.m_gem = nullptr;                // destructable again.
        COUNT(t);
    }
#endif

    bool operator<(const Jewel& r) const {
        COUNT(t);
        return *m_gem < *(r.m_gem);
    }

    std::ostream& print(std::ostream& os) const {
        return m_gem ? m_gem->print(os) : os << "<nullptr>";
    }

private:
    Gem *m_gem;
    Rock r; // Rocks are designed to be immovable :-)
    inline static Teller t{"Jewel"};
};

inline std::ostream& operator<<(std::ostream& os, const Jewel& n){
    return n.print(os);
}
#endif
