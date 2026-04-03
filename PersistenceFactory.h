#ifndef PERSISTENCE_FACTORY_H
#define PERSISTENCE_FACTORY_H

#include "Persistence.h"
#include <string>

class PersistenceFactory {
public:
    static Persistence* createSaver(std::string type);
};

#endif