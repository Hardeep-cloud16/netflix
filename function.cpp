#include <iostream>
using namespace std;

int Balance = 100000;
int correctpin = 1234;

bool Checkpin()
{
    int enteredpin;
    int attempts = 0;

    while (attempts < 3)
    {
        cout << "Enter Your ATM PIN: ";
        cin >> enteredpin;

        if (enteredpin == correctpin)
        {
            return true;
        }
        else
        {
            cout << "❌ Incorrect PIN. Try again....\n";
        }
        attempts++;
    }

    cout << "❌ Too many incorrect attempts! Exiting...\n";
    return false;
}

int main()
{
    if (!Checkpin())
    {
        return 0;
    }

    int choice;

    while (true)
    {
        cout << "\n===== ATM Menu =====\n";
        cout << "1. 💰 Check Balance\n";
        cout << "2. 💸 Withdraw Money\n";
        cout << "3. 💵 Deposit Money\n";
        cout << "4. ⛳ Exit\n";

        cout << "Enter your Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "💳 Your current Balance is: $" << Balance << endl;
        }
        else if (choice == 2)
        {
            int amount;
            cout << "Enter amount to withdraw: $";
            cin >> amount;

            if (amount > Balance)
            {
                cout << "❌ Insufficient Balance\n";
            }
            else
            {
                Balance -= amount;
                cout << "💸 Withdrawal successful. New Balance: $" << Balance << endl;
            }
        }
        else if (choice == 3)
        {
            int amount;
            cout << "Enter amount to deposit: $";
            cin >> amount;

            Balance += amount;
            cout << " 💵 Deposit Successful. New Balance: $" << Balance << endl;
        }
        else if (choice == 4)
        {
            cout << "🙏 Thank you for using our ATM. Goodbye!\n";
            break;
        }
        else
        {
            cout << "⚠️ Invalid Choice. Please try again.\n";
        }
    }

    return 0;
}
