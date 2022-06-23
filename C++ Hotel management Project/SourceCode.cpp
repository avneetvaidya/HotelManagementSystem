#include <iostream>
using namespace std;

int main()
{
    cout<<  "   github.com/avneetvaidya    ";
    cout << "    HOTEL EXECUTION WELCOMES YOU    ";
    int quantity;
    int choice;
    // total quantity
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
    // total sold items
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
    // total price of items
    int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

    cout << "\n\t Quantity of items we have ";
    cout << "\n Rooms available :";
    cin >> Qrooms;

    cout << "\n Quantity of pasta :";
    cin >> Qpasta;

    cout << "\n Quantity of burger :";
    cin >> Qburger;

    cout << "\n Quantity of noodles :";
    cin >> Qnoodles;

    cout << "\n Quantity of shake :";
    cin >> Qshake;

    cout << "\n Quantity of chicken-roll :";
    cin >> Qchicken;

m:
    cout << "\n\t\t\t Please select from the menu options";
    cout << "\n\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chicken-roll";
    cout << "\n7) Information regarding sales and collection ";
    cout << "\n) Exit";

    cout << "\n\n Please Enter your choice";
    cin >> choice;

    switch (choice)
    {
    // rooms
    case 1:
        cout << "\n\n Enter the number of rooms you want : ";
        cin >> quantity;
        if (Qrooms - Srooms >= quantity)
        {
            Srooms = Srooms + quantity;
            Total_rooms = Total_rooms + quantity * 1200;
            cout << "\n\n\t\t" << quantity << "   room/rooms have been alotted to you!";
        }
        else
        {
            cout << "\n\tOnly" << Qrooms - Srooms << "Rooms remaining in hotel ";
            break;
            
        }
         
    // pasta
    case 2:
        cout << "\n\n Enter Pasta Quantity : ";
        cin >> quantity;
        if (Qpasta - Spasta >= quantity)
        {
            Spasta = Spasta + quantity;
            Total_pasta = Total_pasta + quantity * 250;
            cout << "\n\n\t\t" << quantity << "   Pasta is the Order!";
        }
        else
        {
            cout << "\n\tOnly" << Qpasta - Spasta << "Pasta remaining in hotel ";
            break;
        }
        

    // burger
    case 3:
        cout << "\n\n Enter burger Quantity : ";
        cin >> quantity;
        if (Qburger - Sburger >= quantity)
        {
            Sburger = Sburger + quantity;
            Total_burger = Total_burger + quantity * 300;
            cout << "\n\n\t\t" << quantity << "    burger is the Order!";
        }
        else
        {
            cout << "\n\tOnly" << Qburger - Sburger << "burger remaining in hotel ";
            break;
        }
        

    // noodles
    case 4:
        cout << "\n\n Enter noodles Quantity : ";
        cin >> quantity;
        if (Qnoodles - Snoodles >= quantity)
        {
            Snoodles = Snoodles + quantity;
            Total_noodles = Total_noodles + quantity * 220;
            cout << "\n\n\t\t" << quantity << "   noodles is the Order!";
        }
        else
        {
            cout << "\n\tOnly" << Qnoodles - Snoodles << "noodles remaining in hotel ";
           break;
        }
         

    // shake
    case 5:
        cout << "\n\n Enter shake Quantity : ";
        cin >> quantity;
        if (Qshake - Sshake >= quantity)
        {
            Sshake = Sshake + quantity;
            Total_shake = Total_shake + quantity * 410;
            cout << "\n\n\t\t" << quantity << "  shake is the Order!";
        }
        else
        {
            cout << "\n\tOnly" << Qshake - Sshake << "shake remaining in hotel ";
           break;
        }
         

    // chicken
    case 6:
        cout << "\n\n Enter chicken Quantity : ";
        cin >> quantity;
        if (Qchicken - Schicken >= quantity)
        {
            Schicken = Schicken + quantity;
            Total_chicken = Total_chicken + quantity * 180;
            cout << "\n\n\t\t" << quantity << "chicken-roll is the Order!";
        }
        else
        {
            cout << "\n\tOnly" << Qchicken - Schicken << "chicken - roll remaining in hotel ";
           break;
        }
         

    case 7:
        cout << "\n\t\tDetails of sales and collection ";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent " << Srooms;
        cout << "\n\n Remaining Rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day : " << Total_rooms;
        goto m;

        cout << "\n\n Number of pasta we had : " << Qpasta;
        cout << "\n\n Number of pasta we gave for rent " << Spasta;
        cout << "\n\n Remaining pasta : " << Qpasta - Spasta;
        cout << "\n\n Total pasta collection for the day : " << Total_pasta;
        goto m;

        cout << "\n\n Number of burger we had : " << Qburger;
        cout << "\n\n Number of burger we gave for rent " << Sburger;
        cout << "\n\n Remaining burger : " << Qburger - Sburger;
        cout << "\n\n Total burger collection for the day : " << Total_burger;
        goto m;

        cout << "\n\n Number of noodles we had : " << Qnoodles;
        cout << "\n\n Number of noodles we gave for rent " << Snoodles;
        cout << "\n\n Remaining noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total noodles collection for the day : " << Total_noodles;
        goto m; 
    
        cout << "\n\n Number of shake we had : " << Qshake;
        cout << "\n\n Number of shake we gave for rent " << Sshake;
        cout << "\n\n Remaining shake : " << Qshake - Sshake;
        cout << "\n\n Total burger collection for the day : " << Total_shake;
        goto m;

        cout << "\n\n Number of chicken-roll we had : " << Qchicken;
        cout << "\n\n Number of chicken-roll we gave for rent " << Schicken;
        cout << "\n\n Remaining chicken-roll : " << Qchicken - Schicken;
        cout << "\n\n Total chicken-roll collection for the day : " << Total_chicken;
        goto m;

        cout << "\n\n\n Total Collection for the day : " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
        break;

    case 8:
        exit(0);

    default:
        cout << "\n Please Select The Numbers Mentioned Above!";
    }

  
    system("pause");
    return 0;
}
