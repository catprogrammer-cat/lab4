#include <iostream>

using namespace std;

int main(){


int product = 1;
int input_num;



for (int i = 1; i <= 6; i++)
{
    
    cout << "Enter number with number " << i << ":" << endl;
    cin >> input_num;
    product *= input_num;
}

cout << "the product is: " << product << endl;
system("pause");
return 0;

}