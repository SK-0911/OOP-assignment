#include <iostream>
using namespace std;
class player
{
    public:
      string player;
      string region;
      float battingAvg;
      float bowlingAvg;
      void readData()
      {
        cout<<"Name of the player: ";
        cin>>player;
        cout<<"Name of the region: ";
        cin>>region;
        cout<<"Player's Batting Average: ";
        cin>>battingAvg;
        cout<<"Player's Bowling Average: ";
        cin>>bowlingAvg;
      }
      
      void generateList(int i, float bat, float bowl)
      {
        if(bat>30 && bowl<25)
          {
            //string list[5];
            //list[i] = player; 
            cout<<"Player "<<i+1<<": "<<player<<endl;
            
          }
      }

      void sortListBatting(float bat[5])
      {
        for(int j=0;j<5;j++)
        {
          for(int i=j+1; i<5; i++)
          {
            if(bat[j]>bat[i])
            {
              float temp = bat[j];
              bat[j] = bat[i];
              bat[i] = temp;
            }
          }
        }
        cout<<"Sorted Batting Average: \n";
        for(int j=0;j<5;j++)
        {
          cout<<bat[j]<<endl;
        }
      }
      void sortListBowling(float bowl[5])
      {
        for(int j=0;j<5;j++)
        {
          for(int i=j+1; i<5; i++)
          {
            if(bowl[j]>bowl[i])
            {
              float temp = bowl[j];
              bowl[j] = bowl[i];
              bowl[i] = temp;
            }
          }
        }
        cout<<"Sorted Bowling Average: \n";
        for(int j=0;j<5;j++)
        {
          cout<<bowl[j]<<endl;
        }
      }
};

int main() {
  player p[5], pl;
  float batting[5];
  float bowling[5];
  for(int j=0;j<5;j++)
  {
    p[j].readData();
    batting[j] = p[j].battingAvg;
    bowling[j] = p[j].bowlingAvg;
  }
  cout<<"\nPlayers who have Batting Average above 30 and Bowling average below 25\n";
  for(int k=0;k<5;k++)
  {
    p[k].generateList(k, p[k].battingAvg, p[k].bowlingAvg);
    //p[k].sortListBatting(p[k].battingAvg);
  }
  pl.sortListBatting(batting);
  pl.sortListBowling(bowling);
}
