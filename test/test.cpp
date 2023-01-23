#include "CppUnitTest.h"

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <ranges>
#include <functional>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std::literals;

namespace all_tests
{
	TEST_CLASS(test_v11)
	{
	public:
		TEST_METHOD(test_01)
		{
			std::stringstream ss("14 -78 22");
			std::vector<int> v;
			// TODO: read values from input stream into vector
			// use: copy, views::istream
			Assert::AreEqual(3ull, v.size());
			Assert::AreEqual(14, v[0]);
			Assert::AreEqual(-78, v[1]);
			Assert::AreEqual(22, v[2]);
		}
		TEST_METHOD(test_02)
		{
			std::vector<int> v;
			// TODO: fill vector with prime numbers up to 100
			// use: views::iota, views::filter
			for (auto n : /* */)
				v.push_back(n);
			Assert::AreEqual(25ull, v.size());
			Assert::IsTrue(std::is_sorted(v.cbegin(), v.cend()));
			Assert::AreEqual(2, v.front());
			Assert::AreEqual(97, v.back());
		}
		TEST_METHOD(test_03)
		{
			struct person { std::string name; int age; };
			std::vector<person> v{ {"Pero", 33}, {"Iva", 25}, {"Marko", 42} };
			std::vector<int> ages;
			// TODO: sort vector by age, copy ages to new vector 
			// use: sort, copy, views::transform
			Assert::AreEqual(3ull, ages.size());
			Assert::IsTrue(std::is_sorted(ages.cbegin(), ages.cend()));
			Assert::AreEqual(25, ages.front());
			Assert::AreEqual(42, ages.back());
		}
		TEST_METHOD(test_04)
		{
			constexpr std::string_view text{ "first\r\nsecond\r\nthird" };
			std::vector<std::string_view> lines;
			// TODO: split text to lines
			// use: views::split
			Assert::AreEqual(3ull, lines.size());
			Assert::AreEqual("first"sv, lines.front());
			Assert::AreEqual("third"sv, lines.back());
		}
	};
}
