#ifndef GEM_H
#define GEM_H

#include "../tools/teller.h"

class Gem {
public:
    enum class Kind {
        Glass, Malachite, Citrin, Sapphire, Ruby, Diamond, Emerald
    };

    Gem() : m_kind(Kind::Diamond){
        COUNT(t);
    }

    Gem(Kind k) : m_kind(k){
        COUNT(t);
    }

    Gem(const Gem& vb) : m_kind(vb.m_kind){
        COUNT(t);
    }

    ~Gem(){
        COUNT(t);
    }

    Gem& operator=(const Gem& vb){
        m_kind = vb.m_kind;
        COUNT(t);
        return *this;
    }

    bool operator<(const Gem& r) const {
        COUNT(t);
        return m_kind < r.m_kind;
    }

    std::ostream& print(std::ostream& os) const {
        std::string kind("?");
        switch(m_kind){
        case  Kind::Malachite:
            kind = "Malachite";
            break;
        case  Kind::Citrin:
            kind = "Citrin";
            break;
        case  Kind::Glass:
            kind = "Glass";
            break;
        case  Kind::Sapphire:
            kind = "Sapphire";
            break;
        case  Kind::Ruby:
            kind = "Ruby";
            break;
        case  Kind::Emerald:
            kind = "Emerald";
            break;
        case  Kind::Diamond:
            kind = "Diamond";
            break;
        }
        return os << kind;
    }

private:
    Gem::Kind m_kind = Gem::Kind::Sapphire;
    inline static Teller t{"Gem"};
};

#endif   /*  GEM_H  */
