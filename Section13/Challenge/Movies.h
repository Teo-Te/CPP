#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <iostream>
#include <string>
#include <vector>

class Movies {
private:
    std::vector<Movie> movies;
public:
    Movies ();
    ~Movies ();
    void add_movie (std::string name, std::string rating, int watched);
    void increment_watched (std::string name);
    void display ();
};

#endif