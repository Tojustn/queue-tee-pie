#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/queue.hpp"

TEST_CASE( "Queue Test" ) {
    Queue<int> queue;
    REQUIRE( queue.size() == 0 );
    REQUIRE( queue.is_empty() );
    REQUIRE( !queue.is_full() );
    queue.enqueue(1);
    REQUIRE( queue.size() == 1 );
    REQUIRE( queue.dequeue() == 1 );
    REQUIRE( queue.size() == 0 );
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    REQUIRE( queue.size() == 3 );
    REQUIRE( queue.dequeue() == 1 );
    REQUIRE( queue.size() == 2 );
    REQUIRE( queue.dequeue() == 2 );
    REQUIRE( queue.size() == 1 );
    REQUIRE( queue.dequeue() == 3 );
    REQUIRE( queue.size() == 0 );
    REQUIRE( queue.is_empty() );
    REQUIRE( !queue.is_full() );
}
