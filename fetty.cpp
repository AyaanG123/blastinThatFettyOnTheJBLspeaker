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

    cout << "What u finna do megatron";
    cin >> choice;

    switch (choice)
    {
    case 1:
        // select song
        // print vector
        // give choice
        // play song

        break;
    case 2:
        // add song
        cout << "Enter Song Addition: ";
        getline(cin, addition);
        cout << "Enter Artist: ";
        getline(cin, additionextra);
        cout << endl;
        playlist.push_back({addition, additionextra});
    case 3:
        // play in order
        printVector(playlist);
    case 4:
        // play in shuffle
        break;
    default:
        // code block
    }

    return 0;
}

void printVector(vector<vector<string>> playlist);
{
    for (int i = 0; i < playlist.size(); i++)
    {
        cout << i + 1 << ". " << playlist[i][0] << " by " << playlist[i][1] << endl;
    }
}