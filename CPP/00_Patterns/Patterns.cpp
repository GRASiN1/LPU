// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 0; i < 5; i++){
//         for(int s = 0; s < 5-i-1; s++){
//             cout << " ";
//         }
//         for(int j = 0; j <= i; j++){
//             cout << "*";
//         }
//         for(int l = 0; l < i; l++){
//             cout << '*';
//         }
//         cout << endl;
//     }
//     for(int i = 4; i >= 0; i--){
//         for(int s = 0; s < 5-i-1; s++){
//             cout << " ";
//         }
//         for(int j = i; j >= 0; j--){
//             cout << "*";
//         }
//         for(int l = i; l > 0; l--){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 0; i <= 5; i++){
//         for(int j = 0; j < i; j++){
//             cout << "*";
//         }
//     cout << endl;
//     }
//     for(int i = 1; i <= 4; i++){
//         for(int j = 4; j>= i ; j--){
//             cout << "*";
//         }
//     cout << endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 1; i <= 5; i++){
//         for (int j = 1; j <= i; j++){
//             if((i%2 == 0) && (j%2 == 0)){
//                 cout << '1';
//             }
//             else if((i%2 != 0) && (j%2 != 0)){
//                 cout << '1';
//             }
//             else if((i%2 != 0) && (j%2 == 0)){
//                 cout << '0';
//             }
//             else{
//                 cout << '0';
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 0; i <= 4; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j;
//         }
//         for(int j = 0; j < 4-i; j++){
//             cout << " ";
//         }
//         for(int j = 0; j < 4-i; j++){
//             cout << " ";
//         }
//         for(int j = i; j >= 1; j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k = 1;
//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j <= i; j++){
//             cout << k++ << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i = 5; i > 0; i--){
//         int k = 65;
//         for (int j = i; j >= 1; j--){
//             cout << char(k++) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int k = 65;
//     for (int i = 0; i < 5; i++){
//         for (int j = 0; j <= i; j++){
//             cout << char(k) << " ";
//         }
//         k++;
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 0; i < 4; i++){
//         for(int s = 0; s < (4-i); s++){
//             cout << " ";
//         }
//         char ch = 'A';
//         int breakpoint = (2*i+1)/2;
//         for(int j=1;j<=2*i+1;j++){
//             cout<<ch;
//             if(j <= breakpoint) ch++;
//             else ch--;
//         }
//         cout << endl;
//     }
//     return 0;
// } 


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i = 0; i <= 4; i++){
//         for(char ch = ('A'+4)-i; ch <= ('A'+4); ch++){
//             cout << ch;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i =0; i < 10; i++){
//         int mid = 5-i;
//         for(int j = 0; j < 10; j++){
//             if((i == 0) || (i == 9)){
//                 cout << "*";
//             }
//             else if(j == 0 || j == 9){
//                 cout << "*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int v = 4;
//     int mid = 3;
//     for(int i =0; i < 7; i++){
//         for(int j = 0; j < 7; j++){
//             if((i == mid-3) || (i == mid+3)){
//                 cout << v << " ";
//             }
//             else if(j == mid-3 || j == mid+3){
//                 cout << v << " ";
//             }
//             else if(i == mid-2 || i == mid+2){
//                 cout << v-1 << " ";
//             }
//             else if(j == mid-2 || j == mid+2){
//                 cout << v-1 << " ";
//             }
//             else if(i == mid-1 || i == mid+1){
//                 cout << v-2 << " ";
//             }
//             else if(j == mid-1 || j == mid+1){
//                 cout << v-2 << " ";
//             }
//             else if(i == mid || i == mid){
//                 cout << v-3 << " ";
//             }
//             else if(j == mid || j == mid){
//                 cout << v-3 << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i = 0; i < 5; i++){
//         for(int j = 5-i; j >= 1 ; j--){
//             cout << "*";
//         }
//         for(int s = 0; s < i; s++){
//             cout << " ";
//         }
//         for(int s = 0; s < i ; s++){
//             cout << " ";
//         }
//         for(int j = 5-i; j >= 1 ; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 4; i >= 0; i--){
//         for(int j = 1; j <= 5-i ; j++){
//             cout << "*";
//         }
//         for(int s = i; s > 0; s--){
//             cout << " ";
//         }
//         for(int s = i; s > 0; s--){
//             cout << " ";
//         }
//         for(int j = 1; j <= 5-i ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i = 5; i >= 0; i--){
//         for(int j = 1; j <= 5-i ; j++){
//             cout << "*";
//         }
//         for(int s = i; s > 0; s--){
//             cout << " ";
//         }
//         for(int s = i; s > 0; s--){
//             cout << " ";
//         }
//         for(int j = 1; j <= 5-i ; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i < 5; i++){
//         for(int j = 5-i; j >= 1 ; j--){
//             cout << "*";
//         }
//         for(int s = 0; s < i; s++){
//             cout << " ";
//         }
//         for(int s = 0; s < i ; s++){
//             cout << " ";
//         }
//         for(int j = 5-i; j >= 1 ; j--){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


/* PATTERNS BUT GENERALISED */


// 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//		for(int j = 1; j <= i; j++){
// 			cout << "* ";
// 		}
// 		cout << endl;
// 	}
//     return 0;
// }


//3

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     int k = 1;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << k << " ";
//         }
//         k++;
//         cout << endl;
//     }
//     return 0;
// }

//5

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of  n : ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//6

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 1; j <= n-i; j++){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//7
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of  n : ";
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/


//8
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter value of n : ";
    cin >> n;
    for(int i = n; i > 0; i--){
		for(int s = n-i; s > 0; s--){
			cout << " ";
		}
		for(int j = 2*i-1; j > 0; j--){
			cout << "*";
		}
		cout << endl;
    }
    return 0;
}
*/


//9
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of  n : ";
    cin >> n;
    int k = 0;
	for(int i = 1; i <= n; i++){
		for(int s = 1; s <= n-i; s++){
			cout << " ";
		}  
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		cout << endl;
	}
	for(int i = n; i >= 1; i--){
		for(int s = 1; s <= n-i; s++){
			cout << " ";
		}
		for(int j = i; j >= 1; j--){
			cout << "* ";
		}
		cout << endl;
	}
    return 0;
}
*/


//10

// #include<iostream>
// using namespace std;
// int main(){
//     cout << "Enter value of n : ";
//     int n;
//     cin >> n;
//     for(int i = 0; i < 2*n; i++){
//         int k = i;
//         if(i>n) k = 2*n-i;
//         for(int j = 0; j < k; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//11

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     int v = 1;
//     for(int i = 0; i < n; i++){
//         if(i%2 == 0) v = 1;
//         else v= 0;
//         for(int j = 0; j <= i; j++){
//             cout << v;
//             v = 1-v;
//         }
//         cout << endl;
//     }
//     return 0;
// }


//12
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int j = 1; j <= (n - i) * 2; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= (n - i) * 2; j++)
		{
			cout << " ";
		}
		for (int j = i; j >= 1; j--)
		{
			cout << j << " ";
		}
		cout << endl;
    }
	return 0;
}
*/


//13
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k{1};
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << k << " ";
			k++;
		}
		cout << endl;
	}
	return 0;
}
*/


//14
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 65; i <= (n+65); i++){
		for(int j = 65; j <= i; j++){
			cout << char(j);
		}
		cout << endl;
	}
	return 0;
}
*/


//15
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = (65+n); i >= 65; i--){
		for(int j = 65; j <= i; j++){
			cout << char(j);
		}
		cout << endl;
	}
	return 0;
}
*/


//16
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 65; i <= (65+n); i++){
		for(int j = 65; j <= i; j++){
			cout << char(i);
		}
		cout << endl;
	}
	return 0;
}
*/


//17
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int k{65};
		for(int s = 0; s < n-i-1; s++){
			cout << " ";
		}
		for(int j = 1; j <= 2*i+1; j++){
			cout << char(k);
			if(j <= (2*i/2)){
				k++;
			}
			else{
				k--;
			}
		}
		cout << endl;
	}
	return 0;
}
*/


//18
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = (65+n-1); j >= (65+n-1)-i; j--){
			cout << char(j) << " ";
		}
		cout << endl;
	}
	return 0;
}
*/


//19
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n-i ; j++){
            cout << "*";
        }
        for(int s = 0; s < 2*i; s++){
            cout << " ";
        }
        for(int j = 0; j < n-i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j <= i ; j++){
            cout << "*";
        }
        for(int s = 2*(n-1-i); s > 0; s--){
            cout << " ";
        }
        for(int j = 0; j <= i ; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/
// also 19
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int t;
        for (int i = 1; i <= 2 * n; i++){
            t = i <= n ? n - i + 1 : i - n;
            
            for (int j = t; j >= 1; j--){
                cout << "*";   
            }
            for (int j = 0; j <= 2* n - 2* t - 1; j++){
                cout << " ";
            }
            for (int j = t; j >= 1; j--){
                cout << "*";   
            }
            cout << endl;
        }
	return 0;
}
*/


//20
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int spaces = 2*n-2;
    for (int i = 1; i < 2*n; i++){
		int stars = i;
		if(i > n) stars = 2*n - i;
		for(int j = 1; j <= stars; j++){
			cout << "*";
		}
		
		for(int j = 1; j <= spaces; j++){
			cout << " ";
		}

		for(int j = 1; j <= stars; j++){
			cout << "*";
		}
		cout << endl;
		if(i < n) spaces -= 2;
		else spaces += 2;
	}
	return 0;
}
*/


//21
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == 1 || i == n){
				cout << "*";
			}
			else if (j == 1 || j == n){
				cout << "*";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
*/


//22
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 0; i < 2*n-1; i++){
		for(int j = 0; j < 2*n-1; j++){
			int top = i;
			int left = j;
			int right = (2*n - 2) - j;
			int bottom = (2*n - 2) - i;
			cout << (n-min(min(top,bottom), min(left,right))) << " ";
		}
		cout << endl;
	}
	return 0;
}
*/