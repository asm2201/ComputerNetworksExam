#include<iostream>
#include "CRC.h"
using namespace std;

int gen,msg;
int main()
{
    int msg_pass[20], msg_temp[20];
    int i, length_msg, length_gen, original_msg_len;
    cout << "Enter the message to be passed (in decimal):";
    cin >> msg;
    cout << endl;
    cout << "The message in binary number system is: ";
    decToBin(msg, msg_pass);
    length_msg = length;
    cout << "Enter the generator number/the divisor:(in decimal): ";
    cin >> gen;
    cout << endl;
    cout << "The binary value of generator is: ";
    int gen_r[6];
    decToBin(gen, gen_r);
    length_gen = length;
    for(int j = 0; j < length_msg; j++)
        msg_temp[j] = msg_pass[j];
    original_msg_len = length_msg;

    division(msg_pass, length_msg, gen_r, length_gen);

    i=0;
    while(msg_pass[i] != 1)
    {
        i++;
        if(i >= length_msg)
            break;
    }
    int r = original_msg_len;
    if(i < length_msg)
    {
        cout << "The CRC remainder is: ";
        for(int j = i; j < length_msg; j++)
        {
            cout << msg_pass[j]<<" ";
            msg_temp[r] = msg_pass[j];
            r++;
        }
        cout << endl;
    }
    cout << "The msg to be passed: ";
    for(i = 0; i < r; i++)
        cout << msg_temp[i] << " ";
    cout << endl;
    return 0;
}