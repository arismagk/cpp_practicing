#include <iostream>
using namespace std;

class wire {
public:
    wire() { cout << "Default constructor of wire\n";  }
    wire(const wire&) { cout << "Copy: wire-part\n";  }
};

class microphone {
public:
    microphone() { cout << "Default constructor of microphone\n";  }
    microphone(const microphone&) { cout << "Copy: microphone-part\n";  }
};

class speaker {
public:
    speaker() { cout << "Default constructor of speaker\n";  }
    speaker(const speaker&) { cout << "Copy: speaker-part\n";  }
};

class pushbutton {
public:
    pushbutton() { cout << "Default constructor of pushbutton\n";  }
    pushbutton(const pushbutton&) { cout << "Copy: pushbutton-part\n";  }
};

class bell {
public:
    bell() { cout << "Default constructor of bell\n";  }
    bell(const bell&) { cout << "Copy: bell-part\n";  }
};

class circuit {
public:
    circuit() { cout << "Default constructor of circuit\n";  }
    circuit(const circuit&) { cout << "Copy: circuit-part\n";  }
};

class hook {
public:
    hook() { cout << "Default constructor of hook\n";  }
    hook(const hook&) { cout << "Copy: hook-part\n";  }
};

class mouthpiece {
public:
    mouthpiece() { cout << "Default constructor of mouthpiece\n";  }
    mouthpiece(const mouthpiece& t) : m(t.m), w(t.w)
                 { cout << "Copy: mouthpiece-part\n";  }
private:
    microphone m;
    wire w;
};

class earpiece {
public:
    earpiece() { cout << "Default constructor of earpiece\n";  }
    earpiece(const earpiece& t) : s(t.s), w(t.w)
               { cout << "Copy: earpiece-part\n";  }
private:
    speaker s;
    wire w;
    
};

class horn {
public:
    horn() { cout << "Default constructor of horn\n";  }
    horn(const horn& t) : e(t.e), m(t.m), w(t.w)
           { cout << "Copy: horn-part\n";  }
private:
    earpiece e;
    mouthpiece m;
    wire w;
};

class cover {
public:
    cover() { cout << "Default constructor of cover\n";  }
    cover(const cover& t) : b(t.b), c(t.c), w(t.w), h(t.h)
            { cout << "Copy: cover-part\n";  }
private:
    bell b;
    circuit c;
    wire w;
    hook h;
};

class keypad {
public:
    keypad() { cout << "Default constructor of keypad\n";  }
    keypad(const keypad& a) : b0(a.b0), b1(a.b1), b2(a.b2)
             { cout << "Copy: keypad-part\n";  }
private:
    pushbutton b0;
    pushbutton b1;
    pushbutton b2;
};

class telephone {
public:
    telephone() { cout << "Default constructor of telephone\n";  }
    telephone(const telephone& t) : h(t.h), k(t.k), c(t.c), w(t.w)
                { cout << "Copy: telephone-part\n";  }
private:
    horn h;
    keypad k;
    cover c;
    wire w;
};

int main()
{
    cout << "Create: telephone t1\n";
    telephone t1;

    cout << "Create: telephone t2(t1)\n";
    telephone t2(t1);

    // cout << "Create: telephone t3\n"; 
    // telephone t3;
    // t3 = t1;
    return 0;
}
