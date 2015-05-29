//I affirm that all code given below was written solely by me, Steven Anderson, and that any help I received adhered to the rules stated for this exam.

#include "Theater.h"

//function to add a movie to the theater
void Theater::AddMovie(Movie& Movie){
  //loop to replace default movie with movie being added
    //adds it in an array Moviesplaying[]
    for (int i=0; i<MovieCount;i++)
        if (Moviesplaying[i].GetTitle()=="Twilight"){
            Moviesplaying[i]=Movie;
            i=MovieCount;//stops loop once the movie has been entered
        }
        else;
    
}
//function to get the movie playing now or next
string Theater::GetMovieForHour (int Hour){
    string match;
    //checks for valid hour
    if (Hour>0 && Hour <24){
        //loops through array looking for a  match, or a movie on later/next
    for (int i=0;i<MovieCount;i++){
        if (Hour<=Moviesplaying[i].GetShowTime()){//assumes movies are entered chronologically
        match=Moviesplaying[i].GetTitle();
            i=MovieCount;//stops loop once a match has been found
        }
        else match= "";}//If no matches
    }
    else match="";//if not valid time entry
    return match;
  
}

//function to get showtime for a certain genre
int Theater::GetShowTimeForGenre(string Genre){
    //checks for valid genre entry
    if (Genre!="Action" && Genre!="Comedy" && Genre!="Horror" && Genre!="Documentary"){
        return -1;
    }
    int match=-1;
    //loop checking for a matching genre
    for (int i=0;i<MovieCount;i++){
        if (Genre==Moviesplaying[i].GetGenre()){
            match=Moviesplaying[i].GetShowTime();
            i=MovieCount;}//stops loop once a match has been found
        
        else
            match= -1;}//if no matches
    return match;
}

//function returning the price of the popcorn
int Theater::GetPopcornPrice(){
    return PopcornPrice;
}
//function returning the price of the coke

int Theater::GetCokePrice(){
    return CokePrice;
}

