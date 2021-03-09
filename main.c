#include <stdio.h>

int bus=0,car=0,ric=0,cyc=0,veh=0,lim=300;

void addBus(){
bus++;
veh++;
printf("\nBus added.");
printf("\nNo. of buses : %d",bus);
}

void addCar(){
car++;
veh++;
printf("\nCar added.");
printf("\nNo. of cars : %d",car);
}

void addRic(){
ric++;
veh++;
printf("\nRickshaw added.");
printf("\nNo. of rickshaws : %d",ric);
}

void addCyc(){
cyc++;
veh++;
printf("\nCycle added.");
printf("\nNo. of cycles : %d",cyc);
}

void remBus(){
if(bus==0){
printf("No bus for getting out\n"); 
}
else{
bus--;
veh--;
printf("\nBus got out.");
printf("\nNo. of buses : %d",bus);
}
}

void remCar(){
if(car==0){
printf("No car for getting out\n");
}
else{
car--;
veh--;
printf("\nCar got out.");
printf("\nNo. of cars : %d",car);
}
}

void remRic(){
if(ric==0){
printf("No rickshaw for getting out\n");
}
else{
ric--;
veh--;
printf("\nRickshaw got out.");
printf("\nNo. of rickshaws : %d",ric);
}
}

void remCyc(){
if(cyc==0){
printf("No cycle for getting out\n");
}
else{
cyc--;
veh--;
printf("\nCycle got out.");
printf("\nNo. of cycles : %d",cyc);
}
}

void show(){
printf("Number of total vehicles : %d\n",veh);
printf("Number of total buses : %d\n",bus);
printf("Number of total cars : %d\n",car);
printf("Number of total rickshaws : %d\n",ric);
printf("Number of total cycles : %d\n",cyc);
}

int main(){
while(1){
int q,v1;
printf("\n\nWelcome To The New Parking Zone\n\nEnter\n1. Add Vehicle");
printf("\n2. Remove Vehicle");
printf("\n3. Show Status");
printf("\n4. Exit\n\n");
scanf("%d",&q);
if(q==4) break;
else if(q==3) show();
else if(q==2){
if(veh==0) printf("\nNo vehicles getting out\n");
else {
printf("\nWhich vehicle to be out");
printf("\n1. Bus\n2. Car\n3. Rickshaw\n4. Cycle\n");
scanf("%d",&v1);
if(v1==1) remBus();
else if(v1==2) remCar();
else if(v1==3) remRic();
else remCyc();
}
}

else {
if(veh==lim) printf("\nThe park is full.\n");
else {
printf("\nWhich vehicle to add");
printf("\n1. Bus\n2. Car\n3. Rickshaw\n4. Cycle\n\n");
scanf("%d",&v1);
if(v1==1) addBus();
else if(v1==2) addCar();
else if(v1==3) addRic();
else addCyc();
}
}
}
return 0;
}
