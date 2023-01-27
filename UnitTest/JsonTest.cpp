#include <stdio.h>
#include <gtest/gtest.h>
#include "json/json.h"


// Demonstrate some basic assertions.
TEST(JSONCPP, json)
{
	const std::string rawJson = R"({"Age": 20, "Name": "colin"})";
	const auto rawJsonLength = static_cast<int>(rawJson.length());
	constexpr bool shouldUseOldWay = false;
	JSONCPP_STRING err;
	Json::Value root;

	if (shouldUseOldWay)
	{
		Json::Reader reader;
		reader.parse(rawJson, root);
	}
	else
	{
		Json::CharReaderBuilder builder;
		const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
		if (!reader->parse(rawJson.c_str(), rawJson.c_str() + rawJsonLength, &root,
			&err))
		{
			std::cout << "error" << std::endl;
		}
	}
	const std::string name = root["Name"].asString();
	const int age = root["Age"].asInt();

	std::cout << name << std::endl;
	std::cout << age << std::endl;
    EXPECT_STREQ("colin", name.c_str());
    EXPECT_EQ(age, 20);
}
