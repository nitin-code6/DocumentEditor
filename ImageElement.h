#ifndef IMAGE_ELEMENT_H
#define IMAGE_ELEMENT_H

#include "DocumentElement.h"
#include <string>
#include <iostream>
class ImageElement : public DocumentElement {
private:
    std::string Image;

public:
    ImageElement(std::string t);
    void render() override;
};

#endif