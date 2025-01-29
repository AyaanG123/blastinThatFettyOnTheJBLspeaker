// ayaan and neel and neel and neel and neel and neel
// 1/29/25
// blasting that fetty on the jbl speaker (ayy)

#include <iostream>
#include <vector>
#include <ctime>
#include <string>

using namespace std;

void printVector(vector<vector<string>> playlist);

int main()
{
    vector<vector<string>> playlist{{"Again", "Fetty Wap"}, {"679(feat.Remy Boyz)", "Fetty Wap (feat. Remy Boyz)"}, {"Trap Queen", "Fetty Wap"}, {"My Way (feat. Monty)", "Fetty Wap (feat. Monty)"}, {"Bando", "Playboi Carti"}, {"24 Songs", "Playboi Carti"}}; // song, artist
    int choice;
    string addition;
    string additionextra;
    char keepGoing = 'y';

    while (keepGoing == 'y')
    {
        cout << "What u finna do megatron";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // select song
            int song;
            printVector(playlist);
            cout << "Enter Song Number to play: ";
            cin >> song;

            cout << "Currently Playing: " << playlist[song - 1][0] << " by " << playlist[song - 1][1] << endl;
            // code to play song
            break;
        case 2:
            // add song
            cout << "Enter Song Addition: ";
            getline(cin, addition);
            cout << "Enter Artist: ";
            getline(cin, additionextra);
            cout << endl;
            playlist.push_back({addition, additionextra});

            break;
        case 3:
            // play in order
            for (const auto &song : playlist)
            { // shortcut to loop through vectors
                cout << "Currently Playing: " << song[0] << " by " << song[1] << endl;
                // code to play audio file of the song

                time_t start_time = time(nullptr);
                while (difftime(time(nullptr), start_time) < 30)
                {
                }
            }
            break;
        case 4:
            // play in shuffle
            for (const auto &song : playlist)
            {
                srand(time(0));
                int ranum = 0 + (rand() % 5);

                cout << "Currently Playing: " << song[ranum] << " by " << song[ranum + 1] << endl;
                // code to play audio file of the song

                time_t start_time = time(nullptr);
                while (difftime(time(nullptr), start_time) < 30)
                {
                }
            }
            break;
        default:
            cout << "That is not an option, try again";
            break;
        }
        cout << "Would you like to keep going? ";
        cin >> keepGoing;
    }

    return 0;
}

void printVector(vector<vector<string>> playlist)
{
    for (int i = 0; i < playlist.size(); i++)
    {
        cout << i + 1 << ". " << playlist[i][0] << " by " << playlist[i][1] << endl;
    }
}