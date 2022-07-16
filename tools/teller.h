// Copyright AT Computing Nijmegen/Utrecht 2013
#ifndef TELLER_H
#define TELLER_H

#if 1
#define COUNT(t) t.count(__PRETTY_FUNCTION__);
#define TRACE() std::cerr << __PRETTY_FUNCTION__ << std::endl;
#else
#define COUNT(t) t.count(__FUNCSIG__);
#define TRACE() std::cerr << __FUNCSIG__ << std::endl;
#endif

#include <iostream>
#include <iomanip>
#include <map>

class Teller {
public:
    Teller() = default;
    Teller(const std::string& header): m_header(header) {
    }
    Teller(const Teller&) = delete;
    Teller(Teller&&) = delete;
    Teller &operator=(const Teller&) = delete;
    Teller &operator=(Teller&&) = delete;
    void count(const std::string& what){
        m_counts[what] ++;
    }

    ~Teller(){
	using namespace std;
        if( m_header != "" ){
            cerr << "----- " << m_header << " -----" << endl;
        }
        decltype(std::string().size()) width(0);
        for(const auto& p : m_counts){
            width = max(width, p.first.size());
        }
        for(const auto& [signature, count] : m_counts){
            cerr << setw(width) << left << signature << " : "
                 << setw(5) << right << count << endl;
        }
    }

private:
    std::map<std::string, int> m_counts;
    std::string m_header;
};
#endif
