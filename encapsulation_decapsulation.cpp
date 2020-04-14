#include<stdio.h>
#include<string.h>
#include<glut.h>

int flag=0;
int a=280,b=740;

void titles(GLfloat x,GLfloat y,char *ptr)
{
	int len = strlen(ptr);
	glRasterPos2f(x,y);
	for(int i=0;i<len;i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ptr[i]);
}

void title(GLfloat x,GLfloat y,char *ptr)
{
	int len = strlen(ptr);
	glRasterPos2f(x,y);
	for(int i=0;i<len;i++)
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,ptr[i]);
}

void startPage()
{
	glClearColor(0.15,0.1,0.01,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,1,1);
	titles(250.0,850.0,"ENCAPSULATION AND DECAPSULATION OF DATA");
	titles(50.0,700.0,"THIS PROJECT IS TO DEMONSTRATE HOW DATA MOVES ACROSS DIFFERENT LAYERS OF NETWORK");
	titles(165.0,600.0,"Encapsulation is a process where each layer adds it's own header to the upper layer payload");
	titles(310.0,550.0,"which help the packets to move across the network");
	titles(160.0,450.0,"Decapsulation is a process where the headers attached to the data are discarded at each layer");
	titles(380.0,400.0,"to retrieve the original data");
	titles(340.0,300.0,"Press ENTER to go to the Next Page");
	glFlush();
}

void computer()
{
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(70,800);
	glVertex2i(255,800);
	glVertex2i(255,950);
	glVertex2i(70,950);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.0,0.0,1.0);
	glVertex2i(80,810);
	glVertex2i(245,810);
	glVertex2i(245,940);
	glVertex2i(80,940);
	glEnd();
	
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(155,800);
	glVertex2i(180,800);
	glVertex2i(205,785);
	glVertex2i(130,785);
	glEnd();
	
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2i(50,700);
	glVertex2i(275,700);
	glVertex2i(275,100);
	glVertex2i(50,100);
	glEnd();
	
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_QUADS);	
	glVertex2i(70,650);
	glVertex2i(255,650);
	glVertex2i(255,600);
	glVertex2i(70,600);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINE_LOOP);	
	glVertex2i(70,650);
	glVertex2i(255,650);
	glVertex2i(255,600);
	glVertex2i(70,600);
	glEnd();
	
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_QUADS);	
	glVertex2i(70,550);
	glVertex2i(255,550);
	glVertex2i(255,500);
	glVertex2i(70,500);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINE_LOOP);	
	glVertex2i(70,550);
	glVertex2i(255,550);
	glVertex2i(255,500);
	glVertex2i(70,500);
	glEnd();
	
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_QUADS);	
	glVertex2i(70,450);
	glVertex2i(255,450);
	glVertex2i(255,400);
	glVertex2i(70,400);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINE_LOOP);	
	glVertex2i(70,450);
	glVertex2i(255,450);
	glVertex2i(255,400);
	glVertex2i(70,400);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_QUADS);	
	glVertex2i(70,350);
	glVertex2i(255,350);
	glVertex2i(255,300);
	glVertex2i(70,300);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINE_LOOP);	
	glVertex2i(70,350);
	glVertex2i(255,350);
	glVertex2i(255,300);
	glVertex2i(70,300);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_QUADS);	
	glVertex2i(70,250);
	glVertex2i(255,250);
	glVertex2i(255,200);
	glVertex2i(70,200);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_LINE_LOOP);	
	glVertex2i(70,250);
	glVertex2i(255,250);
	glVertex2i(255,200);
	glVertex2i(70,200);
	glEnd();

	glColor3f(0.0,0.0,0.0);
	titles(90.0,613.0,"Application Layer");
	titles(90.0,513.0,"Transport Layer");
	titles(90.0,413.0,"Network Layer");
	titles(90.0,313.0,"Data-Link Layer");
	titles(90.0,213.0,"Physical Layer");
}

void links()
{
	glColor3f(0.0,0.0,0.0);
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glVertex2i(255,225);
	glVertex2i(720,225);
	glEnd();
	glLineWidth(1.5);
	glBegin(GL_LINES);
	glVertex2i(255,325);
	glVertex2i(720,325);
	glEnd();
	glPushAttrib(GL_ENABLE_BIT);
	glLineStipple(3,0xBBBB);
	glEnable(GL_LINE_STIPPLE);
	glBegin(GL_LINES);
	glVertex2i(255,425);
	glVertex2i(720,425);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(255,525);
	glVertex2i(720,525);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(255,625);
	glVertex2i(720,625);
	glEnd();
	glPopAttrib();
}

void data()
{
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(a+200,b+40);
	glVertex2f(a,b+40);
	glVertex2f(a,b);
	glVertex2f(a+200,b);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	char *ptr="DATA";
	int len = strlen(ptr);
	glRasterPos2f(a+92,b+15);
	for(int i=0;i<len;i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10,ptr[i]);
}

void Applicationpacket()
{
	glColor3f(0.5,0.5,1.0);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+40);
	glVertex2i(a+200,b+40);
	glVertex2i(a+200,b+55);
	glVertex2i(a,b+55);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+40);
	glVertex2i(a+200,b+40);
	glVertex2i(a+200,b+55);
	glVertex2i(a,b+55);
	glEnd();
	title(a+90,b+45,"Header");
	glPushMatrix();
	glTranslatef(a,b+40,0.0);
	glScalef(1.0,0.5,1.0);
	glTranslatef(-a,-(b+40),0.0);
	data();
	glPopMatrix();
}

void TCPpacket()
{
	glColor3f(0.8,0.8,0.8);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+55);
	glVertex2i(a+200,b+55);
	glVertex2i(a+200,b+145);
	glVertex2i(a,b+145);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+55);
	glVertex2i(a+200,b+55);
	glVertex2i(a+200,b+145);
	glVertex2i(a,b+145);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(a,b+70);
	glVertex2i(a+200,b+70);
	glVertex2i(a,b+85);
	glVertex2i(a+200,b+85);
	glVertex2i(a,b+100);
	glVertex2i(a+200,b+100);
	glVertex2i(a,b+115);
	glVertex2i(a+200,b+115);
	glVertex2i(a,b+130);
	glVertex2i(a+200,b+130);
	glVertex2i(a+100,b+145);
	glVertex2i(a+100,b+130);
	glVertex2i(a+30,b+100);
	glVertex2i(a+30,b+85);
	glVertex2i(a+52,b+100);
	glVertex2i(a+52,b+85);
	glVertex2i(a+60,b+100);
	glVertex2i(a+60,b+85);
	glVertex2i(a+68,b+100);
	glVertex2i(a+68,b+85);
	glVertex2i(a+76,b+100);
	glVertex2i(a+76,b+85);
	glVertex2i(a+84,b+100);
	glVertex2i(a+84,b+85);
	glVertex2i(a+92,b+100);
	glVertex2i(a+92,b+85);
	glVertex2i(a+100,b+100);
	glVertex2i(a+100,b+85);
	glVertex2i(a+100,b+85);
	glVertex2i(a+100,b+70);
	glEnd();
	title(a+15,b+135,"src port #");
	title(a+115,b+135,"dest port #");
	title(a+60,b+120,"sequence number");
	title(a+40,b+105,"acknowledgement number");
	title(a+5,b+90,"HLen");
	title(a+53,b+90,"1");
	title(a+61,b+90,"2");
	title(a+69,b+90,"3");
	title(a+77,b+90,"4");
	title(a+85,b+90,"5");
	title(a+93,b+90,"6");
	title(a+105,b+90,"receive window");
	title(a+5,b+75,"internet checksum");
	title(a+105,b+75,"urgent data pointer");
	title(a+92,b+60,"options");
	glPushMatrix();
	glTranslatef(a,b+55,0.0);
	glScalef(1.0,0.5,1.0);
	glTranslatef(-a,-(b+55),0.0);
	Applicationpacket();
	glPopMatrix();
}

void IPv4Packet()
{
	glColor3f(1,0.7,0);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+145);
	glVertex2i(a+200,b+145);
	glVertex2i(a+200,b+265);
	glVertex2i(a,b+265);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+145);
	glVertex2i(a+200,b+145);
	glVertex2i(a+200,b+265);
	glVertex2i(a,b+265);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(a,b+160);
	glVertex2i(a+200,b+160);
	glVertex2i(a,b+175);
	glVertex2i(a+200,b+175);
	glVertex2i(a,b+190);
	glVertex2i(a+200,b+190);
	glVertex2i(a,b+205);
	glVertex2i(a+200,b+205);
	glVertex2i(a,b+235);
	glVertex2i(a+200,b+235);
	glVertex2i(a+20,b+265);
	glVertex2i(a+20,b+235);
	glVertex2i(a+50,b+265);
	glVertex2i(a+50,b+235);
	glVertex2i(a+100,b+265);
	glVertex2i(a+100,b+235);
	glVertex2i(a+100,b+235);
	glVertex2i(a+100,b+205);
	glVertex2i(a+130,b+235);
	glVertex2i(a+130,b+205);
	glVertex2i(a+50,b+205);
	glVertex2i(a+50,b+190);
	glVertex2i(a+100,b+205);
	glVertex2i(a+100,b+190);
	glEnd();
	title(a+3,b+245,"Ver");
	title(a+25,b+245,"HLen");
	title(a+55,b+250,"Service");
	title(a+60,b+240,"Type");
	title(a+110,b+245,"Total length");
	title(a+20,b+215,"Identification");
	title(a+103,b+215,"Flags");
	title(a+133,b+220,"Fragmentation");
	title(a+150,b+210,"offset");
	title(a+5,b+195,"TTL");
	title(a+53,b+195,"Protocol");
	title(a+103,b+195,"Internet checksum");
	title(a+30,b+180,"Source IP Address(32-bit)");
	title(a+30,b+165,"Destination IP Address(32-bit)");
	title(a+70,b+150,"Options+Padding");
	glPushMatrix();
	glTranslatef(a,b+145,0.0);
	glScalef(1.0,0.5,1.0);
	glTranslatef(-a,-(b+145),0.0);
	TCPpacket();
	glPopMatrix();
}

void DataLinkPacket()
{
	glColor3f(0.7,0,1);
	glBegin(GL_POLYGON);
	glVertex2i(a,b);
	glVertex2i(a+200,b);
	glVertex2i(a+200,b+40);
	glVertex2i(a,b+40);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b);
	glVertex2i(a+200,b);
	glVertex2i(a+200,b+40);
	glVertex2i(a,b+40);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(a+30,b+40);
	glVertex2i(a+30,b);
	glVertex2i(a+70,b+40);
	glVertex2i(a+70,b);
	glVertex2i(a+130,b+40);
	glVertex2i(a+130,b);
	glVertex2i(a+170,b+40);
	glVertex2i(a+170,b);
	glEnd();
	title(a+5,b+10,"Flag");
	title(a+35,b+10,"Header");
	title(a+80,b+10,"IP Packet");
	title(a+135,b+10,"Trailer");
	title(a+175,b+10,"Flag");
}

void message()
{
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(a+100,b+40);
	glVertex2f(a,b+40);
	glVertex2f(a,b);
	glVertex2f(a+100,b);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+100,b+40);
	glVertex2f(a,b+40);
	glVertex2f(a,b);
	glVertex2f(a+100,b);
	glEnd();
	title(a+30,b+15,"Message");
}


void application()
{
	glColor3f(0.5,0.5,1);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glColor3f(1.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	title(a+10,b+15,"1");
	title(a+50,b+15,"Message");
}

void datagram()
{
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glColor3f(0.5,0.5,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	title(a+10,b+15,"2");
	title(a+50,b+15,"Message");
}

void packet()
{
	glColor3f(1,0,0.5);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glColor3f(0.5,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	title(a+10,b+15,"3");
	title(a+50,b+15,"Datagram");
}


void frame()
{
	glColor3f(0.7,0,1);
	glBegin(GL_POLYGON);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glColor3f(1,0,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	glColor3f(0,0,0);
	glBegin(GL_LINE_LOOP);
	glVertex2i(a,b+40);
	glVertex2i(a+20,b+40);
	glVertex2i(a+20,b);
	glVertex2i(a,b);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(a+120,b+40);
	glVertex2f(a+20,b+40);
	glVertex2f(a+20,b);
	glVertex2f(a+120,b);
	glEnd();
	title(a+10,b+15,"4");
	title(a+50,b+15,"Packet");
}

void physical()
{
	glColor3f(0,0,0);
	glBegin(GL_LINES);
	glVertex2i(a,b);
	glVertex2i(a+100,b);
	glEnd();
	glBegin(GL_LINES);
	glVertex2i(a+10,b);
	glVertex2i(a+10,b-10);
	glVertex2i(a+10,b-10);
	glVertex2i(a+30,b-10);
	glVertex2i(a+30,b-10);
	glVertex2i(a+30,b);
	glVertex2i(a+30,b);
	glVertex2i(a+30,b+10);
	glVertex2i(a+30,b+10);
	glVertex2i(a+50,b+10);
	glVertex2i(a+50,b+10);
	glVertex2i(a+50,b);
	glVertex2i(a+50,b);
	glVertex2i(a+50,b-10);
	glVertex2i(a+50,b-10);
	glVertex2i(a+70,b-10);
	glVertex2i(a+70,b-10);
	glVertex2i(a+70,b);
	glVertex2i(a+70,b);
	glVertex2i(a+70,b+10);
	glVertex2i(a+70,b+10);
	glVertex2i(a+90,b+10);
	glVertex2i(a+90,b+10);
	glVertex2i(a+90,b);
	glEnd();
}

void appLayerEncaptext()
{
	titles(150,450,"At the application layer the data to be exchanged is called message");
	titles(150,400,"The data is encapsulated with a header specific to the application being used");
	titles(150,350,"It contains fields specific to a application");
	titles(150,300,"The header may contain some specific addresses such as URLs,Domain names etc");
	titles(150,250,"Data along with the header is reffered to as message");
	titles(150,200,"The message is passed onto the transport layer");
}

void appLayerDecaptext()
{
	titles(150,400,"As the message passes through the application layer the header is discarded and");
	titles(150,350,"the original data sent by the sender is delivered to the approiate application");
}

void transportLayerEncaptext()
{
	titles(150,550,"At the sender,at the Transport Layer the message coming from the application layer is encapsulated");
	titles(150,500,"in a transport layer header");
	titles(150,450,"In general,the fields present in a transport header are ");
	titles(155,400,"--Identifiers of source and destination applications that want to communicate");
	titles(155,350,"--Other information needed for flow control,error control or congestion control");
	titles(150,300,"The result is a transport-layer packet called segment(in TCP) or user datagram(in UDP)");
	titles(150,250,"We consider here a TCP header.It uses src port# & dest port# as identifiers for applications");
	titles(150,200,"Checksum is used for Error control,Receive window for flow control and some other bits for congestion control");
	titles(150,150,"UDP does not provide flow and congestion control");
	titles(150,100,"Therefore it has only src and dest port# and the Checksum fields");
	titles(150,50,"Finally the segment is passed onto the network layer");
}

void transportLayerDecaptext()
{
	titles(150,450,"At the reciever,as the packet moves across the Transport Layer,the transport-layer header is verified");
	titles(150,400,"The Checksum is used to detect errors.If there are no errors the message is sent to the upper layer");
	titles(150,350,"the dest port# is used to identify the application to which the data is to be delivered");
	titles(150,300,"If the protocol used is TCP acknowledgement is sent to the sender");
	titles(150,250,"Finally the transport-layer header is discarded and the data is delivered to the application layer");
}

void networkLayerEncaptext()
{
	titles(150,550,"The network layer receives the segment from transport layer as payload and adds its own header");
	titles(150,500,"The header contains the logical addresses of the source and destination hosts");
	titles(150,450,"It also contains some information required for error checking of the header(Internet Checksum),");
	titles(150,400,"fragmentation information(flags and fragmentation offset) and so on");
	titles(150,350,"The result is a network-layer packet called datagram");
	titles(150,300,"The network layer then passes the packet to data-link layer");
	titles(150,250,"The header we have used is a IPv4 header");
}

void networkLayerDecaptext()
{
	titles(150,550,"At the receiver,as the packet reaches the network layer the fields of the header are checked");
	titles(150,500,"Destination address is used to determine if it was the intended receiver");
	titles(150,450,"The checksum field is used to verify that the header is unaltered");
	titles(150,400,"Fragmentation information is used to reassemble the fragments to obtain the original packet");
	titles(150,350,"After verifying the various fields the header is discarded");
	titles(150,300,"and segment is delivered to the transport layer");
}

void dataLinkLayerEncaptext()
{
	titles(150,450,"The data-link layer takes the network-layer packet as payload");
	titles(150,400,"It adds its own header and trailer to the payload");
	titles(150,350,"The header contains the physical addresses of source host and the destination host");
	titles(150,300,"or next hop(the router) and control information");
	titles(150,250,"The trailer contains the fields required for error checking");
	titles(150,200,"The result is a data-link-layer packet called frame.Flag field marks the start and end of a frame");
	titles(150,150,"The frame is passed to the physical layer where it is converted into a digital signal and transmitted");
}

void dataLinkLayerDecaptext()
{
	titles(150,350,"At the receiver,the digital signal received is delivered as frame to data-link-layer");
	titles(150,300,"if the receiver is a router,it determines where the packet is to be routed next and routes it");
	titles(150,250,"If the receiver is a host,it verifies that the frame is unaltered,discards the header and trailer");
	titles(150,200,"and sends the datagram to the network layer");
}

void button()
{
	glColor3f(0.15,0.1,0.01);
	glBegin(GL_POLYGON);
	glVertex2i(850,900);
	glVertex2i(950,900);
	glVertex2i(950,950);
	glVertex2i(850,950);
	glEnd();
	glColor3f(1,1,1);
	titles(865,913,"Continue");
}
void display()
{
	glClearColor(1.0,1.0,1.0,0);
	glClear(GL_COLOR_BUFFER_BIT);
	if(flag == 1)
	{
		glColor3f(0,0,0);
		titles(425,900,"Press 's' to start");
	}	
	computer();
	glPushMatrix();
	glTranslatef(650.0,0.0,0.0);
	computer();
	glPopMatrix();
	links();
	glColor3f(1.0,1.0,1.0);
	titles(125.0,863.0,"Sender");
	titles(770.0,863.0,"Receiver");
	if(b > 625)
	{
		message();
	}
	if(b <=625 && b > 525)
	{
		application();
	}
	if(b <=525 && b > 425)
	{
		datagram();
	}
	if(b <=425 && b > 325)
	{
		packet();
	}
	if(b <= 325 && b > 240)
	{
		frame();
	}
	if(b == 240)
	{
		physical();
	}
	glFlush();
	glutPostRedisplay();
}

void move(int value)
{
	a+=5;
	if((a+120) < 690)
		display();
	else
	{
		flag = 2;
		glutPostRedisplay();
	}
}

void timeElapse(int value)
{
	if(b == 630)
	{
		flag=3;
		button();
		glPushMatrix();
		glTranslatef(280-2*a,630-2*b,0);
		glScalef(2,2,1);
		data();
		glPopMatrix();
		glFlush();
	}
	if(b == 530)
	{
		flag=4;
		if(a==280)
			appLayerEncaptext();
		else if(a == 570)
			appLayerDecaptext();
		button();
		glPushMatrix();
		glTranslatef(280-2*a,530-2*b,0);
		glScalef(2,2,1);
		Applicationpacket();
		glPopMatrix();
		glFlush();
	}
	if(b == 430)
	{
		if(a==280)
			transportLayerEncaptext();
		else if(a == 570)
			transportLayerDecaptext();
		button();
		flag=5;
		glPushMatrix();
		glTranslatef(280-2*a,530-2*b,0);
		glScalef(2,2,1);
		TCPpacket();
		glPopMatrix();
		glFlush();
	}
	if(b == 330)
	{
		if(a==280)
			networkLayerEncaptext();
		else if(a == 570)
			networkLayerDecaptext();
		button();
		flag=6;
		glPushMatrix();
		glTranslatef(280-2*a,430-2*b,0);
		glScalef(2,2,1);
		IPv4Packet();
		glPopMatrix();
		glFlush();
	}
	if(b == 245)
	{
		if(a==280)
			dataLinkLayerEncaptext();
		else if(a == 570)
			dataLinkLayerDecaptext();
		button();
		flag=7;
		glPushMatrix();
		glTranslatef(280-2*a,630-2*b,0);
		glScalef(2,2,1);
		DataLinkPacket();
		glPopMatrix();
		glFlush();
	}
}

void update(int value)
{
	if(a == 280 && b > 240)
		b=b-5;
	else if(a == 570 && b >= 240 && b<740)
		b=b+5;
	if(b>630 || (b<630 && b>530) || (b<530 && b>430) || (b<430 && b>330) || (b<330 && b>245))
	{
		display();			
	}
	if(b == 630 || b == 530 || b == 430 || b == 330 || b == 245)
	{
		glutTimerFunc(1000,timeElapse,0);
	}
	if(b == 240)
	{
		flag=8;
		display();
	}
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(flag == 0)
		startPage();
	if(flag == 1)
	{
		display();
	}
	if(flag == 2)
	{
		glutTimerFunc(100,update,0);
	}
	if(flag == 3)
	{
		button();
		glPushMatrix();
		glTranslatef(280-2*a,630-2*b,0);
		glScalef(2,2,1);
		data();
		glPopMatrix();
		glFlush();
		glutPostRedisplay();
	}
	if(flag == 4)
	{
		if(a==280)
			appLayerEncaptext();
		else if(a == 570)
			appLayerDecaptext();
		button();
		glPushMatrix();
		glTranslatef(280-2*a,530-2*b,0);
		glScalef(2,2,1);
		Applicationpacket();
		glPopMatrix();
		glFlush();
	}
	if(flag == 5)
	{
		if(a == 280)
			transportLayerEncaptext();
		else if(a == 570)
			transportLayerDecaptext();
		button();
		glPushMatrix();
		glTranslatef(280-2*a,(530-2*b),0);
		glScalef(2,2,1);
		TCPpacket();
		glPopMatrix();
		glFlush();
	}
	if(flag == 6)
	{
		if(a==280)
			networkLayerEncaptext();
		else if(a == 570)
			networkLayerDecaptext();
		button();
		glPushMatrix();
		glTranslatef(280-2*a,430-2*b,0);
		glScalef(2,2,1);
		IPv4Packet();
		glPopMatrix();
		glFlush();
	}
	if(flag == 7)
	{
		if(a==280)
			dataLinkLayerEncaptext();
		else if(a == 570)
			dataLinkLayerDecaptext();
		button();
		glPushMatrix();
		glTranslatef(280-2*a,630-2*b,0);
		glScalef(2,2,1);
		DataLinkPacket();
		glPopMatrix();
		glFlush();
	}
	if(flag == 8)
	{
		glutTimerFunc(100,move,0);
	}
}

void keys(unsigned char key,int x,int y)
{
	switch(key)
	{
	case 13:if(flag == 0)
			 {
				 flag = 1;
			 }
			 break;
	case 's':if(flag == 1)
			 {
				 flag=2;
			 }
			 break;
	case 'c':if(flag == 3 || flag==4 || flag==5 || flag==6 || flag == 7)
			flag = 2;
		  break;
	case 'q':exit(0);
	}
	glutPostRedisplay();
}

void mouse(int btn,int state,int x,int y)
{
	if(btn == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(x>1160 && x<1296 && y>37 && y<75)
		{
			flag = 2;
		}
	}
	glutPostRedisplay();
}

void myInit()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Packets");
	myInit();
	glutDisplayFunc(myDisplay);
	glutFullScreen();
	glutKeyboardFunc(keys);
	glutMouseFunc(mouse);
	glutMainLoop();
}
