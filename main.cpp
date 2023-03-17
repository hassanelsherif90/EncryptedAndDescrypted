#include <iostream>
#include <string>

using namespace std;

string ReadText ()
{
    string Text = "";
    cout << "Please Enter Text " << endl;
    getline(cin, Text);
    return Text;
}

string EncryptedText(string Text , short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text [i] = char((int)Text[i] + EncryptionKey);
    }
    return Text;
}
string DescryptedText(string Text , short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text [i] = char((int)Text[i] - EncryptionKey);
    }
    return Text;
}



int main()
{
    const char EnscryptionKey = 2;
    string Text = ReadText ();

    string AfterEnscryptedText = EncryptedText(Text, EnscryptionKey);
    string AftereDescryptedText = DescryptedText(AfterEnscryptedText, EnscryptionKey);
    cout << AfterEnscryptedText << endl;
    cout << AftereDescryptedText << endl;
    return 0;
}
