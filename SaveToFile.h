#ifndef SAVETOFILE_H
#define SAVETOFILE_H
#include "persistence.h"
class Document;
class SaveToFile:public Persistence{
    public:
    void save(Document* doc) override;
};

#endif