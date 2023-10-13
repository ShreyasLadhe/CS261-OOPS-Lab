#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book(const string& _title, const string& _author) : title(_title), author(_author) {}

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }
};

int main() {
    Book books[3] = {
        Book("Fifty Shades of Grey", "E. L. James"),
        Book("Deeper", "Roderick Gorden"),
        Book("The Girl in room 105", "Chetan Bhagat")
    };

    cout << "List of Books:\n" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Title: " << books[i].getTitle() << "\n";
        cout << "Author: " << books[i].getAuthor() << "\n\n";
    }

    return 0;
}
