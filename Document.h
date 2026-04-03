#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <vector>
#include "DocumentElement.h"

class Document{
    private:
    std::vector< DocumentElement * > elements;
    public:
      void addElement(DocumentElement* element);
      void renderAll();
};
#endif
