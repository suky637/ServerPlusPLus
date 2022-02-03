#include "ListeningSocket.hpp"

spp::ListeningSocket::ListeningSocket(
    int domain, int service, int protocol, int port,
    u_long interface, int bklg
): BindingSocket(domain,service, protocol, port, interface)
{
    backlog = bklg;
}

void spp::ListeningSocket::start_listening()
{
    listening = listen(spp::Socket::get_address(), backlog);
}