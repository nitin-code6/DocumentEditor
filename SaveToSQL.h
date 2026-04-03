#ifndef SAVETOSQL_H
#define SAVETOSQL_H
#include "persistence.h"
class Document;
class SaveToSQL:public Persistence{
    public:
    void save(Document* doc) override;
};

#endif