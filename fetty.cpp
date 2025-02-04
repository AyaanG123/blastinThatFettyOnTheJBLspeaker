// ayaan and neel and neel and neel and neel and neel
// 1/29/25
// blasting that fetty on the jbl speaker (ayy)
// 2D Vector

#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

void printVector(vector<vector<string>> playlist);

int main()
{
    // 2d vector containing both song artist and song name
    vector<vector<string>> playlist{{"Again", "Fetty Wap"}, {"679(feat.Remy Boyz)", "Fetty Wap (feat. Remy Boyz)"}, {"Trap Queen", "Fetty Wap"}, {"My Way (feat. Monty)", "Fetty Wap (feat. Monty)"}, {"Bando", "Playboi Carti"}, {"24 Songs", "Playboi Carti"}}; // song, artist
    int choice;
    int song;
    int times;
    string addition;
    string additionextra;
    char keepGoing = 'y';

    cout << "Welcome to Rizzify\n";
    while (keepGoing == 'y')
    {
        cout << "1. Select Song\n2. Add Song\n3. Play in Order\n4. Play Shuffle\n";
        cout << "What u finna do megatron";
        cin >> choice;

        switch (choice) // switch case to let user go through options
        {
        case 1:
            // select song
            printVector(playlist); // calls function
            cout << "Enter Song Number to play: ";
            cin >> song;

            cout << "Currently Playing: " << playlist[song - 1][0] << " by " << playlist[song - 1][1] << endl; // prints song
            // code to play song
            break;
        case 2:
            // add song
            cout << "Enter Song Addition: ";
            getline(cin, addition);
            cout << "Enter Artist: ";
            getline(cin, additionextra);
            cout << endl;
            playlist.push_back({addition, additionextra}); // push back adds to the end of the vector

            break;
        case 3:
            // play in order
            for (const auto &song : playlist)
            { // shortcut to loop through vectors
                cout << "Currently Playing: " << song[0] << " by " << song[1] << endl;
                // code to play audio file of the song

                time_t start_time = time(nullptr);
                while (difftime(time(nullptr), start_time) < 10) // pauses program for 10 seconds
                {
                }
            }
            break;
        case 4:
            // play in shuffle

            times = 0;
            while (times < playlist.size())
            {
                srand(time(0));
                int ranum = 0 + (rand() % playlist.size()); // creates random number between 0 and playlist length to iterate through

                cout << "Currently Playing: " << playlist[ranum][0] << " by " << playlist[ranum][1] << endl;
                // code to play audio file of the song

                time_t start_time = time(nullptr);
                while (difftime(time(nullptr), start_time) < 10)
                {
                }
                times++;
            }
            break;
        default:
            cout << "That is not an option, try again";
            break; // error trap
        }
        cout << "Would you like to keep going(y or n)? "; // loops through it again
        cin >> keepGoing;
    }

    return 0;
}

void printVector(vector<vector<string>> playlist) // simple function that prints all songs
{
    for (int i = 0; i < playlist.size(); i++)
    {
        cout << i + 1 << ". " << playlist[i][0] << " by " << playlist[i][1] << endl;
    }
}