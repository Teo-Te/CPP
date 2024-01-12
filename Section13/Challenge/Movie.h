#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    //Constructor
    Movie (std::string m_name, std::string m_rating, int m_watched);
    //Copy constructor
    Movie (const Movie &source);
    //Destructor
    ~Movie ();
    //Getters
    std::string get_name () const;
    std::string get_rating () const;
    int get_watched () const;
    int get_increment_watched ();
    //Setters
    void set_name (std::string m_name);
    void set_rating (std::string m_rating);
    void set_watched (int m_watched);
    //Increment watched
    void increment_watched ();
    //Display
    void display () const;
};


#endif