# include "SaveToFile.h"
# include "Document.h"
# include <iostream>

using namespace std;

void SaveToFile::save(Document* doc){
    cout<<"Saving document File..."<<endl;
    doc->renderAll();
    cout<<"Document saved successfully"<<endl;
}