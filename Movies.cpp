#include <iostream>
#include <string.h>
#include "Movies.h"

using namespace std;

Movies::Movies(char* newtitle, char* newdirector, char* newyear, char* newduration, char* newrating){
  title = newtitle;
  director = newdirector;
  year = newyear;
  duration = new duration;
  rating = newrating;
}

char Movies::getTitle(){
  return title;
}
char Movies::getDirector(){
  return director;
}
char Movies::getYear(){
  return year;
}
char Movies::getDuration(){
  return duration;
}
char Movies::getRating(){
  return rating;
}
