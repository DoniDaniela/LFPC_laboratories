#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const* argv[]) {

    char cur_state, letter;

    string sentence;
    while (true) {
    HERE:
        cur_state = 'S';
        cout << "\n\nPunct initial: " << cur_state << "\n\nIntrodu expresia: ";
        cin >> sentence;

        cout << "\nPath:\n";

        for (char i : sentence) {
            letter = i;

            switch (cur_state) {

            case 'S':
                if (letter == 'a') {

                    cur_state = 'B';
                    break;

                }
                else {

                    cout << "\nExpresia nu apartine productiilor";
                    goto HERE;

                }

            case 'B':
                if (letter == 'b') {

                    cur_state = 'B';
                    break;

                }
                else if (letter == 'c') {


                    cur_state = 'L';
                    break;


                }
                else {

                    cout << "\nExpresia nu apartine productiilor";
                    goto HERE;

                }

            case 'L':
                if (letter == 'b') {

                    cout << "terminal point reached" << "\nExpresia e corecta";
                    goto HERE;

                }
                else if (letter == 'c') {


                    cur_state = 'L';
                    break;


                }
                else if (letter == 'a') {


                    cur_state = 'S';
                    break;


                }
                else {

                    cout << "\nExpresia nu apartine productiilor";
                    goto HERE;

                }
            }
            printf("%c\n", cur_state);
        }
        cout << "\nDestinatia finala - " << cur_state << "\nExpresia e corecta";

    }
}