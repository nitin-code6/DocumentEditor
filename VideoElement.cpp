#include "VideoElement.h"

VideoElement::VideoElement(std::string v){
 Video=v;
}
void  VideoElement::render(){
    std::cout<<"Video: "<<Video<<std::endl;
}