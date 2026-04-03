#include<iostream>
#include "Document.h"
#include "DocumentElement.h"
#include "SaveToDB.h"
int main(){
  Document doc;
  doc.addElement(new DocumentElement("text","Hello World"));
  doc.addElement(new DocumentElement("image","path/to/imahe.jpg"));
  SaveToDB saver;
  saver.save(&doc);

}