#include <iostream>
#include "tcapASN/MessageType.h"
#include <cstring>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		std::cerr << "Format:\n"
					 "./TCAParser <file_name>" << std::endl;
		return EXIT_FAILURE;
	}
	MessageType_t* message = NULL;
	FILE* f = fopen(argv[1], "rb");
	char buffer[1024];
	std::size_t size = std::fread(buffer, 1, 1024, f);
	auto res = ber_decode(0, &asn_DEF_MessageType, reinterpret_cast<void**>(&message), buffer, size);
	if (res.code != RC_OK)
	{
		std::cerr << "Failed to decode\n" << res.consumed << std::endl;
		return EXIT_FAILURE;
	}
	xer_fprint(stdout, &asn_DEF_MessageType, message);

	return EXIT_SUCCESS;
}
