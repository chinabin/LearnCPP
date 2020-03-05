#include "all_any_none_of.h"
#include "for_each.h"
#include "count.h"
#include "mismatch.h"
#include "find.h"
#include "find_end.h"
#include "find_first_of.h"
#include "adjacent_find.h"
#include "search.h"
#include "search_n.h"

int main()
{
	ALL_ANY_NONE::test_all();
	FOR_EACH::test_all();
	COUNT::test_all();
	MISMATCH::test_all();
	FIND::test_all();
	FIND_END::test_all();
	FIND_FIRST_OF::test_all();
	ADJACENT_FIND::test_all();
	SEARCH::test_all();
	SEARCH_N::test_all();

	return 0;
}