//11. WAP that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments

//Run this code via cmd(Windows) or Terminal(linux) and give the command line arguments along with your command

/*(for windows)paste the 11.cpp in bin directory and open the cmd in the same directory then type command= g++ 11.cpp -o "name that
you want to give(eg-hello)" then hit enter . Then type ./hello "command line arguments" then enter */

/*(for linux)open terminal in the directory where 11.cpp is present then type command=make 11 , hit enter then 
type ./11 "commandline arguments" and hit enter*/

//gaurav sharma
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    string inp;
    inp = argv[1];
    string g("abcdefghijklmnopqrstuvwxyz");
    string h("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    int count;
    int l = inp.length();
    for (int i = 0; i <= 25; i++)
    {
        count = 0;
        for (int k = 0; k < l; k++)
        {
            if (g[i] == inp[k] || h[i] == inp[k])
                count++;
        }
        cout << g[i] << " is " << count << " times" << endl;
    }
    cout<<endl<<argv[0];  //to see what argv[0] gives(it will give the name you mentioned in the command (./hello in this case)
    cout<<endl<<argv[argc];//to see what argv[argc] gives (it gives null character)
}
