#include <iostream>
#include <string>
#include "base64.h"


using namespace std;

int main(){
    cout << Base64::decode("c3RyaW5n");
    cout << Base64::encode("string");
}