// Sharvil R Karwa (21BCE0122)

#include <bits/stdc++.h>
using namespace std; 

int x = 0;
int y = 127;
int z = 0;
int f = 63;
bool sec = true;

void subnet(const string& ipAddress, int subnetMask, int subnetNumber) {
    vector<string> ipAddressParts;
    stringstream ss(ipAddress);
    for (string part; getline(ss, part, '.');) {
        ipAddressParts.push_back(part);
    }

    int networkID = stoi(ipAddressParts[0]) << 24 |
                    stoi(ipAddressParts[1]) << 16 |
                    stoi(ipAddressParts[2]) << 8 |
                    stoi(ipAddressParts[3]);
    
    int subnetSize;
    if(z==2){
        subnetSize = 128;
    }
    else if(z==4){
        subnetSize = 64;
    }
    else if(z==3){
        if(subnetNumber==0){
            subnetSize = 128;
        }
        else{
            subnetSize = 64;
        }
    }
    int subnetID = networkID + (subnetNumber * subnetSize);

    cout << subnetNumber + 1 << " Subnet:" << endl;
    // cout << "IP Address of the subnet: " <<  << endl;
    if(subnetNumber == 0){
        cout << "IP Address of the subnet: " << ipAddress << endl;
    } 
    else if(subnetNumber==1){
        cout << "IP Address of the subnet: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x<< endl;
    }
    else if(subnetNumber==2 || subnetNumber==3){
        cout << "IP Address of the subnet: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x<< endl;
    }
    cout << "Total number of IP Addresses: " << subnetSize << endl;
    cout << "Total number of hosts that can be configured: " << subnetSize - 2 << endl;
    cout << "Range of IP Addresses:" << endl;
    cout << "St IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x << endl;
    cout << "End IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << y << endl;
    cout << "Direct Broadcast Address: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << y<< endl;
    cout << "Limited Broadcast Address: 255.255.255.255" << endl;
    cout << endl;
}

void subnet2(const string& ipAddress, int subnetMask, int subnetNumber){
    vector<string> ipAddressParts;
    stringstream ss(ipAddress);
    for (string part; getline(ss, part, '.');) {
        ipAddressParts.push_back(part);
    }

    int networkID = stoi(ipAddressParts[0]) << 24 |
                    stoi(ipAddressParts[1]) << 16 |
                    stoi(ipAddressParts[2]) << 8 |
                    stoi(ipAddressParts[3]);
    
    int subnetSize;
    
    if(subnetNumber==0){
        cout << subnetNumber + 1 << " Subnet:" << endl;
        cout << "IP Address of the subnet: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << 0<< endl;
        cout << "Total number of IP Addresses: " << 128 << endl;
        cout << "Total number of hosts that can be configured: " << 126 << endl;
        cout << "Range of IP Addresses:" << endl;
        cout << "St IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << 0 << endl;
        cout << "End IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << 127 << endl;
        cout << "Direct Broadcast Address: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << 127<< endl;
        cout << "Limited Broadcast Address: 255.255.255.255" << endl;
        cout << endl; 
    } 

    else{
        if(sec){
             x = 128;
            y = 191;
        }
        int subnetID = networkID + (subnetNumber * subnetSize);

    cout << subnetNumber + 1 << " Subnet:" << endl;
    // cout << "IP Address of the subnet: " <<  << endl;
    if(subnetNumber == 0){
        cout << "IP Address of the subnet: " << ipAddress << endl;
    } 
    else if(subnetNumber==1){
        cout << "IP Address of the subnet: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x<< endl;
    }
    else if(subnetNumber==2 || subnetNumber==3){
        cout << "IP Address of the subnet: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x<< endl;
    }
    cout << "Total number of IP Addresses: " << 64 << endl;
    cout << "Total number of hosts that can be configured: " <<  62 << endl;
    cout << "Range of IP Addresses:" << endl;
    cout << "St IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << x << endl;
    cout << "End IP: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << y << endl;
    cout << "Direct Broadcast Address: " << ipAddressParts[0] << "." << ipAddressParts[1] << "." << ipAddressParts[2] << "." << y<< endl;
    cout << "Limited Broadcast Address: 255.255.255.255" << endl;
    cout << endl; 
    x+=64;
    y+=64; 
    sec = false;
    }
    
}

int main() {
    string ipAddress;
    int numberOfSubnets;

    cin >> ipAddress;

    cin >> numberOfSubnets;

    vector<string> ipAddressParts;
    stringstream ss(ipAddress);
    for (string part; getline(ss, part, '.');) {
        ipAddressParts.push_back(part);
    }

    int a = stoi(ipAddressParts[0]);

    if (a >= 1 && a <= 126) {
        cout << ipAddress << " is a classful format of Class: A" << endl;
    } else if (a >= 128 && a <= 191) {
        cout << ipAddress << " is a classful format of Class: B" << endl;
    } else if (a >= 192 && a <= 223) {
        cout << ipAddress << " is a classful format of Class: C" << endl;
    } 
    cout<<endl;

    int subnetMask = static_cast<int>(ceil(log2(numberOfSubnets)));

    z = numberOfSubnets;

    if(z!=2){
        y = 63;
    }

    if(numberOfSubnets%2==0){
        for (int i = 0; i < numberOfSubnets; i++) {
        subnet(ipAddress, subnetMask, i);
        if(numberOfSubnets==2){
            x+=128;
            y+=128;
        } 
        else{
            x+=64;
            y+=64;
        }
    }
    } 
    else{
        for (int i = 0; i < numberOfSubnets; i++) {
        subnet2(ipAddress, subnetMask, i);
    }}
    return 0;
}
