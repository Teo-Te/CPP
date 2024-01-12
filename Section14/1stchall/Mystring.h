#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
    char *str; //C style string
public:
    Mystring(); //No args constructor
    Mystring(const char *s); //Overloaded constructor
    Mystring(const Mystring &source); //Copy constructor
    ~Mystring(); //Destructor

    Mystring &operator=(const Mystring &rhs); //Copy assignment
    Mystring &operator=(Mystring &&rhs); //Move assignment
    
    void display() const;
    int get_length() const;
    const char *get_str() const;

    Mystring operator-() const;
    bool operator==(const Mystring &rhs);
    bool operator!=(const Mystring &rhs);
    bool operator<(const Mystring &rhs);
    bool operator>(const Mystring &rhs);
    Mystring operator+(const Mystring &rhs) const;
    Mystring operator+=(const Mystring &rhs);
    Mystring operator*(int n);
    Mystring operator*=(int n);
    Mystring operator++();
    Mystring operator++(int);
    Mystring operator--();
    Mystring operator--(int);

};

#endif 