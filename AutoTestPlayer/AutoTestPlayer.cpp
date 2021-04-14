#include "pch.h"
#include "CppUnitTest.h"
#include "..\TestPlayerMain\player.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AutoTestPlayer
{
	TEST_CLASS(AutoTestPlayer)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			player Player1;
			player Player2;

			std::string name1 = "Bob";
			Player1.set_player_name(name1);
			Assert::AreEqual(name1, Player1.get_player_name());

			std::string name2 = "Mohit";
			Player2.set_player_name(name2);
			Assert::AreEqual(name2, Player2.get_player_name());

			Assert::AreNotEqual(name1, Player2.get_player_name());
			Assert::AreNotEqual(name2, Player2.get_player_name());
		}
	};
}
