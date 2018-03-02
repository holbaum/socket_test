/*
 * Socket.cpp
 *
 *  Created on: Feb 27, 2018
 *      Author: henryk
 */

#include "Socket.h"



using namespace std;
using namespace sockets;
namespace sockets {

Socket::Socket() : mSocket{-1}{
	// TODO Auto-generated constructor stub


}

Socket::~Socket() {
	// TODO Auto-generated destructor stub
}

} /* namespace sockets */


bool Socket::connect()
{
	return false;
}

bool Socket::send(const string &msg)
{
	if(send(mSocket, msg.c_str(), msg.size(),0) > 0)
		return true;
	return false;
}
int Socket::recieve()
{
	int msgLength;
	char cbuffer[RECV_SIZE+1];
	msgLength = recv(mSocket,cbuffer,RECV_SIZE,0);
	buffer += cbuffer;
	return msgLength;
}
bool Socket::isSocket()
{

}

bool Socket::bind()
{

}
