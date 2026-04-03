# include "Document.h"

void Document::addElement(DocumentElement *element){
    elements.push_back(element);
}
void Document::renderAll(){
    for(auto element:elements){
        element->render();
    }
}