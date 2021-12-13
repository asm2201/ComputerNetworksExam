#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void transmission(int &i, int &window_size, int &total_frames, int &total_transmissions){
    while(i <= total_frames)
    {
        int z = 0;
        for(int k = i; k < (i + window_size) && k <= total_frames; k++)
        {
            cout << "Sending frame " << k << "..." << endl;
            total_transmissions++;
        }
        for(int k = i; k < (i + window_size) && k <= total_frames; k++)
        {
            int f = rand()%2;
            if(!f)
            {
                cout << "Acknowledgment for frame " << k << " received..." << endl;
                z++;
            }
            else
            {   cout << "Frame number " << k << " not received..."<<endl;
                cout << "Retransmitting window..." << endl;
                break;
            }
        }
        cout << endl;
        i = i+z;
    }
}
int main()
{
    int total_frames, window_size, total_transmissions = 0, i = 1;
    srand(time(nullptr));
    cout<<"Enter the total number of frames: ";
    cin >> total_frames;
    cout << endl;
    cout<<"Enter the window size : ";
    cin >> window_size;
    cout << endl;
    transmission(i, window_size, total_frames, total_transmissions);
    cout << "Total number of frames which were sent and resent are : " << total_transmissions << endl;
    return 0;
}
