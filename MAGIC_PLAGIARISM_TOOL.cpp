#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "MAGIC PLAGIARISM TOOL" << endl;

    // Dynamic string input using vector
    cout << "Enter words for HELLO.TXT (Type DONE to end):" << endl;
    vector<string> hello;
    string word;

    // Reading hello.txt
    while (cin >> word && word != "DONE") {
        hello.push_back(word);
    }

    cout << "Enter words for BYE.TXT (Type DONE to end):" << endl;
    vector<string> bye;

    // Reading bye.txt
    while (cin >> word && word != "DONE") {
        bye.push_back(word);
    }

    int choice;
    do {
        cout << "Choose an option:\n"
             << "1. Matching Percentage\n"
             << "2. Word Count\n"
             << "3. Most Frequent Word\n"
             << "4. Smallest and Largest Word\n"
             << "5. Difference (Bye.txt - Hello.txt)\n"
             << "6. Difference (Hello.txt - Bye.txt)\n"
             << "7. Magic Figure\n"
             << "8. Exit\n"; // Added exit option
        cin >> choice;

        switch (choice) {
            case 1: { // Matching percentage
                cout << "MATCHING PERCENTAGE" << endl;
                double count = 0;
                vector<string> arr = bye; // Create a copy of bye
                for (int i = 0; i < hello.size(); i++) {
                    for (int j = 0; j < arr.size(); j++) {
                        if (arr[j] == hello[i]) {
                            count++;
                            arr[j] = "098"; // Mark as matched
                            break;
                        }
                    }
                }
                cout << (count / arr.size()) * 100 << "%" << endl; // Calculate percentage
                break;
            }

            case 2: { // Word count
                cout << "WORD COUNT" << endl;
                cout << "word count in hello: " << hello.size() << endl;
                cout << "word count in bye: " << bye.size() << endl;
                break;
            }

            case 3: { // Most frequent word
                cout << "MOST FREQUENT WORD" << endl;
                map<string, int> hash;
                for (int i = 0; i < hello.size(); i++) {
                    hash[hello[i]] += 1;
                }
                for (int i = 0; i < bye.size(); i++) {
                    hash[bye[i]] += 1;
                }

                string mostFrequent = "";
                int maxFrequency = 0;

                for (const auto &entry : hash) {
                    if (entry.second > maxFrequency) {
                        mostFrequent = entry.first;
                        maxFrequency = entry.second;
                    }
                }
                cout << "Most frequent word: " << mostFrequent << " (Frequency: " << maxFrequency << ")" << endl;
                break;
            }

            case 4: { // Smallest and largest word
                // Smallest in hello
                if (!hello.empty()) {
                    cout << "SMALLEST IN HELLO.TXT" << endl;
                    string smallest1 = hello[0];
                    for (int i = 1; i < hello.size(); i++) {
                        if (hello[i].length() < smallest1.length()) {
                            smallest1 = hello[i];
                        }
                    }
                    cout << "smallest word in hello: " << smallest1 << endl;

                    cout << "LARGEST IN HELLO.TXT" << endl;
                    string largest1 = hello[0];
                    for (int i = 1; i < hello.size(); i++) {
                        if (hello[i].length() > largest1.length()) {
                            largest1 = hello[i];
                        }
                    }
                    cout << "largest word in hello: " << largest1 << endl;
                } else {
                    cout << "Hello vector is empty!" << endl;
                }

                // Smallest and largest in bye
                if (!bye.empty()) {
                    cout << "SMALLEST IN BYE.TXT" << endl;
                    string smallest2 = bye[0];
                    for (int i = 1; i < bye.size(); i++) {
                        if (bye[i].length() < smallest2.length()) {
                            smallest2 = bye[i];
                        }
                    }
                    cout << "smallest word in bye: " << smallest2 << endl;

                    cout << "LARGEST IN BYE.TXT" << endl;
                    string largest2 = bye[0];
                    for (int i = 1; i < bye.size(); i++) {
                        if (bye[i].length() > largest2.length()) {
                            largest2 = bye[i];
                        }
                    }
                    cout << "largest word in bye: " << largest2 << endl;
                } else {
                    cout << "Bye vector is empty!" << endl;
                }
                break;
            }

            case 5: { // Difference (Bye.txt - Hello.txt)
                cout << "DIFFERENCE (BYE.TXT - HELLO.TXT)" << endl;
                for (int i = 0; i < bye.size(); i++) {
                    if (find(hello.begin(), hello.end(), bye[i]) == hello.end()) {
                        cout << bye[i] << endl;
                    }
                }
                break;
            }

            case 6: { // Difference (Hello.txt - Bye.txt)
                cout << "DIFFERENCE (HELLO.TXT - BYE.TXT)" << endl;
                for (int i = 0; i < hello.size(); i++) {
                    if (find(bye.begin(), bye.end(), hello[i]) == bye.end()) {
                        cout << hello[i] << endl;
                    }
                }
                break;
            }

            case 7: { // Magic figure
                cout << "MAGIC FIGURE" << endl;
                int k1, totalwords1 = 0, totalwords2 = 0;
                cout << "enter k1" << endl;
                cin >> k1;
                for (int i = 0; i < hello.size(); i++) {
                    if (hello[i].length() == k1) {
                        totalwords1++;
                    }
                }
                cout << "total words in hello with k length: " << totalwords1 << endl;

                for (int i = 0; i < bye.size(); i++) {
                    if (bye[i].length() == k1) {
                        totalwords2++;
                    }
                }

                cout << "total words in bye with k length: " << totalwords2 << endl;
                break;
            }

            case 8: // Exit option
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 8); // Loop until user chooses to exit

    return 0;
}
