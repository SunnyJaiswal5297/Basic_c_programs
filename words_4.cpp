#include <iostream>

using namespace std;

int main() {
	int n;
    string num[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    cout<<((n>=9)?num[0]:num[n])<<endl;
}
