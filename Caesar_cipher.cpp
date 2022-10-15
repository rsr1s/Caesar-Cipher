#include <iostream>
using namespace std;

void caesar(string message,int shift,string direction){

    string result =" ";



    if(direction=="encode"){
            for(int i=0; i< message.size(); i++){
        
                if (isupper(message[i])){

                    result += char(int(message[i] + shift - 65) % 26 + 65);
                }

                // Encrypt Lowercase letters
                else{
                    
                    result += char(int(message[i] + shift - 97) % 26 + 97);
                    
                }
	        }
    cout << result <<endl;
    }
    
    else if(direction=="decode"){

        for(int i=0; i<message.length(); i++){

           result +=char(int(message[i] - shift - 97) % 26 + 97);
            
        }
        cout << result <<endl;
    }

}





int main(){
    
    // repeat unless the user enters "no"
    while (true){
        cout <<"Type \"encode\" to encrypt, type \"decode\" to decrypt:"  <<endl;
        string direction;
        while (true){
            cout << "-> ";
            cin>>direction;
            if(direction=="encode"){
                cout << "encoded" <<endl;
                break;
            }
            else if(direction=="decode"){
                cout << "decode" <<endl;
                break;
            }
            else{
                cout << "Invalid choice. Please enter \"encode\" or \"decode\" " <<endl;
            }
        }
        string message;
        
        cout << "Type your message: " <<endl;
        cin>>message;
        int shift;
        cout << "Type the shift number:" <<endl;
        cin>>shift;
        caesar(message,shift,direction);
    }
    return 0;
}

