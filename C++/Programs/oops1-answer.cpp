the movie.h __FILE__

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
    private:
        std::string name;
        std::string rating;
        int watched;
    public:
        Movie(std::string name, std::string rating, int watched);
        ~Movie();

        std::string get_name() const;
        std::string get_rating() const;
        int get_watched() const;
        void increment_watched();
};

#endif

it in cpp format

#include "movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
    : name{name}, rating{rating}, watched{watched}
{
}

Movie::~Movie()
{
}

std::string Movie::get_name() const
{
    return name;
}

std::string Movie::get_rating() const
{
    return rating;
}

int Movie::get_watched() const
{
    return watched;
}

void Movie::increment_watched()
{
    watched++;
}

the codes used

#include "movies.h"

Movies::Movies()
{
}

Movies::~Movies()
{
}

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    // Check if a movie with the same name already exists
    for (const auto& movie : movies)
    {
        if (movie.get_name() == name)
        {
            return false;
        }
    }

    // Add the new movie
    movies.emplace_back(name, rating, watched);
    return true;
}

bool Movies::increment_watched(std::string name)
{
    for (auto& movie : movies)
    {
        if (movie.get_name() == name)
        {
            movie.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const
{
    if (movies.empty())
    {
        std::cout << "No movies in the collection.\n";
    }
    else
    {
        std::cout << "=============================================\n";
        std::cout << "Name\t\tRating\t\tWatched\n";
        std::cout << "=============================================\n";
        for (const auto& movie : movies)
        {
            std::cout << movie.get_name() << "\t\t" << movie.get_rating() << "\t\t" << movie.get_watched() << "\n";
        }
        std::cout << "=============================================\n";
    }
}

and finally the main code,

#include <iostream>
#include "movies.h"

int main()
{
    Movies my_movies;

    my_movies.add_movie("The Shawshank Redemption", "R", 0);
    my_movies.add_movie("The Godfather", "R", 0);
    my_movies.add_movie("The Dark Knight", "PG-13", 0);

    my_movies.display();

    my_movies.increment_watched("The Shawshank Redemption");
    my_movies.increment_watched("The Godfather");

    my_movies.display();

    return 0;
}
