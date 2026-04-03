#include "DocumentEditor.h"

DocumentEditor::DocumentEditor(Persistence* s) {
    strategy = s;
}

void DocumentEditor::save(Document* doc) {
    strategy->save(doc);
}