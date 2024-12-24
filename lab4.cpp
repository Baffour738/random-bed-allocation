
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main() {
    cout << "*********Random Bed Allocation*********" << endl;
    while (true) {
        string student_id;
        cout << "Enter your student ID (8 digits): ";
        cin >> student_id;
        
        if (student_id.length() == 8 && all_of(student_id.begin(), student_id.end(), ::isdigit)) {
            cout << student_id << " has been assigned to ";
            srand(time(0));
            int hall = rand() % 6 + 1;
            switch (hall) {
                case 1: cout << "Mensah Sarbah Annex D." << endl; break;
                case 2: cout << "Jean Nelson Hall." << endl; break;
                case 3: cout << "Alexander Kwapong Hall." << endl; break;
                case 4: cout << "Hilla Limann Hall." << endl; break;
                case 5: cout << "Elizabeth Sey Hall." << endl; break;
                case 6: cout << "Jubilee Hall." << endl; break;
            }
        } else {
            cout << "Invalid student ID. Please enter an 8-digit number." << endl;
        }
    }
    
    return 0;
}
