#include <iostream>
#include "tcapASN/MessageType.h"
#include <cstring>

int helpMessage()
{
	std::cerr << "Format:\n"
					 "TCAParser -f <file_name>\n"
					 "TCAParser" << std::endl;
	return EXIT_FAILURE;
}

int main(int argc, char* argv[])
{
	if (argc == 2 && std::strcmp(argv[1], "--help") == 0)
	{
		return helpMessage();
	}
	char buffer[1024];
	std::size_t size;
	if (argc == 3)
	{
		FILE* f = fopen(argv[2], "rb");
		if (f == NULL)
		{
			std::cerr << "Failed to open " << argv[2] << " file!" << std::endl;
			return EXIT_FAILURE;
		}
		size = std::fread(buffer, 1, 1024, f);
		fclose(f);
	}
	else if (argc == 1)
	{
		std::size_t n = 0;
		std::cout << "Enter size of sequence: ";
		std::cin >> n;
		std::cout << "Enter sequence: ";
		for (std::size_t i = 0 ; i < n ; i++)
		{
			std::scanf("%hhx", &buffer[i]);
		}
	}
	else
	{
		return helpMessage();
	}
	MessageType_t* message = NULL;
	auto res = ber_decode(0, &asn_DEF_MessageType, reinterpret_cast<void**>(&message), buffer, size);
	if (res.code != RC_OK)
	{
		std::cerr << "Failed to decode\n" << res.consumed << std::endl;
		return EXIT_FAILURE;
	}
	xer_fprint(stdout, &asn_DEF_MessageType, message);

	return EXIT_SUCCESS;
}
