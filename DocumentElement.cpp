#include "DocumentElement.h"
 DocumentElement::DocumentElement(string t,string c){
    type=t;
    content =c;
}
void DocumentElement::render(){
    cout<<"Type:"<<type<<"Content: "<<content<<endl;
}