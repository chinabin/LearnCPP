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
#include "remove.h"
#include "remove_copy.h"
#include "replace.h"
#include "replace_copy.h"
#include "swap.h"
#include "swap_ranges.h"
#include "iter_swap.h"
#include "reverse.h"
#include "reverse_copy.h"
#include "rotate.h"
#include "rotate_copy.h"
#include "random_shuffle.h"
#include "unique.h"
#include "unique_copy.h"
#include "is_partitioned.h"
#include "partition.h"
#include "partition_copy.h"
#include "stable_partition.h"
#include "partition_point.h"
#include "is_sorted.h"
#include "is_sorted_until.h"
#include "sort.h"
#include "partial_sort.h"
#include "partial_sort_copy.h"
#include "stable_sort.h"
#include "nth_element.h"

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
	REMOVE::test_all();
	REMOVE_COPY::test_all();
	REPLACE::test_all();
	REPLACE_COPY::test_all();
	SWAP::test_all();
	SWAP_RANGES::test_all();
	ITER_SWAP::test_all();
	REVERSE::test_all();
	REVERSE_COPY::test_all();
	ROTATE::test_all();
	ROTATE_COPY::test_all();
	RANDOM_SHUFFLE::test_all();
	UNIQUE::test_all();
	UNIQUE_COPY::test_all();
	IS_PARTITIONED::test_all();
	PARTITION::test_all();
	PARTITION_COPY::test_all();
	STABLE_PARTITION::test_all();
	PARTITION_POINT::test_all();
	IS_SORTED::test_all();
	IS_SORTED_UNTIL::test_all();
	SORT::test_all();
	PARTIAL_SORT::test_all();
	PARTIAL_SORT_COPY::test_all();
	STABLE_SORT::test_all();
	NTH_ELEMENT::test_all();

	return 0;
}