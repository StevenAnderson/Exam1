
#ifndef MOVIE_H_
#define MOVIE_H_
#include <iostream>
#include <string>
using namespace std;


//Create Movie class
class Movie{
private:
    //create title, genre, showtime variable as private
    //Dont want them changed
    string Title;
    string Genre;
    int ShowTime;
    
public:
    //constructor for default movie
    Movie(){
        Title="Twilight";
        Genre="Action";
        ShowTime=12;
    }
    //constructor for specified title, genre and showtime
    Movie(string title, string genre, int showTime){
        Title=title;
        ShowTime=showTime;
        //defaults genre as comedy if it doesnt match anything else
        if (genre=="Action" || genre=="Comedy" ||genre=="Horror" ||genre=="Documentary" )
            Genre=genre;
        else Genre="Comedy";
        }
    
    //class functions to access all private variables
    string GetTitle();
    string GetGenre();
    int GetShowTime();
    
    
    
    
};
#endif