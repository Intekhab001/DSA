#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, int index, string mapping[], string output, vector<string>& ans){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for(int i=0; i<value.size(); i++){
        output.push_back(value[i]);
        solve(digits, index+1, mapping, output, ans);
        output.pop_back();
    }

}

vector<string> letterCombination(string digits){
    vector<string> ans;
    string output = "";
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int index = 0;

    solve(digits, index, mapping, output, ans);
    return ans;

}

int main(){
    string digits = "29";
    vector<string> ans = letterCombination(digits);
    
    //printing the vector content
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    } cout << endl;
}