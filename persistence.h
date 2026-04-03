#ifndef SAVETODB_H
#define SAVETODB_H
class Document;
class Persistence{
    public:
    virtual void save(Document *doc)=0;
};

#endif