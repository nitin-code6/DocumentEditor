#include <iostream>
#include "Document.h"
#include "TextElement.h"
#include "ImageElement.h"
#include "VideoElement.h"
#include "persistence.h"
#include "SaveToFile.h"
int main() {
    Document doc;

    doc.addElement(new TextElement("Hello World"));
    doc.addElement(new ImageElement("path/to/image.jpg"));
    doc.addElement(new VideoElement("path/to/video.mp4"));

  Persistence* saver = new SaveToFile();
saver->save(&doc);

    return 0;
}