/*
 * Socket.h
 *
 *  Created on: Feb 27, 2018
 *      Author: henryk
 */

#ifndef SOCKET_H_
#define SOCKET_H_

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <string>
#include <arpa/inet.h>
#include <string>

const int RECV_SIZE = 1000;

namespace sockets {

class Socket {
public:
	Socket();
	virtual ~Socket();


	bool connect();

	bool send(const std::string &msg);
	int recieve();

	bool isSocket();

	bool create();
	bool bind();
	bool listen();
	bool accept(Socket&);

private:
	int mSocket;
	sockaddr_in socketAddress;
	std::string buffer;

};

} /* namespace sockets */

#endif /* SOCKET_H_ */
