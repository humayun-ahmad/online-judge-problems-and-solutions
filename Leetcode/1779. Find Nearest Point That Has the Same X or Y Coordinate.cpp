#include <iostream>
#include <vector>

using namespace std;

int nearestValuePoint(int x, int y, vector<vector<int>>& points){
    int xx, yy, temp = 99999, length, index = 10000, checker = 0;
    for(int i = 0; i < points.size(); i++){
        for(int j = 0; j < points[i].size(); j++){
//            cout << points[i][j] << " ";
            if(x == points[i][0] || y == points[i][1]){
                return 0;
            }
            else if(x == points[i][0] || y == points[i][1]){
                checker = 1;
                length = abs(x-points[i][0]) + abs(y-points[i][1]);
                if(temp>length){
                    temp = length;
                    if(index>i){
                        index = i+1;
                    }
                }
            }


        }
    }

    if(checker == 0){
        return -1;
    }else{
        return index;
    }
}


int main()
{
    vector<vector<int>> v {{1,2},{3,1}, {2,4}, {2,3}, {4,4}};

    int x = 3, y = 4;

    cout << nearestValuePoint(x,y,v) <<endl;


    return 0;
}
