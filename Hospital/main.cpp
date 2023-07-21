#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Patient
{

    deque<pair<string, int>> que; // make pair from deque to make vector from struct
    int spec;
    Patient()
    {
        spec = -1;
    }
    Patient(int _spec)
    {
        spec = _spec;
    }
    bool AddEnd(string name, int st)
    {
        auto item = make_pair(name, st);
        que.push_back(item);
        return true;
    }

    bool AddFront(string name, int st)
    {
        auto item = make_pair(name, st);
        que.push_front(item);
        return true;
    }

    void RemoveFront()
    {
        if (que.empty()) // que.size()==0
        {
            cerr << "No patients at the moment. Have rest, Dr\n";
            return;
        }
        auto item = que.front();
        que.pop_front();
        cerr << item.first << " please go with the Dr\n"; //(que.front()).first
    }

    void print()
    {
        if (que.size() == 0)
            return;
        cerr << "There are " << que.size() << " patients in specialization " << spec << "\n";
        for (auto it : que) // for (auto it = que.begin(); it != que.end(); ++it)
        {
            cerr << que.front().first << " ";
            if (que.front().second)
                cerr << "urgent\n";
            else
                cerr << "regular\n";
        }
    }
};

struct HospitalSystem
{
    vector<Patient> ques;

    HospitalSystem()
    {
        ques = vector<Patient>(21);

        for (int i = 0; i < 21; ++i)
            ques[i] = Patient(i); // to init vector to up 20  with index
    }

    bool add_patient()
    {
        int spec;
        string name;
        int st;

        cerr << "Enter specialization, name, status: ";
        cin >> spec >> name >> st;
        bool status;
        if (st == 0)
            status = ques[spec].AddEnd(name, st);
        else
            status = ques[spec].AddFront(name, st);

        // cerr<< "Sorry we can't add more patients for this specialization\n";

        return true;
    }

    void print_patients()
    {
        cout << "****************************\n";
        for (int spec = 0; spec < 21; ++spec)
            ques[spec].print();
    }

    void get_next_patients()
    {
        int spec;
        cout << "Enter specialization: ";
        cin >> spec;

        ques[spec].RemoveFront();
    }

    void run()
    {
        while (true)
        {
            int choice = menu();

            if (choice == 1)
                add_patient();
            else if (choice == 2)
                print_patients();
            else if (choice == 3)
                get_next_patients();
            else
                break;
        }
    }

    int menu()
    {
        int choice = -1;
        while (choice == -1)
        {
            cout << "\nEnter your choice:\n";
            cout << "1) Add new patient\n";
            cout << "2) Print all patients\n";
            cout << "3) Get next patient\n";
            cout << "4) Exit\n";

            cin >> choice;

            if (!(1 <= choice && choice <= 4))
            {
                cout << "Invalid choice. Try again\n";
                choice = -1; // loop keep working
            }
        }
        return choice;
    }
};

int main()
{
    HospitalSystem hospital = HospitalSystem();
    hospital.run();

    return 0;
}