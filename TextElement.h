#ifndef TEXT_ELEMENT_H
#define TEXT_ELEMENT_H

#include "DocumentElement.h"
#include <string>
#include <iostream>
class TextElement : public DocumentElement {
private:
    std::string text;

public:
    TextElement(std::string t);
    void render() override;
};

#endif