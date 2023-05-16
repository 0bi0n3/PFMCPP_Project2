#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 // Integer (1, 2, -3)
 int

 // Double (1.50123)
 double

 // Boolean (true/false)
 bool

 // Long (-900000)
long
 
 // Float (3.14159)
 float
 
 // Char ('h')
 char
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    // ----------------------------------------------
    // Integers
    int numberOfPlayers = 10;

    int daysLeft = 48;

    int totalAttending = 102;

    // Double
    double accountBalance = 1.4560004165;

    double mathPI = 3.14159;

    double qualityFactor = 2.22;
    
    // Boolean
    bool enteredBuilding = true;

    bool takenStairs = false;

    bool liftWorking = true;

    // Long
    long populationCountUK = 68905073;

    long wowClassicOnlinePlayers = 795024;

    long abletonLiveUsers = 2300000;
 
    // Float
    float damagePerSecond = 10.56488f;

    float timeToLoadFile = 0.4455f;

    float bitCoinValue = 59.00125f;
 
    // Char
    char maleIDLetter = 'M';

    char femaleIDLetter = 'F';

    char assignedGrade = 'b';    

    // ----------------------------------------------

    ignoreUnused(number, numberOfPlayers, daysLeft, totalAttending, accountBalance, mathPI, qualityFactor, enteredBuilding, takenStairs, liftWorking, populationCountUK, wowClassicOnlinePlayers, abletonLiveUsers, damagePerSecond, timeToLoadFile, bitCoinValue, maleIDLetter, femaleIDLetter, assignedGrade); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

int countTotalPlayersOnline(int playerIDNumber, bool playerOnline, int timeSinceLastLogin)
{
    ignoreUnused(playerIDNumber, playerOnline, timeSinceLastLogin);

    return {};
}

/*
 2)
 */

bool checkCollisionStatus(bool actorMoving, int surfaceType, float distanceMarker)
{
    ignoreUnused(actorMoving, surfaceType, distanceMarker);

    return {};
}
/*
 3)
 */

float getCurrentVolume(double inputSignal, float faderPosition)
{
    ignoreUnused(inputSignal, faderPosition);

    return {};
}
/*
 4)
 */

double dealDamage(double damagePerSec, char attackType, int attackTrig)
{
    ignoreUnused(damagePerSec, attackType, attackTrig);

    return {};
}

/*
 5)
 */

long displayPopulationTotal(int countryID, bool isPopCountAvailable)
{
    ignoreUnused(countryID, isPopCountAvailable);

    return {};
}

/*
 6)
 */

int runToLoctation(char weightCatagory, int distanceToTravelKM, double speedSpecOfShoes)
{
    ignoreUnused(weightCatagory, distanceToTravelKM, speedSpecOfShoes);

    return {};
}

/*
 7)
 */

float lpfAudioChannel(float inputStream, int filterType, int filterOrder)
{
    ignoreUnused(inputStream, filterType, filterOrder);

    return {};
}

/*
 8)
 */

double exportAudioFile(float audioOutputChannel, bool isAudioChannelSilent, int fileFormat)
{
    ignoreUnused(audioOutputChannel, isAudioChannelSilent, fileFormat);

    return {};
}

/*
 9)
 */

float delayAudioMasterChannel(float audioMasterInputChannel, double preDelay, double delayTime)
{
    ignoreUnused(audioMasterInputChannel, preDelay, delayTime);

    return {};
}

/*
 10)
 */

char stampIDWithCatagory(int idNumber, char cataoryType, bool checkIfAlreadyStamped, char overWriteStamp)
{
    ignoreUnused(idNumber, cataoryType, checkIfAlreadyStamped, overWriteStamp);

    return {};
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto playersOnline = countTotalPlayersOnline(200, true, 48);
    
    //2)
    auto collidedWithObject = checkCollisionStatus(true, 15, 12.44f);
    
    //3)
    auto volumeLevelNow = getCurrentVolume(44.100, 1.75f);
    
    //4)
    auto damageDone = dealDamage(15.9686, 's', 22);
    
    //5)
    auto selectedCountryPopulation = displayPopulationTotal(27, true);
    
    //6)
    auto moveToLocation = runToLoctation('L', 12, 49.774758);
    
    //7)
    auto filterChannelLP = lpfAudioChannel(12.5f, 2, 10);
    
    //8)
    auto saveAudioFile = exportAudioFile(16.0f, false, 5);
    
    //9)
    auto delaySFX = delayAudioMasterChannel(20.40f, 29.9999, 30.1230);
    
    //10)
    auto stampedDoc = stampIDWithCatagory(22, 'm', false, 'Y');

// ----------------------------------------------
   
    ignoreUnused(carRented, playersOnline, collidedWithObject, volumeLevelNow, damageDone, selectedCountryPopulation, moveToLocation, filterChannelLP, saveAudioFile, delaySFX, stampedDoc);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
