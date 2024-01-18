#include <iostream>
#include <vector>
using namespace std;

class todo
{
public:
    vector<pair<string, string>> todolist;

    void addtask()
    {
        string taskname;
        cout << "\nEnter the task name:";
        cin >> taskname;
        string status="Pending";
        todolist.push_back({taskname, status});
    }

    void marking()
{
    
    if (!todolist.empty())
    {
        string taskname;
        cout << "Enter the task name to mark as complete:";
        cin >> taskname;

        for (auto &task : todolist)
        {
            if (task.first == taskname)
            {
                if (task.second!="Completed")
                {
                    task.second = "Completed";
                    cout << "Marking the task " << taskname << " as completed." << endl;
                }
                else
                {
                    cout << "Task " << taskname << " is already completed." << endl;
                }
                return;
            }
        }

        cout << "Task '" << taskname << "' not found in the todo list." << endl;
    }
    else
    {
        cout << "Todo list is empty." << endl;
    }
}

    

    void display()
    {
       for(const auto &task:todolist)
       {
        cout<<task.first<<" - "<<task.second<<endl;
       }
    }

    void deletetask()
    {
        string taskname;
        cout<<"\nEnter the task name to delete:";
        cin>>taskname;
        for (auto it = todolist.begin(); it != todolist.end();)
        {
            if (it->first == taskname)
            {
                cout << "Task deleted: " << it->first << endl;
                it = todolist.erase(it);
            }
            else{
                ++it;
            }
        }
    }

};

int main()
{
    todo t;
    int choice;
    

    do
    {
        cout << "\nChoose the appropriate option" << endl;
        cout << "1. Add tasks" << endl;
        cout << "2. Mark the task as completed" << endl;
        cout << "3. Delete a task" << endl;
        cout << "4. Show tasks" << endl;
        cout << "5. Exit" << endl;
        cout<<"\nEnter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            
            t.addtask();
            break;
        case 2:
           
            t.marking();
            break;
        case 3:
           
            t.deletetask();
            break;
        case 4:
            t.display();
            break;
        }
    } while (choice != 5);

    return 0;
}
