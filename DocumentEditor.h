#ifndef DOCUMENTEDITOR_H
#define DOCUMENTEDITOR_H

#include "Persistence.h"
#include "Document.h"

class DocumentEditor {
private:
    Persistence* strategy;

public:
    DocumentEditor(Persistence* s);
    void save(Document* doc);
};

#endif