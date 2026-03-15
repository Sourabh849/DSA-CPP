/*#include <iostream>
using namespace std;

int main() {
    char ch ;

    cout << "Enter character :";
    cin >> ch;

   if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase" << endl;
    } else{
        cout << "uppercase" << endl;
    }
    return 0;
}*/

//BY ASCII VALUE 

#include <iostream>
using namespace std;

int main() {
    char ch ;

    cout << "Enter character :";
    cin >> ch;

   if (ch >= 65 && ch <= 90){
        cout << "uppercase" << endl;
    } else{
        cout << "lowercase" << endl;
    }
    return 0;
}

