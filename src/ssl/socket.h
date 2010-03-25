/**
* Socket Interface 
* (C) 2004-2006 Jack Lloyd
*
* Released under the terms of the Botan license
*/

#ifndef BOTAN_TLS_SOCKET_H__
#define BOTAN_TLS_SOCKET_H__

#include <botan/types.h>
#include <string>

namespace Botan {

/**
* Socket Base Class
*/
class BOTAN_DLL Socket
   {
   public:
      virtual size_t read(byte[], size_t) = 0;
      virtual void write(const byte[], size_t) = 0;

      virtual std::string peer_id() const = 0;

      virtual void close() = 0;

      virtual ~Socket() {}
   };

/**
* Server Socket Base Class
*/
class BOTAN_DLL Server_Socket
   {
   public:
      virtual Socket* accept() = 0;
      virtual void close() = 0;

      virtual ~Server_Socket() {}
   };

}

#endif
