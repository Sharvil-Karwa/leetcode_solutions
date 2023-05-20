#include <vector>
using namespace std;

class Bank {
public: 
    vector<long long> arr;

    Bank(vector<long long>& balance) {
        arr.push_back(0);
        for(auto i:balance) arr.push_back(i);
    }


    bool transfer(int account1, int account2, long long money) {
        if(account1<0 || account1>=arr.size() || account2<0 || account2>=arr.size()) return false;
        if (arr[account1] >= money) {
            arr[account1] -= money;
            arr[account2] += money;
            return true;
        } 
        return false;
    }
    
    bool deposit(int account, long long money) {
        if(account<0 || account>=arr.size()) return false;
        arr[account] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(account<0 || account>=arr.size()) return false;
        if (arr[account] >= money) {
            arr[account] -= money;
            return true;
        } 
        return false;
    }
};