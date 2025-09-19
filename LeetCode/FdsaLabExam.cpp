#include <iostream>
#include <string>
using namespace std;

struct Shipment{
    string name;
    float weight;
    string dependency;
    Shipment* next;
};

Shipment* head=NULL;

bool checkCircular(string name,string dep){
    Shipment* temp = head;
    while(temp){
        if(temp->name==dep && temp->dependency==name) return true;
        temp = temp->next;
    }
    return false;
}

void displayShipments(){
    cout << "\nCurrent Shipments:\n";
    Shipment* temp=head;
    if (!temp){
        cout << "No shipments available"<<endl;
        return;
    }
    while(temp){
        cout << temp->name << " (" << temp->weight << " kg)";
        if(temp->dependency != "none")
        cout << " -> depends on " <<temp->dependency;
        cout << endl;
        temp=temp->next;
    }
    cout<<endl;
}

void insertShipment(string n, float w, string dep, int pos){
    if(checkCircular(n, dep)){
        cout << "Circular dependency detected! Cannot add " << n << endl;
        return;
    }
    Shipment* newNode = new Shipment;
    newNode->name = n;
    newNode->weight = w;
    newNode->dependency = dep;
    newNode->next = NULL;

    if (pos == 1 || head == NULL){
        newNode->next = head;
        head = newNode;
    } else{
        Shipment* temp = head;
        for (int i = 1; i < pos - 1 && temp->next; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout << "Inserted" << n << endl;
    displayShipments();
}

void deleteShipment(string n){
    if (head == NULL) {
        cout << "No shipments to delete"<<endl;
        return;
    }
    Shipment* temp = head;
    Shipment* prev = NULL;
    while (temp && temp->name != n){
        prev = temp;
        temp = temp->next;
}
    if(!temp){
        cout << "Shipment not found"<<endl;
        return;
    }
    if(prev == NULL){
        head = head->next;
    }else{
        prev->next = temp->next;
    }
    delete temp;
    cout << "Deleted" << n <<endl;
    displayShipments();
}

void searchShipment(string n){
    Shipment* temp = head;
    while (temp){
        if (temp->name == n){
            cout << "Found " << n << " (" << temp->weight << " kg)";
            if (temp->dependency != "none") cout << " -> depends on " << temp->dependency;
            cout << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Shipment not found"<<endl;
}

void updateShipment(string n, float w, string dep){
    Shipment* temp = head;
    while(temp){
        if (temp->name == n){
            if (checkCircular(n, dep)){
                cout << "Update failed! Circular dependency detected"<<endl;
                return;
            }
            temp->weight = w;
            temp->dependency = dep;
            cout << "Updated " << n<<endl;
            displayShipments();
            return;
        }
        temp=temp->next;
    }
    cout << "Shipment not found"<<endl;
}

int main() {
    int choice;
    while (true) {
        cout << "Shipment Management Menu" <<endl;
        cout << "1. Insert Shipment" <<endl;
        cout << "2. Delete Shipment" <<endl;
        cout << "3. Search Shipment"<<endl;
        cout << "4. Update Shipment"<<endl;
        cout << "5. Display All Shipments"<<endl;
        cout << "6. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1){
            string name,dep;
            float weight;
            int pos;
            cout << "Enter Shipment Name: ";
            cin >> name;
            cout << "Enter Weight: ";
            cin >> weight;
            cout << "Enter Dependency (or none): ";
            cin >> dep;
            cout << "Enter Position: ";
            cin >> pos;
            insertShipment(name,weight,dep,pos);
        } 
        else if (choice == 2){
            string name;
            cout << "Enter Shipment Name to Delete: ";
            cin >> name;
            deleteShipment(name);
        } 
        else if (choice == 3){
            string name;
            cout << "Enter Shipment Name to Search: ";
            cin >> name;
            searchShipment(name);
        } 
        else if (choice == 4){
            string name,dep;
            float weight;
            cout << "Enter Shipment Name to Update: ";
            cin >> name;
            cout << "Enter New Weight: ";
            cin >> weight;
            cout << "Enter New Dependency (or none): ";
            cin >> dep;
            updateShipment(name, weight,dep);
        } 
        else if(choice == 5){
            displayShipments();
        } 
        else if(choice == 6){
            cout << "Exiting"<<endl;
            break;
        } 
        else{
            cout << "Invalid choice"<<endl;
        }
    }
    return 0;
}