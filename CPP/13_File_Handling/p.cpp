// #include<iostream>
// #include<fstream>

// using namespace std;
// int main(){
// 	string st="pri";
	
// 	//opening files using cons
// 	ofstream out("myfile.txt");//write operation
// 	out<<st;
// 	return 0;
// }

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	ifstream-read, ofstream-write, fstream - whatever you specify
    ofstream ob("myfile.txt");
    /*
    ofstream ob;
    ob.open("myfile.txt");
    */
    ob.put('*');
	ob.close();
	return 0;
}