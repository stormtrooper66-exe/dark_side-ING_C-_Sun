#include <cstring>
#include <iostream>
#include <string>
#include <clocale>
#include <deque>
#include <vector>
using namespace std;
int utf8_to_unicode(deque<int> &coded)
{
    int charcode = 0;
    int t = coded.front();
    coded.pop_front();
    if (t < 128)
    {
        return t;
    }
    int high_bit_mask = (1 << 6) -1;
    int high_bit_shift = 0;
    int total_bits = 0;
    const int other_bits = 6;
    while((t & 0xC0) == 0xC0)
    {
        t <<= 1;
        t &= 0xff;
        total_bits += 6;
        high_bit_mask >>= 1;
        high_bit_shift++;
        charcode <<= other_bits;
        charcode |= coded.front() & ((1 << other_bits)-1);
        coded.pop_front();
    }
    charcode |= ((t >> high_bit_shift) & high_bit_mask) << total_bits;
    return charcode;
}
int main ()
{
    string str;
    getline(cin,str);
    vector<char> data(str.begin(), str.end());
    copy(str.begin(), str.end(), back_inserter(data));
    int colvo = data.size();
    double money = (colvo * 0.23f);
    cout << money << endl ;
    return 0;

}
/*string old_string;
  getline(cin,old_string);
  int colvo = old_string.size();
  int new_string = utf8_to_unicode(old_string);
  double money = (colvo * 0.23f);
  cout << money << endl ;


*/
