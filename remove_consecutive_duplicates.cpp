#include <iostream>
void removeConsecutiveDuplicates(char []);
using namespace std;

int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
// input - given string
// You need to update in the input string itself. No need to return or print anything

void removeConsecutiveDuplicates(char input[]) {
    int i,j=0;
    for(i=0;input[i]!='\0';i++){
        if(input[i+1]!=input[i] && input[j]!='\0'){
            input[j]=input[i];
            j++;
        }
    }
    input[j]='\0';
    // Write your code here

}
