//
//  main.cpp
//  andNothingButTheTruthLab
//
//  Created by Gabriela Avila on 11/18/25.
//

#include <iostream>
#include <vector>
using namespace std;

//number 1
bool sorted(vector<int>& vec){
    
    for(int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] < vec[i + 1])
        {
            return false;
        }
    }

    return true;
}

//number 2
bool subsetSum(vector<int> nums, vector<int> indicies, int target)
{
    int sum = 0;

        for (int i : indicies) {
            if (i < 0 || i >= nums.size()) {
                return false;
            }
            sum = sum + nums[i];
        }

        return sum == target;
}

//number 3

bool prime(int n) {
    if (n <= 1){
        return false;
    }
    if (n <= 3){
        return true;
    }
    if (n % 2 == 0){
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool primeFactorization(int n, vector<int>& factors) {
    if (n <= 1){
        return false;
    }

    int product = 1;
    for (int f : factors) {
        if (!prime(f)) return false;
        product *= f;
    }

    return product == n;
}


int main() {
    
    //number 1 test
    vector<int> v = {1, 2, 3, 4, 5};
    string s;
    if(sorted(v) == 0){
         s = "false";
    }else{
        s = "true";
    }
    cout << "sorted from highest to lowest: " << s << endl;
    
    //number 2 test
    string s2;
    vector<int> v2 = {2, 3};
    if(subsetSum(v, v2, 7) == 0){
         s2 = "false";
    }else{
        s2 = "true";
    }
    cout << "verify subset: " << s2 << endl;
    
    //number 3 test
    vector<int> factors = {2, 2, 3};
    string s3;
    if(primeFactorization(12, factors) == 0){
         s3 = "false";
    }else{
        s3 = "true";
    }
    cout << "prime factorization: " << s3 << endl;
    
    vector<int> factors2 = {2, 2, 4, 5};
    string s4;
    if(primeFactorization(86, factors) == 0){
         s4 = "false";
    }else{
        s4 = "true";
    }
    cout << "prime factorization: " << s4 << endl;
    
    return 0;
    
}
