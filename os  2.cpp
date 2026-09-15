/*2. The Diary(Basic File I/O)*/

#include <fstream>
using namespace std;
int main()
{
std::ofstream file("diary.txt");
file<<"Hello OS\n";
file.close();
}
