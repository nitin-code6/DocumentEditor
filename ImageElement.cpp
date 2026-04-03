#include "ImageElement.h"

ImageElement::ImageElement(std::string i){
 Image=i;
}
void    ImageElement::render(){
    std::cout<<"Image: "<<Image<<std::endl;
}