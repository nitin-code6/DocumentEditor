#ifndef DOCUMENTELEMENT_H
#define DOCUMENTELEMENT_H
#include <string>
#include <iostream>
using namespace std;

class DocumentElement{
  private:
    string type;   // "text" or "image"
    string content;

public:
   DocumentElement(string t, string c);

    void render();
};
#endif
