
#include "PersistenceFactory.h"
#include "SaveToFile.h"
// later you can add:
// #include "SaveToDB.h"

Persistence* PersistenceFactory::createSaver(std::string type) {
    if (type == "file") {
        return new SaveToFile();
    }
    // else if (type == "db") return new SaveToDB();

    return nullptr;
}