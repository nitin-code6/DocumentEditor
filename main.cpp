#include<iostream>
#include "Document.h"
#include "TextElement.h"
#include "ImageElement.h"
int main(){
  Document doc;
  doc.addElement(new TextElement("Hello World"));
  doc.addElement(new ImageElement("path/to/imahe.jpg"));
  SaveToDB saver;
  saver.save(&doc);

}