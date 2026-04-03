#include "TextElement.h"

TextElement::TextElement(std::string t){
 text=t;
}
void  TextElement::render(){
    std::cout<<"text: "<<text<<std::endl;
}