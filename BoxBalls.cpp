#include <iostream>
#include <vector>
#include <string>

using namespace std;

void show(string s)
    {
        for(auto & i : s)
            {
                cout<<i<<" ";
            };
        cout<<endl;
    };

void show(vector<int> v)
    {
        for(auto & i : v)
            {
                cout<<i<<" ";
            };
        cout<<endl;
    };

vector<int> minOperations(string boxes) 
    {
        cout<<"Foo get:\n";
        show(boxes);
        int SIZE = boxes.length();
        vector<int> answer(SIZE);
        int ia = 0;
        for(ia; ia < SIZE; ia++)
            {
                for(int ib = 0; ib < (SIZE-1); ib++)
                    {
                        while(!(boxes[ib])) ib++;        
                        answer.at(ia) += abs(ia - ib);
                        cout<<"ib = "<<ib<<"\nia = "<<ia<<endl;
                        show(answer);
                    };
            };
        return answer;
    };

int main()
    {
        string boxes = "110" ;
        vector<int> vec = minOperations(boxes);
        cout<<"Foo returned:\n";
        show(vec);
        return 0;
    }
