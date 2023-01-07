#include <iostream>
using namespace std;
main()
{
    int hoursneeded;
    int numberofdays;
    int numberofworkers;
    float tenpercent;
    cout << "enter hours:";
    cin >> hoursneeded;
    cout << "enter number of days:";
    cin >> numberofdays;
    cout << "number of workers:";
    cin >> numberofworkers;
    int train = 10 * numberofworkers * numberofdays;
    tenpercent = train / 10;
    float hoursleft = train - tenpercent;

    if (hoursneeded > hoursleft)
    {

        float need = hoursneeded - hoursleft;
        cout << "no hours are not sufficient." << endl;
        cout << need << " hours needed";
    }
    if (hoursleft > hoursneeded)
    {
        cout << "hours are sufficient." << endl;
        float extra = hoursleft - hoursneeded;
        cout << extra << " hours are extra";
    }
}