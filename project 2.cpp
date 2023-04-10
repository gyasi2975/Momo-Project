#include <iostream>
using namespace std;

int main() {
    const int defaultpin = 0000;
    int attempts = 0;
    int select;
    float reference;
    int option;
    int Yes;
    int No;
    int number_1;
    int number_2;
    double amount;
    int pin; 
    int c_pin;
    int new_pin;
    double balance, counter;
    string digits;
    balance=  1000.00;
    
    cout<<"WELCOME TO GYASI MOBILE MONEY SERVICE"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Reset/Change Pin"<<endl;
    cout<<"3.Send Money "<<endl;
    cout<<"4.Buy Airtime"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<"Choose an option"<< endl;
    cin>>select;
    
    if(select==1)
    {
        do{
            cout<<"Please enter your 4-digit PIN: "<<endl;
            cin>> pin;
            attempts++;
            if (pin != defaultpin){
                cout<<"Incorrect PIN. Please try again" <<endl;
            }
            else if (pin== defaultpin){
                cout<<"Your balance is GHS "<<balance<<endl;    
            }
        } while (pin != defaultpin && attempts <3);
        
        if(attempts>2){
            cout<<"Maximum attempts reached."<<endl; 
            cout<<"Exiting Program"<<endl;
        }
    }

    else if(select==2)
    {
        cout<<"Are you sure you want to change your PIN?"<<endl;
        cout<<"1.Yes\n2.No\n3.Exit"<<endl;
        cin>>option;
        if(option==1){
            cout<<"Enter old PIN: " <<endl;
            cin>>pin;
            attempts=0;
        do{
        	attempts++;
        	if(attempts>1){
        		cout<<"Incorrect PIN. Please try again."<<endl;
			}
			cout<<"Enter new PIN"<<endl;
			cin>>new_pin;
			if(new_pin==pin){
				cout<<"New PIN cannot be the same as the old pin"<< endl;
				new_pin=0;
			}
				}while (new_pin==0 || new_pin==pin);
				cout<<"Your new PIN is  " <<new_pin<<endl;
				pin=new_pin;
            
        }else if(option==2){
            cout<<"PIN change request cancelled."<<endl;
        }else if(option==3){
            cout<<"Exiting Program"<<endl;
            return 0;
        }else{
            cout<<"Invalid option selected."<<endl;
        }
    }
    else if(select==3)
    {
        cout<<"Enter mobile number: "<<endl;
        cin>>number_1;
        cout<<"Confirm mobile number: "<<endl;
        cin>>number_2; 
        if(number_1 != number_2)
        {
            cout<<"Number mismatch."<<endl;
            cout<<"Exiting Program"<<endl;
            return 0;
        }
    }
    else if(select==4)
    {
        cout<<"Enter mobile number: "<<endl;
        cin>>number_1;
        cout<<"Enter amount: "<<endl;
        cin>>amount;
        do{
            attempts++;
            cout<<"Please enter your PIN: "<<endl;
            cin>> pin;
            if (pin != defaultpin){
                cout<<"Incorrect PIN. Please try again" <<endl;
            }
            else if (pin== defaultpin){
                cout<<"You have successfully purchased GHS"<<amount<<" airtime for "<<number_1<<endl;
                balance -= amount;
                cout<<"Your current balance is GHS"<<balance<<endl;    
            }
        } while (pin != defaultpin && attempts <3);
        
        if(attempts>3){
            cout<<"Maximum attempts reached."<<endl; 
            cout<<"Exiting Program"<<endl;
            return 0;
        }
    }

    else if(select==5){
        cout<<"Exiting Program"<<endl;
    }
        
        return 0;
    }

