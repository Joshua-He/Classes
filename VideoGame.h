#include <iostream>
#include <string.h>

using namespace std;

class VideoGame {


 public:
  VideoGame();
  VideoGame(char*, char*, char*, char*);
  char* getTitle();
  char* getYear();
  char* getPublisher();
  char* getRating();

 private:
  char* publisher;
  char* rating;

}
