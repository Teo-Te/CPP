#include "Movies.h"
#include <iostream>
#include <string>
#include <vector>

Movies::Movies () {
    
}

Movies::~Movies () {
    
}

void Movies::add_movie (std::string name, std::string rating, int watched) {
    for (const Movie &movie : movies) {
        if (movie.get_name() == name) { 
            std::cout << "Movie already exists" << std::endl;
            return;
        }
    }
    Movie temp {name, rating, watched};
    movies.push_back(temp);
}

void Movies::increment_watched (std::string name) {
    for (Movie &movie : movies) {
        if (movie.get_name() == name) { // 
            movie.set_watched(movie.get_watched() + 1);
            return;
        }
    }
    std::cout << "Movie not found" << std::endl;
}

void Movies::display () {
    if (movies.size() == 0) {
        std::cout << "No movies to display" << std::endl;
    } else {
        for (const Movie &movie : movies) {
            movie.display();
        }
    }
}

