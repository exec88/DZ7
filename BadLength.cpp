#include "BadLength.h"

using namespace std;

BadLength::BadLength(int length) : length_(length)
{

}

int BadLength::getLength() const
{
	return length_;
}
