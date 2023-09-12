/*
#include <bits/stdc++.h>
using namespace std;
int main(){

    string s = "0P";
    string c = "";
        for(auto e : s){
            if(isalnum(e)){
                c = c + e;
            }
        }
        cout << c << endl;
        int l = c.length();
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        cout << c << endl;
        for(int i = 0; i < l/2; i++){
            if(c[i] != c[l-i-1]) {
                cout << "n";
                break;
            }
        }
        cout << "y";
    return 0;
}
*/

/*
class Solution {
public:
    bool isPalindrome(string s) {
        string c = "";
        for(auto e : s){
            if(isalnum(e)){
                c = c + e;
            }
        }
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        string g = c;
        reverse(c.begin(), c.end());
        if(g == c) return true;
        return false;
    }
};
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr;
    unordered_map<int, int> hashh;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
        hashh[arr[i]]++;
    }
    cout << "now" << endl;
    int q;
    cin >> q;
    cout << "now" << endl;
    while(q--){
        int number;
        cin >> number;
        cout << hashh[number] << endl;
    }
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    BankAccount(string name, int accNum, string acctype, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = acctype;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit of " << amount << " successful." << endl;
    }

    void displayBalance() {
        cout << "Account Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (accountType == "Saving"){
            if (amount > 25000){
                cout << "Maximum withdrawal amount for saving account is 25000." << endl;
                return;
            }
            if (balance - amount < 5000){
                cout << "Insufficient balance. Minimum balance for saving account is 5000." << endl;
                return;
            }
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful." << endl;
        } 
        else if (accountType == "Current") {
            if (amount > 50000) {
                cout << "Maximum withdrawal amount for current account is 50000." << endl;
                return;
            }
            if (balance - amount < 10000) {
                cout << "Insufficient balance. Minimum balance for current account is 10000." << endl;
                return;
            }
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful.\n";
        } 
        else cout << "Invalid account type." << endl;
    }

    void checkMinimumBalance() {
        double penalty = 0;
        if (accountType == "Saving") {
            if (balance < 5000) {
                penalty = 100;
                cout << "Penalty of 100 imposed due to insufficient minimum balance in saving account." << endl;
            }
        }
        else if (accountType == "Current") {
            if (balance < 10000) {
                penalty = 500;
                cout << "Penalty of 500 imposed due to insufficient minimum balance in current account." << endl;
            }
        }
        else cout << "Error: Invalid account type." << endl;
        balance -= penalty;
        return;
    }
};
*/
/*
// selection sort
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,5,6,3,1,4};
    int arrlen = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <= (arrlen-2); i++){
        int mini = i;
        for(int j = i; j <= (arrlen-1); j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i <= (arrlen - 1); i++) cout << arr[i];
    return 0;
}
*/
/*
// i prefer using this library as this one contain all modules -  pata nahi kab kaunse function ki jarurat pade
#include <bits/stdc++.h>
using namespace std;

class Complex {
    // private access modifier ke andar variable declare karna is good practice for security purpose
    private:
        float real;
        float imaginary;

    public:
    //constructor
        Complex(float r, float i) {
            real = r; // takes value of real part of the complex number
            imaginary = i; // takes value of imaginary part of complex number
        }
        // function to perform sum of complex number - pehlna number jo hai usko constructor me pass karke initialize kia then
        //dusra number function call me pass kia hai - complex mumber ka koi data type ni hota so usko class object me hi store kia hai isliye 
        // dono number ka class object banaya hai.
        Complex add(Complex c) {
            float newReal = real + c.real;// add real part of c2 in c1
            float newImaginary = imaginary + c.imaginary; // add imaginary part of c2 in c1
            return Complex(newReal, newImaginary);
        }

        void display() {
            cout << "Complex number : " << real << " + " << imaginary << "i" << endl;
        }
};
*/
/*
so how this program is working is pehle c1 se ek class object ban raha hai,,,,,then c2 se.....then ek third object sum se ban raha hai....
c1 me constructor se value de rahe....same with c2....sum me value add function dal raha hai.....
add function ka return statement ek aur constructor call kar raha hai and them wo value sum object ko assign ho rahi hai
*/
/*
int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.6);

    Complex sum = c1.add(c2);

    c1.display();
    c2.display();
    sum.display();

    return 0;
}
*/
/*
concatenation of two array try it later
#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums = {1,2,1};
    int n = nums.size();
    vector<int>ans;
    for(int i = 0; i < n; i++){
        ans[i] = nums[i]; // 0 , 1, 2
        ans[i+n] = nums[i]; // 3, 4, 5
    }
    for(auto it = ans.begin(); it != ans.end(); it++) {
        cout << * it;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    string address = "1.1.1.1";
    int n = address.size();
    string a = "";
    for(int i = 0; i < n; i++){
        if(address[i] >= char(48) && address[i] <= char()){
            a += address[i];
        }
        else if(i < n-1){
            a += "[.]";
        }
    }
    for(auto i : a) cout << i;
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

//brute force approach
vector<int> intersectionB(vector<int> & a, vector<int> & b, int n, int m){
    vector<int> ans;
    int v = min(n,m);
    int visited[v] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j] && visited[j] == 0){
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}
//optimal approach
vector<int> intersectionO(vector<int> & a, vector<int> & b, int n, int m){
    int i = 0;
    int j = 0;
    vector <int> ans;
    while(i < n && j < m){
        if(a[i] < b[j]) i++;
        else if(b[j] < a[i]) j++;
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int countValidWords(string sentence) {
        vector <string> temp;
        string str = "";
        int mainc = 0;
        for(int i = 0; i < sentence.size(); i++){
            if(sentence[i] != ' ') str += sentence[i];
            else if(sentence[i] == ' ' && str != ""){
                temp.push_back(str);
                str = "";
            }
            if(i == sentence.size()-1 && sentence[i] != ' '){
                temp.push_back(str);
                str = "";
            }
        }
        for(int i = 0; i < temp.size(); i++) cout << temp[i] << ",";
        for(int i = 0; i < temp.size(); i++){
            int ac = 0, pc = 0, hc = 0; 
            for(int j = 0; j < temp[i].size(); j++){
                if(isalpha(temp[i][j])) ac++;
                else if(temp[i][j] == '-' && (j > 0 && j < temp[i].size()-1) && (isalpha(temp[i][j-1]) && isalpha(temp[i][j+1]))) hc++;
                else if(temp[i][j] == '!' || temp[i][j] == '.' || temp[i][j] == ','){
                    if( j == temp[i].size()-1) pc++;
                }
            }
            if(ac+pc+hc == temp[i].size()) {
                if((hc <= 1) && (pc <= 1)) mainc++;
            }
        }
        return mainc;
}


int longestSubarrayWithSumKBF1(vector<int> a, long long k){
    int len = 0;
    for(int i = 0; i < a.size(); i++){
        for(int j = i; j < a.size(); j++){
            int sum = 0;
            for(int t = i; t <= j; t++){
                sum += a[t];
            }
            if(sum == k) len = max(len, j-i+1);
        }
    }
    return len;
}

int longestSubarrayWithSumKBF2(vector<int> a, long long k){
    int len = 0;
    for(int i = 0; i < a.size(); i++){
        int sum = 0;
        for(int j = i; j < a.size(); j++){
            sum += a[j];
            if(sum == k) len = max(len, j-i+1);
        }
    }
    return len;
}
//its most optimal with array containing positive negative and zero
//but not for positive only
int longestSubarrayWithSumKBET(vector<int> a, long long k){
    int n = a.size();
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }
        int rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

string categorizeBox(int length, int width, int height, int mass) {
        string ans = "";
        if((length >= pow(10,4) || width >= pow(10,4) || height >= pow(10,4)) && (mass >= 100)) ans = "Both";
        else if(((length*width*height) >= pow(10,9)) && (mass >= 100)) ans = "Both";
        else if((length*width*height) >= pow(10,9)) ans = "Bulky";
        else if(mass >= 100) ans = "Heavy";
        else ans = "Neither";
        return ans;
    }

int main(){

    //intersection problem
    /*
    int n;
    cout << "size of first array : ";
    cin >> n;
    int m;
    cout << "size of second array : ";
    cin >> m;
    vector<int> a(n);
    vector<int> b(m);
    cout << "elements of first array" << endl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "elements of second array" << endl;
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    vector<int> ans = intersectionO(a, b, n, m); // add "O" or "B" at end
    for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
    */
    string s = categorizeBox(1000,35,700,300);

    return 0;
}