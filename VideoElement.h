#ifndef VIDEO_ELEMENT_H
#define VIDEO_ELEMENT_H

#include "DocumentElement.h"
#include <string>
#include <iostream>
class VideoElement : public DocumentElement {
private:
    std::string Video;

public:
    VideoElement(std::string t);
    void render() override;
};

#endif