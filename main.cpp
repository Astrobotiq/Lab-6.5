#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define LOG(x) cout << x << endl

vector<int> common(vector<int>& list1, vector<int>& list2){
    vector<int> tempList;
    int index = 0;
    for (int i = 0; i < list1.size(); ++i) {
        for (int j = 0; j < list2.size(); ++j) {
            if(list1[i]==list2[j]){
                tempList[index] = list1[i];
                index++;
            }
        }
    }
    return tempList;
}

vector<string> palindrome_list(vector<string>& strs) {
    vector<string> tempList;
    int index = 0;
    for (int i = 0; i < strs.size(); i++) {
        string bascward = strs[i];
        for (int j = 0; j < bascward.length()/2; j++){
            swap(bascward[j], bascward[bascward.length() - j - 1]);
        }
        if(strs[i]==bascward){
            tempList[index] = strs[i];
            index++;
        }
    }
    return tempList;
}

vector<int> sieveOfEratosthenes(vector<int> &nums) {
    int n = nums.size();
    vector<bool> prime(n + 1, true);
    vector<int> tempList;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (prime[i] && find(nums.begin(), nums.end(), i) != nums.end())
            tempList.push_back(i);
    }
    return tempList;
}
//sort the word -> sort the words from array -> check if they are same
vector<string> anagrams(string word, vector<string> word_list) {
    vector<string> tempList;
    sort(word.begin(), word.end());
    for (const auto& w : word_list) {
        string sorted_w = w;
        sort(sorted_w.begin(), sorted_w.end());
        if (sorted_w == word) {
            tempList.push_back(w);
        }
    }
    return tempList;
}

int main() {


}
