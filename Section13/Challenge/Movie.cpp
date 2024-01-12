#include "Movie.h"
#include <iostream>

//Constructorsss babbeeeeyyyyyyy
Movie::Movie (std::string m_name, std::string m_rating, int m_watched) 
    : name{m_name}, rating{m_rating}, watched{m_watched} {
        
}

Movie::Movie (const Movie &source)
    : Movie{source.name, source.rating, source.watched} {

}

Movie::~Movie () {

}
//Getters
std::string Movie::get_name () const {
    return name;
}

std::string Movie::get_rating () const {
    return rating;
}

int Movie::get_watched () const {
    return watched;
}

//Setters
void Movie::set_name (std::string m_name) {
    name = m_name;
}

void Movie::set_rating (std::string m_rating) {
    rating = m_rating;
}

void Movie::set_watched (int m_watched) {
    watched = m_watched;
}

//Increment watched
void Movie::increment_watched () {
    ++watched;
}

//Display
void Movie::display () const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}