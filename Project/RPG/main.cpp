/* 
 * File:   main.cpp
 * Author: Andy Garcia
 * Created on October 24, 2016, 12:37 AM
 * Purpose: Play a text-based RPG
 */

//System Libraries Here
#include <iostream> //Input/Output Objects
using namespace std;

//User Libraries Here

//Global Constants

//Function Prototypes
void House(int &input);
void Pond(int &input);
void Cook(int &input);
void Mines(int &input);
void Combat(int &input, int &weapon);
void RatFight(int &input, int &weapon);
void Bank(int &input);
void Magic(int &input);
void PracMag(int &input);
void End();

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input;
    
    cout<<"Welcome to this text-based RPG"<<endl;
    cout<<"1. Start"<<endl;
    cout<<"2. Exit"<<endl;
    cin>>input;
    
    //Starting the game
    while(input>2||input<1){
        cout<<"Error - Please select 1 or 2"<<endl;
        cout<<"1. Start"<<endl;
        cout<<"2. Exit"<<endl;
        cin>>input;
    }
    switch(input){
        case 1:             
            House(input);
        case 2:
            exit(0);         
    }
    //Exit
    return 0;
}

void House(int &input){
    cout<<"You wake up in a house and see a man. What do you want to do?"<<endl;
    cout<<"1. Talk to the man"<<endl;
    cout<<"2. Go Outside"<<endl;
    cout<<"3. End Game"<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    
    //Input Validation
    while(input>3||input<1){
        cout<<"Error - Invalid Value"<<endl;
        cout<<"1. Talk to the man"<<endl;
        cout<<"2. Go Outside"<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
    }
    switch(input){
        case 1:{
            cout<<"\n";
            cout<<"Guide: Greetings! I see you are a new arrival to this island. \n"
                    "My job is to welcome new visitors. So Welcome! \n"
                    "I see that you already know the first thing needed to \n"
                    "succeed in the world: Talking to other people. Contnue on \n"
                    "by leaving the house"<<endl;
            cout<<"\n";
            cout<<"1. Go Outside"<<endl;
            cin>>input;
            cout<<"-----------------------------------------"<<endl;
            //Input Validation
            while(input>2||input<1){
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"1. Go Outside"<<endl;
            cin>>input;
            cout<<"-----------------------------------------"<<endl;
            }
            if(input==1){
                Pond(input);
            }
        }
        case 2:
            Pond(input);
        case 3:
            exit(0);
    }
}

void Pond(int &input){
    int input2;
    cout<<"-----------------------------------------"<<endl;
    cout<<"You exit the house and follow a path down to a pond. You see a person"
            " nearby."<<endl;
    cout<<"\n";
    cout<<"Survival Expert: Greetings traveler, my job is to teach you a few "
            "survival tricks. First, we're going to start off with the most basic"
            " survival skill: Making a fire."<<endl;
    cout<<"The Survival Expert gives you a Tinderbox and an Axe."<<endl;
    cout<<"\n";
    cout<<"You see a nearby tree."<<endl;
    cout<<"1. Chop down tree."<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    while(input>1||input<1){
        cout<<"Error - No choice selected"<<endl;
        cout<<"1. Chop down tree."<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
    }
    if(input==1){
        cout<<"It takes you a couple of minutes but you chop the tree down. \n";
        cout<<"You obtain Logs. \n";
        cout<<"What would you like to do now? \n";
        cout<<"1. Open your Inventory"<<endl;
        cout<<"2. Talk to Survival Expert"<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
        while(input>2||input<1){
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"1. Open your Inventory"<<endl;
            cout<<"2. Talk to Survival Expert"<<endl;
            cin>>input;
            cout<<"-----------------------------------------"<<endl;            
        }
        if(input==1){
            cout<<"You have a Tinderbox and some Logs."<<endl;
            cout<<"1. Use Tinderbox with Logs"<<endl;
            cout<<"2. Exit Inventory"<<endl;
            cin>>input2;
            cout<<"-----------------------------------------"<<endl;
            while(input2>2||input2<1){
                cout<<"Error - Invalid Choice"<<endl;
                cout<<"1. Use Tinderbox with Logs"<<endl;
                cout<<"2. Exit Inventory"<<endl;
                cin>>input2;
            }
            if(input2==1){
                cout<<"\n";
                cout<<"You make a fire."<<endl;
                Cook(input);
            }
            if(input2==2){
                cout<<"1. Talk to Survival Expert"<<endl;
                cin>>input2;
                while(input2>1||input2<1){
                    cout<<"Error - Invalid Choice"<<endl;
                    cout<<"1. Talk to Survival Expert"<<endl;
                    cin>>input2;
                }
                if(input2==1){
                    cout<<"\n";
                    cout<<"Survival Expert: Nice job cutting the tree down. "
                    "Now you just use the tinderbox with the logs"<<endl;
                    cout<<"You use the tinderbox with the logs..."<<endl;
                    cout<<"You make a fire."<<endl;
                    Cook(input);
                }
                
            }
        }else if(input==2){
            cout<<"\n";
            cout<<"Survival Expert: Nice job cutting the tree down. \n"
                    "Now you just use the tinderbox with the logs"<<endl;
            cout<<"You use the tinderbox with the logs..."<<endl;
            cout<<"You make a fire."<<endl;
            Cook(input);
        }
    }   
}
void Cook(int &input){
    cout<<"\n";
    cout<<"Survival Expert: Congrats on your first fire. \n"
            "Now I'm going to show you how to cook, but first catch"
            " some shrimp first."<<endl;
    cout<<"The Survival Expert hands you a fishing net. \n";
    cout<<"\n";
    cout<<"\n";
    cout<<"You catch a 10 shrimp. What would you like to do?"<<endl;
    cout<<"1. Use the shrimp with the fire"<<endl;
    cout<<"2. Talk to the Survival Expert"<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    while(input>2||input<1){
        cout<<"Error - Invalid Choice"<<endl;
        cout<<"1. Use the shrimp with the fire"<<endl;
        cout<<"2. Talk to the Survival Expert"<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
    }
    switch(input){
        case 1:
            cout<<"You successfully cooked your shrimp."<<endl;
            cout<<"Survival Expert: Congrats on your first meal! You can now"
                    " move onto the next area."<<endl;
            cout<<"You continue down a path and find your at a ladder"<<endl;
            cout<<"\n";
            cout<<"-----------------------------------------"<<endl;
            Mines(input);
        case 2:
            cout<<"Survival Expert: Now you just cook the shrimp using the fire "
                    "that you made earlier. Allow me to show you."<<endl;
            cout<<"The Expert cooks some shrimp for you."<<endl;
            cout<<"\n";
            cout<<"Survival Expert: Ideally I would have wanted you to cook this but"
                    " you have your first meal so you can now"
                        " move onto the next area."<<endl;
                cout<<"You continue down a path and find yourself at a ladder"<<endl;
                cout<<"\n";
                cout<<"-----------------------------------------"<<endl;
                Mines(input);
    }
}

void Mines(int &input){
    int weapon;
    cout<<"You walk up and find the Mining Instructor"<<endl;
    cout<<"\n";
    cout<<"Mining Instructor: Hey newcomer, why don't you start by"
            " inspecting the nearby rocks and begin mining?"<<endl;
    cout<<"\n";
    cout<<"You see 2 different colored rocks nearby. You identify the rocks to "
            "be made up of copper and tin. You mine some copper and tin ore."<<endl;
    cout<<"\n";
    cout<<"Mining Instructor: Good job newcomer, I'll melt these ores into bronze bars"
            " for you. Now why don't you forge yourself a weapon"
            " a weapon to protect yourself"<<endl;
    cout<<"\n";
    cout<<"Please select a weapon to forge..."<<endl;
    cout<<"1. Dagger"<<endl;
    cout<<"2. Short sword"<<endl;
    cout<<"3. Two-Hand Sword"<<endl;
    cout<<"4. Scimitar"<<endl;
    cout<<"5. Axe"<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    while(input>5||input<1){
        cout<<"Error - Invalid Choice"<<endl;
        cout<<"Please select a weapon to forge..."<<endl;
        cout<<"1. Dagger"<<endl;
        cout<<"2. Short sword"<<endl;
        cout<<"3. Two-Hand Sword"<<endl;
        cout<<"4. Scimitar"<<endl;
        cout<<"5. Axe"<<endl;
        cin>>input;
    }
    switch(input){
        case 1:
            cout<<"Congrats on your first weapon, newcomer! Though, "
                    "I'm more of an axe user myself. Why don't you head over to"
                    "the combat instructor"<<endl;
            weapon=3;
            Combat(input,weapon);
        case 2:
            cout<<"Congrats on your first weapon, newcomer! Though, "
                    "I'm more of an axe user myself. Why don't you head over to"
                    "the combat instructor"<<endl;
            weapon=5;
            Combat(input,weapon);
        case 3:
            cout<<"Congrats on your first weapon, newcomer! Though, "
                    "I'm more of an axe user myself. Why don't you head over to"
                    "the combat instructor"<<endl;
            weapon=8;
            Combat(input,weapon);
        case 4:
            cout<<"Congrats on your first weapon, newcomer! Though, "
                    "I'm more of an axe user myself. Why don't you head over to"
                    "the combat instructor"<<endl;
            weapon=6;
            Combat(input,weapon);
        case 5:
            cout<<"I like your style. Nice choice of weapon, newcomer! Why don't "
                    "you head over to the combat instructor"<<endl;
            weapon=7;
            Combat(input,weapon);
    }
}

void Combat(int &input, int &weapon){
    cout<<"-----------------------------------------"<<endl;
    cout<<"You continue deeper into the Mines and find the Combat Instructor"<<endl;
    cout<<"\n";
    cout<<"Combat Instructor: Hey Newbie, I'm going to show you how to handle "
            "yourself in battle. First you need to equip your weapon"<<endl;
    cout<<"He hands you a short sword and shield"<<endl;
    cout<<"What weapon would you like to equip?"<<endl;
    cout<<"1. Short Sword"<<endl;
    cout<<"2. Forged Weapon"<<endl;
    cin>>input;
    while(input<1||input>2){
        cout<<"Error - Invalid Choice"<<endl;
        cout<<"What weapon would you like to equip?"<<endl;
        cout<<"1. Short Sword"<<endl;
        cout<<"2. Forged Weapon"<<endl;
        cin>>input;
    }
    if(input==1){
        weapon=5;
        cout<<"You equipped your short sword"<<endl;
    }
    if(input==2){
        weapon=weapon;
        cout<<"You equipped your forged weapon"<<endl;
    }
    cout<<"You also equip your shield"<<endl;
    cout<<"\n \n";
    cout<<"Combat Instructor: Now that you're ready to go, it's time to"
            " slay a giant rat that has been causing problems."<<endl;
    cout<<"\n";
    cout<<"You enter an area with a giant rat. \n";
    cout<<"-----------------------------------------"<<endl;
    RatFight(input,weapon);
    
}

void RatFight(int &input, int &weapon){
    int EHealth=20,damage;
    char choice;
    
    //Set value for damage
    damage=weapon;
    
    do{
        cout<<"Attack Giant Rat?(Y/N)"<<endl;
        cin>>choice;
        while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n'){   
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"Attack Giant Rat? (Y/N)"<<endl;
            cin>>choice;
        }
        if(choice=='Y'||choice=='y'){
            EHealth-=damage;        //Enemy Health decreases
            cout<<"You hit the rat. You deal "<<damage<<" damage"<<endl;
            cout<<"The rat has "<<EHealth<<" HP remaining"<<endl;
            cout<<"The rat attacks you but you block its attack."<<endl;
        }
        if(choice=='N'||choice=='n'){
            cout<<"You didn't attack the rat. The rat attacks you but you block"
                    "its attack."<<endl;
            cout<<"\n";
            cout<<"The Combat Instructors shouts 'You have to "
                    "attack it to continue!!'"<<endl;
        }
    }while(EHealth>0);
    cout<<"-----------------------------------------"<<endl;
    cout<<"You have defeated the Giant Rat!"<<endl;
    cout<<"Combat Instructor: Good work lad! That Giant Rat was causing us trouble"
            " for days. Continue on comrade..";
    cout<<"\n";
    cout<<"You continue on through the mines and reach another ladder... \n"
            "You climb up it"<<endl;
    cout<<"-----------------------------------------"<<endl;
    Bank(input);
}

void Bank(int &input){
    int input2,num;
    cout<<"You end up outside of a bank...You walk inside."<<endl;
    cout<<"\n";
    cout<<"Banker: Welcome to the Bank, I see it's your first time with us. So \n"
            " I'll show you the ropes. Firstly, you can desposit gold and items \n"
            "you have into the bank. These items can be accessed from any bank. \n"
            "Why don't you try despositing some items?"<<endl;
    cout<<"\n";
    cout<<"Please choose what you would like to deposit..."<<endl;
    cout<<"You have 0 gold"<<endl;
    cout<<"1. Gold "<<endl;
    cout<<"2. Items"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    while(input<1||input>3){
        cout<<"Error - Invalid Choice"<<endl;
        cout<<"1. Gold "<<endl;
        cout<<"2. Items"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
    }
    if(input==1){
        cout<<"You have no gold to deposit"<<endl;
        cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
    if(input==2){
        cout<<"Please choose an item to deposit..."<<endl;
        cout<<"1. Shrimp"<<endl;
        cout<<"2. Short sword"<<endl;
        cout<<"3. Forged Weapon"<<endl;
        cout<<"4. Shield"<<endl;
        cout<<"5. Tinderbox"<<endl;
        cout<<"6. Axe"<<endl;
        cin>>input2;
        cout<<"-----------------------------------------"<<endl;
        while(input2>6||input2<0){
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"Please choose an item to deposit..."<<endl;
            cout<<"1. Shrimp"<<endl;
            cout<<"2. Short sword"<<endl;
            cout<<"3. Forged Weapon"<<endl;
            cout<<"4. Shield"<<endl;
            cout<<"5. Tinderbox"<<endl;
            cout<<"6. Axe"<<endl;
            cin>>input2;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==1){
            cout<<"How much would you like to deposit?"<<endl;
            cout<<"You have 10 shrimp"<<endl;
            cin>>num;
            cout<<"-----------------------------------------"<<endl;
            while(num>10||num<0){
                cout<<"You don't have that many shrimp"<<endl;
                cin>>num;
            }
            cout<<"You have "<<(10-num)<<" shrimp remaining"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==2){
            cout<<"Short sword deposited"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==3){
            cout<<"Forged Weapon deposited"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==4){
            cout<<"Shield deposited"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==5){
            cout<<"Tinderbox deposited"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        if(input2==6){
            cout<<"Axe deposited"<<endl;
            cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
    }
    if(input==3){
        cout<<"Thank you for using the bank! We hope to see you again soon!"<<endl;
    }
    cout<<"\n";
    cout<<"You leave the bank and head towards a tower in the short distance"<<endl;
    cout<<"\n";
    cout<<"-----------------------------------------"<<endl;
    Magic(input);
}

void Magic(int &input){
    
    cout<<"You enter the tower find yourself in the prescence of a Wizard"<<endl;
    cout<<"\n";
    cout<<"Magic Tutor: Greetings young adventurer, you are nearly ready to face \n"
            "the world at large, but first you must learn how to use basic magic"<<endl;
    cout<<"You are handed 5 runes of wind and 5 runes of mind"<<endl;
    cout<<"Wizard: Try using magic on the chickens in the next room. Try not to \n"
            "run out runes. You consume 1 of each rune for each spell. \n"
            "Don't worry about harming them or getting hurt."<<endl;
    cout<<"\n";
    cout<<"You go to the next room and practice magic on the chickens."<<endl;
    PracMag(input);
}

void PracMag(int &input){
    int CHealth=15,damage=2,wRune=5,mRune=5;
    char choice;
    do{
        cout<<"Attack Chicken?(Y/N)"<<endl;
        cin>>choice;
        while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n'){   
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"Attack Chicken? (Y/N)"<<endl;
            cin>>choice;
        }
        if(choice=='Y'||choice=='y'){
            CHealth-=damage;
            cout<<"You deal "<<damage<<" to the chicken."<<endl;
            cout<<"The Chicken has "<<CHealth<<" HP remaining."<<endl;
            wRune--;
            mRune--;
            cout<<"-----------------------------------------"<<endl;
        }else if(choice=='N'||choice=='n'){
            cout<<"You hear the Wizard from the next room say 'You'll never make\n"
                    " it in the world if you can't bring yourself to "
                    "attack a chicken.'"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
    }while(wRune>0||mRune>0);
    cout<<"\n";
    cout<<"You have run out of runes. You walk back to the Magic Tutor"<<endl;
    cout<<"\n";
    cout<<"Magic Tutor: You must watch for how many runes you have otherwise in"
            " combat you're doomed."<<endl;
    cout<<"\n";
    cout<<"Magic Tutor: Anyways, would you like to continue attacking the"
            " chicken or leave to the main land?"<<endl;
    cout<<"1. Continue fighting previous chicken"<<endl;
    cout<<"2. Leave to the main land"<<endl;
    cin>>input;
    cout<<"-----------------------------------------"<<endl;
    while(input>2||input<1){
        cout<<"Error - Invalid Choice"<<endl;
        cout<<"1. Continue fighting previous chicken"<<endl;
        cout<<"2. Leave to the main land"<<endl;
        cin>>input;
        cout<<"-----------------------------------------"<<endl;
    }
    if(input==1){
        cout<<"The Magic Tutor hands you 5 more runes of each type."<<endl;
        wRune=5;
        mRune=5;
        cout<<"\n";
        do{
        cout<<"Attack Chicken?(Y/N)"<<endl;
        cin>>choice;
        cout<<"-----------------------------------------"<<endl;
        while(choice!='Y'&&choice!='y'&&choice!='N'&&choice!='n'){   
            cout<<"Error - Invalid Choice"<<endl;
            cout<<"Attack Chicken? (Y/N)"<<endl;
            cin>>choice;
            cout<<"-----------------------------------------"<<endl;
        }
        if(choice=='Y'||choice=='y'){
            CHealth-=damage;
            cout<<"You deal "<<damage<<" to the chiicken."<<endl;
            cout<<"The Chicken has "<<CHealth<<" HP remaining."<<endl;
            wRune--;
            mRune--;
            cout<<"-----------------------------------------"<<endl;
        }else if(choice=='N'||choice=='n'){
            cout<<"You hear the Wizard from the next room say 'You'll never make\n"
                    " it in the world if you can't bring yourself to "
                    "attack a chicken.'"<<endl;
            cout<<"-----------------------------------------"<<endl;
        }
        }while(CHealth>0);
        cout<<"------------------------------------------"<<endl;
        cout<<"Magic Tutor: Alright alright, I need you to leave. I can't have "
                "you hogging all of the chickens from other newcomers."<<endl;
        cout<<"\n";        
        cout<<"Magic Tutor: The world at large can be a dangerous place. By working "
                "with others, you can thrive in such a harsh world but be weary "
                "of who you keep for company. Good luck."<<endl;
        cout<<"\n";
        cout<<"The wizard uses his magic to teleport you to the main land."<<endl;
        End();
    
    }
    if(input==2){
        cout<<"Magic Tutor: The world at large can be a dangerous place. By working "
                "with others, you can thrive in such a harsh world but be weary "
                "of who you keep for company. Good luck."<<endl;
        cout<<"\n";
        cout<<"The wizard uses his magic to teleport you to the main land."<<endl;
        End();
    }
}

void End(){
    cout<<"\n";
    cout<<"-----------------------------------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"\n";
    cout<<"Thanks for Playing this text-based RPG"<<endl;
}