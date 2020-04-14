# ENCAPSULATION-AND-DECAPSULATION-OF-DATA-USING-OPENGL
The main idea of this project is to show how the data gets encapsulated and decapsulated with the header across different layers of TCP /IP model. Through this project we can also get information about the 5 layers header format with their respective representation of header formats.

	Project Title:
Computer Graphics And Visualization Project for Encapsulation And Decapsulation using OpenGL.

	Project Description:
	The main idea of this project is to encapsulate and decapsulate packets through different layers of osi model.
	This project also helps in understanding the header formats of each protocol layers.
	Encapsulation is a process used to hide or protect a process from the possibility of outside interference or misuse of the system while simplifying the use of the system itself ,also making one type of network data packets to other data types.
	Encapsulation occurs when the protocal that is on the lower layer receives data from the protocol that is at the higher layer and put the data into a data format that is understood by the protocol. Access to the internal system so arraged through a set of interfaces.With the encapsulation of data into an identity.
	A simple example encapsulation process in the process of mail delivery ,if a letter would be sent but without the envelop , addresss and postage.
	The letter should have an identity in order to get to the destination ,if it does not have an identity the letter will not be able to reach the destination .Envelops with address and stamp act the same as the data encapsulation.
	Data decapsulation is simply the reverse of encapsulation. Decapsulation is used when an incoming transmission (to be received by the destination computer) is unpacked as it moves up the protocol stack. 
	The data at the bottom of the layer are packaged several times to ensure security. As they are sent along the transport layer, these data are unpacked until they reach the network application awaiting the data. 

*Implementation Details*
	Implementation of project begins from the start page ,which mentions the tiltle of the project and gives brief description of the project .
	Keyboard Navigations have been used to implement user interface. On pressing Enter key we are directed to the main page of the project.
	Components in the main page,
•	Two computers -indicating the sender and the receiver.
•	TCP/IPModel – consisting of 5 layers
Application layer	
Transport layer
Network layer 
Data link layer
Physical layer
•	Message Packet
	Again in the main page keyboard interface is implemented . A short message is displayed to know the keys to pressed to start the functioning of messge through the different layers.
	On pressing key ‘c’ again ,the message packet is translated or moved to application layer and it displays the data format of application .The application layer provides network services to all the network based applications by providing them with an interface that they can utilize for all their network based communication. 
	The Application layer message is again encapsulated at the Transport Layer. If the protocol used at the Transport Layer is TCP (Transmission Control Protocol), the data packet is known as a "TCP SEGMENT". If the protocol used at the Transport layer is UDP (User Datagram Protocol), the data packet is known as a "UDP DATAGRAM".
	On pressing key ‘c’ again ,the message packet is translated or moved to transport layer with the header part encapsulated with the data ,then it displays the header format of transport layer.  
	The Transport Layer contains two important protocols: TCP (Transmission Control Protocol) and UDP (User Datagram Protocol). TCP (Transmission Control Protocol) is more reliable but consumes more resource. UDP (User Datagram Protocol) is less reliable but consume fewer resources than TCP (Transmission Control Protocol) and is faster than TCP (Transmission Control Protocol).
	On pressing key ‘c’ again ,the message packet is translated or moved to Network layer with the new header part encapsulated with the data ,then it displays the header format of Network layer.The data packet created at the Internet layer by Internet Protocol, which again encapsulates the Transport layer segment/datagram, is known as a "IP DATAGRAM".
	The data packet at the Network Access layer, which encapsulates and may subdivide the IP Datagram, is known as a "FRAME" (generally Ethernet Frame).
	The main protocols included at Internet layer are IP (Internet Protocol), ICMP (Internet Control Message Protocol), ARP (Address Resolution Protocol), RARP (Reverse Address Resolution Protocol) and IGMP (Internet Group Management Protocol).
	On pressing key ‘c’ again ,the message packet is translated or moved to Datalink layer with the new header part encapsulated with the data ,then it displays the header format of data link layer.
	The Frame is converted into a bitstream at the lowest sublayer of the Network Access layer and then placed on medium.
	Now the same pattern of encapsulation takes place at the intermidiate routers.
	Decapsulation takes place in similar manner at each of the 5 layers ,unpacking if data from the header is carried out.
	Finally the message reaches the destination safely.
	Encapsulation is done at the source and decapsulation at the destination, whereas at the intermediate points, such as routers, both decapsulation and encapsulation are carried out. 
                              	

