// Traffic simulation 
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void program_start();
void stop_car();
void wait();
void go();
void cout_down();
int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"NULL");
	//starting
	program_start();
	wait();
	getch();
	closegraph();
}

void program_start(){
	for(int i=-250;i<=250;i++){
	//car body
	line(0 + i, 300, 210 + i, 300);
	line(50 + i, 300, 75 + i, 270);
	line(75 + i, 270, 150 + i, 270);
	line(150 + i, 270, 165 + i, 300);
	line(0 + i, 300, 0 + i, 330);
	line(210 + i, 300, 210 + i, 330);
	// For left wheel of car
	circle(65 + i, 330, 15);
	circle(65 + i, 330, 2);
	// For right wheel of car
	circle(145 + i, 330, 15);
	circle(145 + i, 330, 2);
	// Line left of left wheel
	line(0 + i, 330, 50 + i, 330);
	// Line middle of both wheel
	line(80 + i, 330, 130 + i, 330);
	// Line right of right wheel
	line(210 + i, 330, 160 + i, 330);
    //traffic system
	if(i>=210){
	  setfillstyle(SOLID_FILL,RED);
	  circle(547,151,11); //red light
	  floodfill(547,152,15);
	  outtextxy(530,120,"STOP");
	}
	//traffic
	line(548,210,548,347);
	rectangle(530,138,566,210);
	rectangle(530,118,566,138); //count
	circle(547,151,11); //red light
	circle(547,174,11); //yellow  light
	circle(547,196,11); //green light
	//road
    delay(20);
	cleardevice();
	line(0,347,getmaxx(),347);
	}
}
void wait(){
	stop_car();
	setfillstyle(SOLID_FILL,RED);
	  circle(547,151,11); //red light
	  floodfill(547,152,15);
	char num[3];
	for(int i=5;i>0;i--)
	{
		sprintf(num,"%d",i);
		outtextxy(546,120,num);
		delay(1000);
	}
	outtextxy(532,120,"WAIT");
	delay(1000);
	cleardevice();
	stop_car();
	setfillstyle(SOLID_FILL, YELLOW);
	circle(547,174,11);
	floodfill(547,174,15);
	for(int i=3;i>0;i--)
	{
		sprintf(num,"%d",i);
		outtextxy(546,120,num);
		delay(1000);
	}
	setfillstyle(SOLID_FILL, BLACK);
	circle(547,174,11);
	floodfill(547,174,15);
	setfillstyle(SOLID_FILL, GREEN);
	circle(547,196,11);
	floodfill(547,196,15);
	outtextxy(537,120,"GO");
	delay(1000);
	for(int i=0;i<=500;i++){
	line(250+i, 300, 210+250+i , 300);
	line(50 +250+i, 300, 75 +250+i, 270);
	line(75 +250+i, 270, 150 +250+i, 270);
	line(150 +250+i, 270, 165 +250+i, 300);
	line(250+i, 300, i+250, 330);
	line(210 +250+i, 300, i+210 +250, 330);
	// For left wheel of car
	circle(65 +250+i, 330, 15);
	circle(65 +250+i, 330, 2);
	// For right wheel of car
	circle(145 +250+i, 330, 15);
	circle(145 +250+i, 330, 2);
	// Line left of left wheel
	line(0 +250+i, 330, 50 +250+i, 330);
	// Line middle of both wheel
	line(80 +250+i, 330, 130 +250+i, 330);
	// Line right of right wheel
	line(210 +250+i, 330, 160 +250+i, 330);
	//traffic
	line(548,210,548,347);
	rectangle(530,138,566,210);
	rectangle(530,118,566,138); //count
	circle(547,151,11); //red light
	circle(547,174,11); //yellow  light
	circle(547,196,11); //green light
	//road
    delay(20);
    cleardevice();
	line(0,347,getmaxx(),347);
	}
	program_start();
}
void stop_car(){
	//stop car body
	line(0 +250, 300, 210+250 , 300);
	line(50 +250, 300, 75 +250, 270);
	line(75 +250, 270, 150 +250, 270);
	line(150 +250, 270, 165 +250, 300);
	line(0 +250, 300, 0 +250, 330);
	line(210 +250, 300, 210 +250, 330);
	// For left wheel of car
	circle(65 +250, 330, 15);
	circle(65 +250, 330, 2);
	// For right wheel of car
	circle(145 +250, 330, 15);
	circle(145 +250, 330, 2);
	// Line left of left wheel
	line(0 +250, 330, 50 +250, 330);
	// Line middle of both wheel
	line(80 +250, 330, 130 +250, 330);
	// Line right of right wheel
	line(210 +250, 330, 160 +250, 330);
	

	//traffic light
	line(548,210,548,347);
	rectangle(530,138,566,210);
	rectangle(530,118,566,138); //count
	circle(547,151,11); //red light
	circle(547,174,11); //yellow  light
	circle(547,196,11); //green light	
	//road
	line(0,347,getmaxx(),347);
}
