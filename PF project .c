#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Module 3:
void motivation(void);
void motivation(void){
        srand(time(NULL));
    int randomNum;
    randomNum = (rand()%20);


    char motivationalLines[][100] = {
    "Believe in yourself!",
    "You can do it!",
    "Never give up.",
    "Dream big and dare to fail.",
    "Stay positive, work hard, make it happen.",
    "Success is the sum of small efforts repeated daily.",
    "Your only limit is your mind.",
    "Push yourself, because no one else is going to do it for you.",
    "Don’t watch the clock; do what it does—keep going.",
    "The harder you work for something, the greater you'll feel when you achieve it.",
    "Do something today that your future self will thank you for.",
    "Little by little, one travels far.",
    "Difficult roads often lead to beautiful destinations.",
    "Believe you can and you're halfway there.",
    "Your passion is waiting for your courage to catch up.",
    "Don’t stop when you’re tired; stop when you’re done.",
    "Great things never come from comfort zones.",
    "Failure is the opportunity to begin again more intelligently.",
    "It always seems impossible until it’s done.",
    "Start where you are. Use what you have. Do what you can."
};

    char motivationalLineElem[100];
    strcpy(motivationalLineElem,motivationalLines[randomNum]);
    printf("%s", motivationalLineElem);

    char command[200];
    sprintf(command, "espeak -s 150 \"%s\"", motivationalLineElem);
    system(command);

}

// Module 2:
void greetings(void);
void greetings(void){
    srand(time(NULL));

    int randomnum = rand() % 20;  // FIXED: valid index 0–19
    
    char greetings[][100] = {
        "Hello!",
        "Hi there!",
        "Hey!",
        "Greetings!",
        "Good morning!",
        "Good afternoon!",
        "Good evening!",
        "Welcome!",
        "Nice to meet you!",
        "How's it going?",
        "What's up?",
        "How are you?",
        "Pleasure to meet you!",
        "Great to see you!",
        "Howdy!",
        "Yo!",
        "Hi!",
        "Hey there!",
        "Long time no see!",
        "Good to see you!"
    };

    char name[100];

    system("espeak \"Enter Your Name\"");
    printf("Enter your name: \n");

    fgets(name,100,stdin);
    name[strcspn(name, "\n")] = '\0';  // FIXED newline issue

    char temp[200];
    strcpy(temp, greetings[randomnum]);
    strcat(temp, " ");
    strcat(temp, name);

    printf("%s\n", temp);

    char command[300];
    sprintf(command, "espeak \"%s\"", temp);
    system(command);
}

// Module 6:
void speakDateAndTime(void);
void speakDateAndTime(void){
    time_t currentTime;
    time(&currentTime);
    char dateAndTime[100];
    strcpy(dateAndTime, ctime(&currentTime));
    char command[200];
    sprintf(command, "espeak -s 120 \"%s\"",dateAndTime);
    printf("Current time: %s", dateAndTime);
    system(command);
    
}


// Module 4: 
void jokes(void);
void jokes(void){
     srand(time(NULL));
    int randomNum;
    randomNum = (rand()%20);


    char jokes[][300] = {
    "I told my wife she should embrace her mistakes. She hugged me.",
    "I asked the librarian if the library had books on paranoia. She whispered, \"They're right behind you.\"",
    "I told my computer I needed a break, and it locked me out. Rude.",
    "I started a band called 999 Megabytes - we haven't gotten a gig yet.",
    "I accidentally handed my wife a glue stick instead of chapstick. She still isn't talking to me.",
    "I told my dog a joke. Now he's laughing at my life choices.",
    "I used to think I was indecisive, but now I'm not sure.",
    "I tried to grab the fog yesterday. Mist.",
    "Why don't graveyards ever get overcrowded? People are dying to get in.",
    "I told my fridge a joke. It was too cool to laugh.",
    "I told my wife she should put on some makeup to look beautiful. She looked at me and said, \"I was born like this.\"",
    "I threw a boomerang a few years ago. I now live in constant fear.",
    "I told my therapist about my fear of commitment. She hasn't called me back.",
    "I saw an ad for burial plots, and thought: 'That's the last thing I need!'",
    "I told my boss I needed a raise. He told me I was already outstanding at lying.",
    "I asked the elevator if it wanted to hear a joke. It said, \"I'll let you down easy.\"",
    "I wanted to be a doctor, but I didn't have the patients.",
    "I told my neighbor she was bad at math. She said, 'That's not even a problem.'",
    "I invented a new word: Plagiarism.",
    "I'm reading a book about anti-gravity. I can't put it down... still floating."
};


    char jokesElem[300];
    strcpy(jokesElem,jokes[randomNum]);
    

    char command[300];
    sprintf(command, "espeak -s 150 \"%s\"", jokesElem);
    system("espeak \"Let me tell you a joke\"");
    printf("%s", jokesElem);
    system(command);
}

// Module 5:
void riddles(void);
void riddles(void){
    
    srand(time(NULL));
    int randomNum;
    randomNum = (rand()%20);


    // Array of 20 tricky riddles
char riddles[][300] = {
    "I speak without a mouth and hear without ears. I have nobody, but I come alive with the wind. What am I?",
    "You measure my life in hours and I serve you by expiring. I'm quick when I'm thin and slow when I'm fat. What am I?",
    "I have cities, but no houses; forests, but no trees; and water, but no fish. What am I?",
    "What has to be broken before you can use it?",
    "I'm tall when I'm young, and I'm short when I'm old. What am I?",
    "What has keys but can't open locks?",
    "What is seen in the middle of March and April that can't be seen at the beginning or end of either month?",
    "You see a boat filled with people, yet there isn't a single person on board. How is that possible?",
    "What can travel around the world while staying in a corner?",
    "What has a head, a tail, is brown, and has no legs?",
    "The more of this there is, the less you see. What is it?",
    "I'm found in socks, scarves and mittens; and often in the paws of playful kittens. What am I?",
    "What has one eye, but can't see?",
    "I'm always running, but never get tired or hot. What am I?",
    "What can you break, even if you never pick it up or touch it?",
    "I'm light as a feather, yet the strongest man can't hold me for much more than a minute. What am I?",
    "I have branches, but no fruit, trunk or leaves. What am I?",
    "What begins with T, ends with T, and has T in it?",
    "What comes once in a minute, twice in a moment, but never in a thousand years?",
    "I'm not alive, but I can grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I?"
};

// Array of corresponding answers
char riddleAnswers[][100] = {
    "An echo",
    "A candle",
    "A map",
    "An egg",
    "A candle",
    "A piano",
    "The letter R",
    "All the people are married",
    "A stamp",
    "A coin",
    "Darkness",
    "Yarn",
    "A needle",
    "A river",
    "A promise",
    "Breath",
    "A bank",
    "A teapot",
    "The letter M",
    "Fire"
};

    

    char riddlesElem[300];
    char riddlAnsElem[300];
    strcpy(riddlesElem,riddles[randomNum]);
    strcpy(riddlAnsElem,riddleAnswers[randomNum]);
    printf("%d",randomNum);
    

    char command[300];
    sprintf(command, "espeak -s 150 \"%s\"", riddlesElem);
    system("espeak -s 160 \"Solve this Riddle\"");
    printf("%s\n", riddlesElem);
    system(command);

    system("espeak \"Enter Your Answer and Write the word \"answer\" if you want the answer to the riddle\"");
    char answer[100];
    fgets(answer,100,stdin);
    answer[strcspn(answer, "\n")] = '\0';
    if(strcmp(answer, "answer")==0){
        printf("%s",riddlAnsElem);
        sprintf(command, "espeak -s 150 \"%s\"", riddlAnsElem);
        system(command);
    }
    else{

        if(strcmp(answer, riddlAnsElem)==0){
            system("espeak \"Bingo! You are absolutely right!\"");
        }
        else{
            system("espeak \"Sorry Wrong Answer!\"");
        }
    }
}


int main()
{
    // Welcome Texts:
    char welcomingText[100] = "Welcome, To the most advanced Text-to-Speech converter";
    char commandwelcomingText1[200];
    sprintf(commandwelcomingText1, "espeak -s 180 \"%s\"", welcomingText);
    system(commandwelcomingText1);

    while(1){

    

    char welcomingText2[100] = "Please proceed to the menu";
    char commandwelcomingText2[200];
    sprintf(commandwelcomingText2, "espeak -s 180 \"%s\"", welcomingText2);
    system(commandwelcomingText2);

    // Menu Design & Display:
    printf("Enter \'1\' for: Text-to-Speech Converter \nEnter \'2\' for: Greetings\nEnter \'3\' for: Daily Motivation \nEnter \'4\' for: Fun & Play\nEnter \'5\' to: Challenge Yourself \nEnter \'6\' for: Current Date & Time\n");
    int optionNumber;
    printf("Enter the Option Number below: \n");
    scanf("%d", &optionNumber);
    getchar();
    while (optionNumber < 1 || optionNumber > 6)
    {
        printf("Enter the Option Number in the range of (1-4) below: \n");
        scanf("%d", &optionNumber);
    }
    if (optionNumber == 1)
    {
        char text[100];
        char command[200];

        system("espeak \"\"");

        printf("Enter the text: \n");
        system("espeak \"Enter the text or enter quit if you want to quit the program: \n\"");
        while (1)
        {

            if (fgets(text, sizeof(text), stdin) == NULL)
                break;
            text[strcspn(text, "\n")] = '\0';

            if (strcmp(text, "quit") == 0)
            {
                system("espeak -s 190 \"Quitting the program\"");
                break;
            }

            sprintf(command, "espeak \"%s\"", text);
            system(command);
        }
    }
    else if(optionNumber == 2){
        greetings();
    }
    else if(optionNumber == 3){
        motivation();
    }
    else if(optionNumber == 4){
        jokes();
    }
    else if(optionNumber == 5){
        riddles();
    }
    else if(optionNumber==6){
        speakDateAndTime();
    }
    char quit;
    system("espeak \"Enter \'q\' to quit the program if you don't wish to continue. Else enter C to continue.\" ");
    scanf(" %c", &quit);
    if (quit=='q'){
        system("espeak \"Thanks For Using this program\" ");
        break;
    }
   
}
    
    return 0;
}

