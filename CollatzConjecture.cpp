/*
Collatz Conjecture
By: Erik Rodabaugh
Website: www.ErikRodabaugh.com
Copyright (C) 2016 Erik Rodabaugh

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 3
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

// Setup.
#include <iostream>
using namespace std;

// Variables.
int wait, n, count;

int main()
{
  count = 0;
  // Display the title.
  cout << "Collatz Conjecture" << endl << "By: Erik Rodabaugh" << endl << "Website: www.ErikRodabaugh.com" << endl;

  // Ask the user for n.
  cout << "What would you like n to be?" << endl;
  cin >> n;

  // Run until n = 1.
  while(n != 1){
    count = count + 1;
    if(n % 2 == 0){
      n = n / 2;
      }
    else{
      n = 3 * n;
      n = n + 1;
      }
    cout << n << endl;
  }
  cout << endl << "Count: " << count << endl;
  cin >> wait;
}
