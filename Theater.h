#include "Movie.h"
//const int for movie slots available for individual theater (changable)(see functions)
const int MovieCount=24;


//creating a Theater class
class Theater{
private:
    //create private variable: theater namee, phone #, popcorn and soda prices
    string Name;
    string Phone;
    int PopcornPrice=5;
    int CokePrice=3;
    
    //creates a default array for the movies playing at specific theater
    Movie Moviesplaying[MovieCount];

    
public:
    //constructor for specific theater
    Theater(string name, string phone){
        Name=name;
        Phone=phone;
    }
    // public hour variable, set by user
    int Hour;
    
    //class functions:
    //adds movies to a theater
    void AddMovie(Movie& Movie);
    
    //Gets movie playing next
    string GetMovieForHour (int Hour);
    
    //gets the showtime for a certain genre
    int GetShowTimeForGenre(string Genre);
    
    //displays the prices for the food and drink
    int GetPopcornPrice();
    int GetCokePrice();
    
    
    
    
};