#include <iostream>

using namespace std;

int main()
{
    int num;
    int deno;
    int fn = 0;
    int sn;
    int box[fn];
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> deno;

    for(int i=num;i>0;i--){
        if(num > 0 && deno > 0){
               if(num%i==0){
                    for(int j=deno;j>0;j--){
                        if(deno%j==0){
                            if(i==j || deno%j>0){
                                num /=j;
                                deno /=i;
                                cout <<i<<" ";
                                //fn += 1;
                                box[fn] =j;
                                fn += 1;
                            }
                        }
                    }
                }
        }
        else{
                cout << "Returned: 0";
        }
    }

    /*cout << "\n"<<num;
    cout << "\n"<<deno<<"\n";
    //cout << "\n\n"<<box[0]<<", "<<box[3];*/

    cout << "Fraction: "<<num<<"/"<<deno<<"\n";

    for(int g=0; g<fn; g++)
    {
        cout << box[g]<<", ";
    }


    return 0;
}
