#include<iostream>
#include<string>

using namespace std;


/**
 * This function prints out the train numbers and their respective timings for the trains that go from
 * Bcourt to Sealdah
 */
void BcourtToSealdah()
{
    cout<<"\n\nTrains arriving/departing from Sealdah";
    cout<<"\n 1.Train no-13104 -> Lalgola-Sealdah MEMU Special 1";
    cout<<"\n 2.Train no-04184 -> Bhagirathi Express";
    cout<<"\n 3.Train no-03184 -> Lalgola_Sealdah Passanger Special 1";
    cout<<"\n 4.Train no-03190 -> Lalgola-Sealdah MEMU Special 2";
    cout<<"\n 5.Train no-03196 -> Lalgola-Sealdah Passanger Special 2";

    cout<<"\n\nTrains arriving/departing from Kolkata";
    cout<<"\n 6.Train no-13118 -> Dhano Dhanye Express";
    cout<<"\n 7.Train no-03194 -> Lalgola-Kolkata MEMU Special";
    cout<<"\n 8.Train no-13114 -> Hazarduari Express";

    cout<<"\n\nArrival and Departure time may vary!";
    cout<<"\nPlease refer to the Time table!\n";
}

/**
 * It prints the time of the train based on the train time
 * 
 * n the number of the train (options to choose form)
 */
void PrintTime(int n)
{
    if(n == 1)
    {
        cout<<"Selected -> 1.Train no-13104 -> Lalgola-Sealdah MEMU Special 1";
    }
    else if(n==2)
    {
        cout<<"Selected -> 2.Train no-04184 -> Bhagirathi Express";
    }
    else if(n==3)
    {
        cout<<"Selected -> 3.Train no-03184 -> Lalgola_Sealdah Passanger Special 1";
    }
    else if(n==4)
    {
        cout<<"Selected -> 4.Train no-03190 -> Lalgola-Sealdah MEMU Special 2";
    }
    else if(n==5)
    {
        cout<<"Selected -> 5.Train no-03196 -> Lalgola-Sealdah Passanger Special 2";
    }
    else if(n==6)
    {
        cout<<"Selected -> 6.Train no-13118 -> Dhano Dhanye Express";
    }
    else if(n==7)
    {
        cout<<"Selected -> 7.Train no-03194 -> Lalgola-Kolkata MEMU Special";
    }
    else if(n==8)
    {
        cout<<"Selected -> 8.Train no-13114 -> Hazarduari Express";
    }
    else{
        cout<<"Invalid  key!"<<endl;
    }
}

//main function
int main()
{
    //login part
    /* Printing the welcome message and asking the user to enter the choice of login. */
    cout<<"\n\n\n [---------Welcome to Ralway Reservation system---------] \n\n\n";
    cout<<"Press 1 for Login as an ADMIN\nPress 2 for login as an passanger\n\nEnter your Choice->\n";
    int input_user;
    cin>>input_user;
    
    //Admin part
    if(input_user == 1)
    {
        cout<<"You will be logged in as an ADMIN !\n Enter admin password to continue-> \n";

        /* This is a while loop that is used to check the password of the admin. */
        int password = 1010;
        int key;
        int key_limit = 2;

        bool flag = false;

        while(true)
        {
            cin>>key;
            
            if(key == password)
            {
                /* Printing the welcome message for the admin and asking the admin to enter the choice
                of options. */
                cout<<"\n You have logged in as an admin!\n\n                     [USER_TYPE]:[ADMIN]                     \n\n";
                
                cout<<"                     [WELCOME ADMIN!]                     \n\n1.Options->\n\n2.Exit\n";
                int key_opt;
                cin>>key_opt;
                //breakPoint1
                
                /* Asking the admin to choose the option of booking tickets or updating details. */
                if(key_opt == 1)
                {
                    cout<<"[-----OPTIONS-----]\n\n1.Book Tickets\n\n2.Update Details\n\n3.Exit\n";
                    int key_nxt;
                    cin>>key_nxt;

                    /* This is a if statement that is used to check if the user wants to book tickets
                    or not. */
                    if(key_nxt ==1)
                    {
                        cout<<"[-----BOOKING TICKETS-----]\n\n";
                        int no_of_seats = 200;
                        int seat_no = 1;

                        /* Taking input from the user. */
                        /* passenger name, station name */
                        while(no_of_seats!=0)
                        {
                            string name;
                            cout<<"Enter name of The passanger(firstName_LastName)\n";
                            cin>>name;
                                                       
                            cout<<"\nEnter Boarding Station\n";
                            cout<<"1.Lalgola -> LGL\n";
                            cout<<"2.Cossimbazar -> CSZ\n";
                            cout<<"3.Berhampore Court -> BPC\n";
                            cout<<"4.Beldanga -> BEB\n";
                            cout<<"5.Plassey -> PLY\n";
                            cout<<"6.Debagram -> DEB\n";
                            cout<<"7.Bethuadahari -> BTY\n";
                            cout<<"8.Krishnanagar -> KNJ\n";
                            cout<<"9.Ranaghat -> RHA\n";
                            cout<<"\nEnter Station Code to continue->\n\n";

                            string st;
                            cin>>st;
                             
                            cout<<"\nEnter Departing Station\n";
                            cout<<"1.Cossimbazar -> CSZ\n";
                            cout<<"2.Berhampore Court -> BPC\n";
                            cout<<"3.Beldanga -> BEB\n";
                            cout<<"4.Plassey -> PLY\n";
                            cout<<"5.Debagram -> DEB\n";
                            cout<<"6.Bethuadahari -> BTY\n";
                            cout<<"7.Krishnanagar -> KNJ\n";
                            cout<<"8.Ranaghat -> RHA\n";
                            cout<<"9.Sealdah -> SDAH\n";
                            cout<<"10.Kolkata -> KOAA\n";
                            cout<<"\nEnter Station Code to continue->\n\n";

                            string end;
                            cin>>end;
                            

                            /* Printing the available trains from Bcourt to Sealdah. */
                            cout<<"[-----Available Trains-----]\n";
                            BcourtToSealdah();
                            cout<<"select train-> \n";
                            int n;
                            cin>>n;


                            /* Asking the user to confirm the ticket. */
                            cout<<endl;
                            cout<<"\n1.Print ticket(confirm)\n\n2.Redo the process\n\n3.Exit\n";
                            int change;
                            cin>>change;

                            if(change == 1)
                            {
                                //printing ticket
                                cout<<"\n[---Ticket Detailes---]\n\n";
                                cout<<"Name of the Passanger-> "<<name<<"\nJourney From-> "<<st<<"\nJourny To-> "<<end<<"\nSeat no.-> "<<seat_no<<"\n";
                                
                                PrintTime(n);
                                
                                cout<<"\n\nHappy Journey!\n";

                                /* Decrementing the value of no_of_seats and incrementing the value of
                                seat_no. */
                                no_of_seats --;
                                seat_no++;
                                if(no_of_seats == 0)
                                {
                                    cout<<"Ticket Limit Exceeded\n";
                                    flag = true;
                                    break;
                                }
                                
                                cout<<"Press 0 for book another ticket & press 1 to exit\n";

                               /* Asking the user if they want to continue or not. */
                                int again;
                                cin>>again;
                                if(again == 0)
                                {
                                    continue;
                                }
                                if(again == 1)
                                {
                                    cout<<"Exited Successfully\n";
                                    flag =true;
                                    break;
                                }
                            }
                            // Error check
                            else if(change == 2)
                            {
                                cout<<"Oops! Something went wrong! \n"   ;                         
                            }
                            // Exiting confirm ticket screen
                            else if(change == 3)
                            {
                                cout<<"Exited Successfully\n";
                                break;
                            }
                        }  
                    }

                    /* Updation is invalid without any genarated ticket */
                    else if(key_nxt == 2)
                    {
                        //updating system::
                        cout<<"Updation of system currently Unavailabe!\n";
                        break;
                    }

                    /* Exiting the options screen */
                    else if(key_nxt == 3)
                    {
                        cout<<"Exited Successfully\n";
                        break;
                    }
                        
                }

                /* Exiting welcome admin screen */
                else if(key_opt == 2)
                {
                    cout<<"Exited Successfully\n";
                    break;
                }   
            }

           /* Breaking out of the loop. */
            if(flag == true)
            {
                break;
            }
            
            /* Checking if the key_limit is 0. If it is, it will print out the message "you don't have
            permission to login as an admin". */
            // For retrying purpose
            if(key_limit == 0)
            {
                
                cout<<"you don't have permission to login as an admin\n";
                break;
            }
            
           /* Checking if the password is correct or not. */
            else if(key !=password){
                key_limit--;
                cout<<"you entered wrong password\nEnter password again\n";
                
            }
        }

        
        
    }

    //Passanger login
   /* Asking the user to enter the choice of the user. */
    else if(input_user == 2)
    {
        cout<<"\nSuccessfully logged in as a passanger !\n\n                     [USER_TYPE]:[PASSENGER]                     \n\n";
        cout<<"                     [WELCOME PASSENGER!]                     \n\n";
        cout<<"1.Book Tickets\n\n2.Exit\n";
        int pass_key1 ;
        cin>>pass_key1;

        if(pass_key1 == 1)
        {
            //booking tickets
            cout<<"[-----BOOKING TICKET-----]\n\n";
                        int no_of_seats = 200;
                        int seat_no = 1;
                        
                        while(no_of_seats!=0)
                        {
                            /* Taking input from the user. */
                            string name;
                            cout<<"Enter name of The passanger(firstName_LastName)\n";
                            cin>>name;
                                                       
                            cout<<"\nEnter Boarding Station\n";
                            cout<<"1.Lalgola -> LGL\n";
                            cout<<"2.Cossimbazar -> CSZ\n";
                            cout<<"3.Berhampore Court -> BPC\n";
                            cout<<"4.Beldanga -> BEB\n";
                            cout<<"5.Plassey -> PLY\n";
                            cout<<"6.Debagram -> DEB\n";
                            cout<<"7.Bethuadahari -> BTY\n";
                            cout<<"8.Krishnanagar -> KNJ\n";
                            cout<<"9.Ranaghat -> RHA\n";
                            cout<<"\nEnter Station Code to continue->\n\n";
                            
                            string st;
                            cin>>st;
                             
                            cout<<"\nEnter Departing Station\n";
                            cout<<"1.Cossimbazar -> CSZ\n";
                            cout<<"2.Berhampore Court -> BPC\n";
                            cout<<"3.Beldanga -> BEB\n";
                            cout<<"4.Plassey -> PLY\n";
                            cout<<"5.Debagram -> DEB\n";
                            cout<<"6.Bethuadahari -> BTY\n";
                            cout<<"7.Krishnanagar -> KNJ\n";
                            cout<<"8.Ranaghat -> RHA\n";
                            cout<<"9.Sealdah -> SDAH\n";
                            cout<<"10.Kolkata -> KOAA\n";
                            cout<<"\nEnter Station Code to continue->\n\n";

                            string end;
                            cin>>end;
                            

                            /* Printing the available trains from Bcourt to Sealdah. */
                            cout<<"[-----Available Trains-----]\n";
                            BcourtToSealdah();
                            cout<<"select train \n";
                            int n;
                            cin>>n;


                            /* Printing the menu. */
                            cout<<endl;
                            cout<<"\n1.Print ticket(Confirm)\n\n2.Redo the process\n\n3.Exit\n";

                            int change;
                            cin>>change;
                            if(change == 1)
                            {
                                //Printing ticket
                                cout<<"\n[-----Ticket Detailes-----]\n\n";
                                cout<<"Name of the Passanger-> "<<name<<"\nJourney From-> "<<st<<"\nJourny To-> "<<end<<"\nSeat no.-> "<<seat_no<<"\n";
                                
                                PrintTime(n);
                                
                                cout<<"\n\nHappy Journey!\n";

                                /* Decrementing the value of no_of_seats by 1 and incrementing the
                                value of seat_no by 1. */
                                no_of_seats --;
                                seat_no++;
                                if(no_of_seats == 0)
                                {
                                    cout<<"Ticket Limit Exceeded\n";
                                    
                                    break;
                                }
                                
                                /* Asking the user to press 0 to book another ticket or press 1 to
                                exit. */
                                cout<<"Press 0 for book another ticket & press 1 to exit\n";
                                int again;
                                cin>>again;
                                /* Asking the user if they want to continue or exit
                                the program. */
                                if(again == 0)
                                {
                                    continue;
                                }
                                if(again == 1)
                                {
                                    cout<<"Exited Successfully\n";
                                    
                                    break;
                                }
                            }

                            /* Error check */
                            else if(change == 2)
                            {
                                cout<<"Oops! Something went wrong\n";                         
                            }

                           /* Exiting the options menu */
                            else if(change == 3)
                            {
                                cout<<"Exited Successfully\n";
                                break;
                            }
                        }
        }
        /* Exiting passenger login screen */
        else if(pass_key1 == 2)
        {
            cout<<"Exited successfully\n";
        }
    }
    // Finally the end of the program
    return 0;
}


