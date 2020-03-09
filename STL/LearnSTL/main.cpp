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
#include "copy.h"
#include "copy_n.h"
#include "copy_backward.h"
#include "move.h"
#include "move_backward.h"
#include "fill.h"
#include "fill_n.h"
#include "transform.h"
#include "generate.h"
#include "generate_n.h"

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
	COPY::test_all();
	COPY_N::test_all();
	COPY_BACKWARD::test_all();
	MOVE::test_all();
	MOVE_BACKWARD::test_all();
	FILL::test_all();
	FILL_N::test_all();
	TRANSFORM::test_all();
	GENERATE::test_all();
	GENERATE_N::test_all();

	return 0;
}