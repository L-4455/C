/** 
 * @author: LiZhiHao
 * @Date: 2022-04-09 10:45:50
 * @LastEditTime: 2022-04-09 10:49:30
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    printf("helloworld");
}