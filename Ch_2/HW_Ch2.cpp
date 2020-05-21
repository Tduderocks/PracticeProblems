/*excersise 7 page 2-13*/ 
using namespace std;
#include <iostream>
#include <math.h>
int main()
{
    cout << "The average long jump of the jumper is " << ((3.3 + 3.5 + 4.0 + 3.0)/4 ) << " meters" << endl;
    cout << "The average of the C++ Class is " << ((14.0 + 16 + 13 + 19)/4.0) << " Students " << endl;
    cout << "1980     " << (1*0) << endl;
    for(int i = 1; i <= 5 ; i++){
        cout << (1980 + i * 3) << "     " << pow(4,i) << endl;
    }
    // cout << (1980 + 3) << "     " << (4*1) << endl;
    // cout << (1980 + 6) << "     " << (4*4) << endl;
    // cout << (1980 + 9) << "     " << (4*4*4) << endl;
    // cout << (1980 + 12) << "    " << (4*4*4*4) << endl;
    // cout << (1980 + 15) << "    " << (4*4*4*4*4) << endl;
    /*Excersise 12 page 2 - 14 */
    cout << "         *****" << endl;
    cout << "       *       * \n";
    cout << "      *  -   -   * \n";
    cout << "     *   o   o    * \n";
    cout << "    *      |       * \n";
    cout << "     *     +      * \n";
    cout << "       * \\__/   *\n";
    cout << "         *     * \n";
    cout << "          *****\n";
    cout <<"     \"happy face\"\n";
    /*Ex 14 page 2 15*/
    cout << "Chemistry \t4\n";
    cout << "Physics \t8\n";
    cout << "English \t2\n";
    cout << "Math Lab \t12\n";
    cout << " \n";
    cout << "Grand Total \t" << (4+8+2+12) << endl;
    /*Review 2 page 3 - 3*/
    double Radius;
    Radius = 10;
    cout << "Calculate the area of a cirlce - \n";
    cout << "Area = " << (3.14*Radius * Radius ) << endl;

     return (0);
}