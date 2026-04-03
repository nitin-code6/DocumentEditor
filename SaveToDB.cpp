# include "SaveToDB.h"
# include "Document.h"
# include <iostream>

using namespace std;

void SaveToDB::save(Document* doc){
    cout<<"Saving document to database..."<<endl;
    doc->renderAll();
    cout<<"Document saved successfully"<<endl;
}