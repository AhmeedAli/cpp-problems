#include <vector>
#include <iostream>
using namespace std;

class Room
{
private:
    int hight;
    int width;
    string color;

public:
    Room() : hight(0), width(0), color("white")
    { }
    void SetHight(int height)       { this->hight = height; }  
    void SetWidth(int witdh)        { this->width = witdh; }  
    void SetColor(string color)     { this->color = color; }   
      
    int        GetHight() { return hight;  }
    int        GetWidth() { return width;  }
     string     GetColor() { return color;  }


};

class Apartment
{
private:
    vector <Room> rooms;
    vector <Room> bathroom;
    int floor_no;
    int apart_no;

public:
    void SetApatmentNumber  (int apart_no)              { this->apart_no = apart_no; }  
    void SetFloorNumber     (int floor_no)              { this->floor_no = floor_no; }  
    void SetRoomsNumbers    (vector <Room> rooms)       { this->rooms = rooms; }
    void SetBathroomNumber  (vector <Room> bathroom)    {this->bathroom = bathroom;} 
      
    int             SetApatmentNumber() { return apart_no;  }
    int             SetFloorNumber   () { return floor_no;  }
    vector <Room>   SetRoomsNumbers  () { return rooms;     }
    vector <Room>   SetBathroomNumber() { return bathroom;  }


};

class Building {
private:
	vector<Apartment> apartments;
	
};

int main ()
{
    return 0; 
}