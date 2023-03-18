#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include <typeinfo>

using namespace std;

vector<int> calculate(char str1, char str2, int carry);

int main(){

    vector<string> nums;
    string numString;

    string result = "";


    int carry = 0;
    getline(cin, numString);

    istringstream ssl(numString);

    for (string n; ssl >> n;)
        nums.push_back(n);

    if (nums[0].length() < nums[1].length()){
        string temp = nums[1];
        nums[1] = nums[0];
        nums[0] = temp;
    }

    int num1Len = static_cast<int>(nums[0].length());
    int num2Len = static_cast<int>(nums[1].length());

    
    vector<int> calResult;
    for (int i = 0; i < num1Len; i++){
        if (i >= num2Len){
            calResult = calculate(nums[0].back(), '0', carry);
            nums[0].pop_back();
        }else{
            calResult = calculate(nums[0].back(), nums[1].back(), carry);
            nums[0].pop_back();
            nums[1].pop_back();
        }
        carry = calResult[0];
        result = to_string(calResult[1]) + result;
    }

    if (carry == 1){
        result = '1' + result;
    }

    cout << result << endl;
    
}

vector<int> calculate(char str1, char str2, int carry){

    vector<int> result ={0, 0};

    int x = str1-'0';
    int y = str2-'0';

    int xy = x+y+carry;

    if(xy >= 10){
        result[0] = 1;
        xy -= 10;
    }

    result[1] = xy;
     
    return result;
}

