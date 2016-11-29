#include <iostream>
#include <string.h>

using namespace std;

class Music {
 public:
  Music();
  Music(char*, char*, char*, char*, char*);
  char* getTitle();
  char* getArtist();
  char* getYear();
  char* getDuration();
  char* getPublisher();


 private:
  char* artist;
  char* duration;
  char* publisher;


}
