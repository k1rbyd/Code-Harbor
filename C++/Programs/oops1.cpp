#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct MovieDetails 
{
    string name;
    string rating;
    int num;
};

class Movie {
    private:
        MovieDetails details;
        friend class Movies;

    public:
        Movie(string n, string r = "~", int num = 0) 
        {
            details.name = n;
            details.rating = r;
            details.num = num;
        }
};

class Movies 
{
    private:
        vector<Movie> movies;

    public:
        void display() 
        {
            for (Movie m : movies) {
                cout << "Name: " << m.details.name << endl;
                cout << "Rating: " << m.details.rating << endl;
                cout << "Number of times watched: " << m.details.num << endl;
                cout<<endl;
            }
        }
        void add_movie(string n, string r, int num) 
        {
            Movie m(n, r, num);
            movies.push_back(m);
        }
        void increment_watched(string n)
        {
            for (Movie& m : movies) {
                if (m.details.name == n) {
                    m.details.num++;
                    break;
                }
            }
        }
};

int main() 
{
    Movies my_movies;

    my_movies.display();
    my_movies.add_movie("Big","PG-13",2);
    my_movies.add_movie("Star Wars","PG",5);
    my_movies.add_movie("Cinderella","PG",7);
    my_movies.increment_watched("Big");
    my_movies.display();
}
