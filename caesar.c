#include<stdio.h>
#include<string.h>

void caesar (int key, char message[]);
void caesar (int key, char message[])
{

    int j = 0;
    char story[80];

    for (key = 0; key < 27; key++)      // looping over all keys.
    {
        for (j = 0; j < 80; j++)        // looping over all letters in the message.
        {
            if (message[j] == ' ' || message[j] == ',' || message[j] == '.')
            {
                story[j] = message[j];  // keeping punctuation and spaces the same.
            }
            if (message[j] <= 'Z' && message[j] >= 'A')
            {
                story[j] = 'A' + (((message[j] - 'A' + key) % 26));     //Shifting capital letters by the key amount .
            }
            if (message[j] <= 'z' && message[j] >= 'a')
            {
                story[j] = 'a' + (((message[j] - 'a' + key) % 26));     //Shifting lowercase letters by the key amount.
            }
            printf ("%c", story[j]);    //Printing the new messages.
        }
        printf ("\n%d : ", key + 1);    // Printing the key number for each message.
    }
}

int main (void)
{
    char message[80];           //To hold the encrypted message.

    strncpy (message, "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyevn rkfo cksn pkcdob rybcoc.", 80);       //The original message.

    printf ("Welcome to the Caesar Cipher Solver:\n");  // Title.
    printf ("Key    Message\n");        // Headings.
    printf ("0 : ");            // first key.
    int key = 0;

    caesar (key, message);

    return 0;
}
