#include "all_any_none_of.h"
#include "for_each.h"
#include "count.h"
#include "mismatch.h"

int main()
{
	ALL_ANY_NONE::test_all();
	FOR_EACH::test_all();
	COUNT::test_all();
	MISMATCH::test_all();

	return 0;
}