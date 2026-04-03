#include <iostream>
#include <string>

#include "Document.h"
#include "TextElement.h"
#include "ImageElement.h"
#include "VideoElement.h"
#include "PersistenceFactory.h"
#include "DocumentEditor.h"

int main() {
    Document doc;

    // Create strategy using factory
    Persistence* saver = PersistenceFactory::createSaver("file");
    DocumentEditor editor(saver);

    int choice;

    while (true) {
        std::cout << "\n---- Document Editor ----\n";
        std::cout << "1. Add Text\n";
        std::cout << "2. Add Image\n";
        std::cout << "3. Add Video\n";
        std::cout << "4. Show Document\n";
        std::cout << "5. Save Document\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter choice: ";

        std::cin >> choice;

        if (choice == 1) {
            std::cin.ignore(); // clear buffer
            std::string text;
            std::cout << "Enter text: ";
            std::getline(std::cin, text);

            doc.addElement(new TextElement(text));
        }

        else if (choice == 2) {
            std::string path;
            std::cout << "Enter image path: ";
            std::cin >> path;

            doc.addElement(new ImageElement(path));
        }

        else if (choice == 3) {
            std::string path;
            std::cout << "Enter video path: ";
            std::cin >> path;

            doc.addElement(new VideoElement(path));
        }

        else if (choice == 4) {
            std::cout << "\n--- Document Content ---\n";
            doc.renderAll();
        }

        else if (choice == 5) {
            editor.save(&doc);
        }

        else if (choice == 6) {
            std::cout << "Exiting...\n";
            break;
        }

        else {
            std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}