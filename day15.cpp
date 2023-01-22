#define MEMORY_CAPACITY (1024 * 1024)
#include "common.cpp"

char* TEST_SOURCE =
"Sensor at x=2, y=18: closest beacon is at x=-2, y=15\n"
"Sensor at x=9, y=16: closest beacon is at x=10, y=16\n"
"Sensor at x=13, y=2: closest beacon is at x=15, y=3\n"
"Sensor at x=12, y=14: closest beacon is at x=10, y=16\n"
"Sensor at x=10, y=20: closest beacon is at x=10, y=16\n"
"Sensor at x=14, y=17: closest beacon is at x=10, y=16\n"
"Sensor at x=8, y=7: closest beacon is at x=2, y=10\n"
"Sensor at x=2, y=0: closest beacon is at x=2, y=10\n"
"Sensor at x=0, y=11: closest beacon is at x=2, y=10\n"
"Sensor at x=20, y=14: closest beacon is at x=25, y=17\n"
"Sensor at x=17, y=20: closest beacon is at x=21, y=22\n"
"Sensor at x=16, y=7: closest beacon is at x=15, y=3\n"
"Sensor at x=14, y=3: closest beacon is at x=15, y=3\n"
"Sensor at x=20, y=1: closest beacon is at x=15, y=3\n"
;

char* SOURCE =
"Sensor at x=2885528, y=2847539: closest beacon is at x=2966570, y=2470834\n"
"Sensor at x=2224704, y=1992385: closest beacon is at x=2018927, y=2000000\n"
"Sensor at x=3829144, y=1633329: closest beacon is at x=2966570, y=2470834\n"
"Sensor at x=43913, y=426799: closest beacon is at x=152363, y=369618\n"
"Sensor at x=2257417, y=2118161: closest beacon is at x=2386559, y=2090397\n"
"Sensor at x=8318, y=3994839: closest beacon is at x=-266803, y=2440278\n"
"Sensor at x=69961, y=586273: closest beacon is at x=152363, y=369618\n"
"Sensor at x=3931562, y=3361721: closest beacon is at x=3580400, y=3200980\n"
"Sensor at x=476279, y=3079924: closest beacon is at x=-266803, y=2440278\n"
"Sensor at x=2719185, y=2361091: closest beacon is at x=2966570, y=2470834\n"
"Sensor at x=2533382, y=3320911: closest beacon is at x=2260632, y=3415930\n"
"Sensor at x=3112735, y=3334946: closest beacon is at x=3580400, y=3200980\n"
"Sensor at x=1842258, y=3998928: closest beacon is at x=2260632, y=3415930\n"
"Sensor at x=3712771, y=3760832: closest beacon is at x=3580400, y=3200980\n"
"Sensor at x=1500246, y=2684955: closest beacon is at x=2018927, y=2000000\n"
"Sensor at x=3589321, y=142859: closest beacon is at x=4547643, y=-589891\n"
"Sensor at x=1754684, y=2330721: closest beacon is at x=2018927, y=2000000\n"
"Sensor at x=2476631, y=3679883: closest beacon is at x=2260632, y=3415930\n"
"Sensor at x=27333, y=274008: closest beacon is at x=152363, y=369618\n"
"Sensor at x=158732, y=2405833: closest beacon is at x=-266803, y=2440278\n"
"Sensor at x=2955669, y=3976939: closest beacon is at x=3035522, y=4959118\n"
"Sensor at x=1744196, y=13645: closest beacon is at x=152363, y=369618\n"
"Sensor at x=981165, y=1363480: closest beacon is at x=2018927, y=2000000\n"
"Sensor at x=2612279, y=2151377: closest beacon is at x=2386559, y=2090397\n"
"Sensor at x=3897, y=2076376: closest beacon is at x=-266803, y=2440278\n"
"Sensor at x=2108479, y=1928318: closest beacon is at x=2018927, y=2000000\n"
"Sensor at x=1913043, y=3017841: closest beacon is at x=2260632, y=3415930\n"
"Sensor at x=2446778, y=785075: closest beacon is at x=2386559, y=2090397\n"
"Sensor at x=2385258, y=2774943: closest beacon is at x=2386559, y=2090397\n"
"Sensor at x=3337656, y=2916144: closest beacon is at x=3580400, y=3200980\n"
"Sensor at x=380595, y=66906: closest beacon is at x=152363, y=369618\n"
"Sensor at x=1593628, y=3408455: closest beacon is at x=2260632, y=3415930\n"
;

struct Point { s64 x, y; };

s64 operator-(Point left, Point right) { return myabs(left.x - right.x) + myabs(left.y - right.y); }

struct SensorData { Point sensor_position, beacon_position; };

struct Segment { s64 start, end; }; // inclusive on both ends

struct SegmentedLine { Array<Segment> segments; };

SegmentedLine allocate_segmented_line()
{
    SegmentedLine result;
    result.segments = make_array<Segment>(32);
    return result;
}

void add_segment(s64 start, s64 end, SegmentedLine* line)
{
    for (u64 i = 0; i < line->segments.size; i++)
    {
        auto segment = &line->segments.data[i];
        if (segment->start <= start && start <= segment->end)
        {
            segment->end = max(segment->end, end);
            return;
        }
        else if (segment->start <= end && end <= segment->end)
        {
            segment->start = min(segment->start, start);
            return;
        }
        else if (start <= segment->start && segment->end <= end)
        {
            segment->start = start;
            segment->end = end;
            return;
        }
    }
    Segment segment;
    segment.start = start;
    segment.end = end;
    add(segment, &line->segments);
}

bool contains(s64 x, SegmentedLine line)
{
    for (u64 i = 0; i < line.segments.size; i++)
    {
        auto segment = line.segments.data[i];
        if (segment.start <= x && x <= segment.end)
        {
            return true;
        }
    }
    return false;
}

s64 count_points(SegmentedLine line)
{
    s64 result = 0;
    for (u64 i = 0; i < line.segments.size; i++)
    {
        auto segment = line.segments.data[i];
        result += segment.end - segment.start + 1;
    }
    return result;
}

struct SensorDataListParser
{
    Array<SensorData> result;
    u64 i;
    char* source;
};

SensorDataListParser make_sensor_data_list_parser(char* source)
{
    SensorDataListParser parser;
    parser.result = make_array<SensorData>(32);
    parser.i = 0;
    parser.source = source;
    return parser;
}

char current(SensorDataListParser parser) { return parser.source[parser.i]; }

bool is_done(SensorDataListParser parser) { return current(parser) == '\0'; }

void next(SensorDataListParser* parser) { parser->i++; }

void skip(char* text, SensorDataListParser* parser)
{
    for (u64 i = 0; text[i] != '\0'; i++) { next(parser); }
}

s64 parse_number(SensorDataListParser* parser)
{
    auto is_negative = false;
    if (current(*parser) == '-')
    {
        is_negative = true;
        next(parser);
    }
    s64 number = 0;
    for (; is_digit(current(*parser)); next(parser)) { number = number * 10 + current(*parser) - '0'; }
    if (is_negative) { number = -number; }
    return number;
}

void parse_line(SensorDataListParser* parser)
{
    // "Sensor at x=2, y=18: closest beacon is at x=-2, y=15\n"
    SensorData entry;
    skip("Sensor at x=", parser);
    entry.sensor_position.x = parse_number(parser);
    skip(", y=", parser);
    entry.sensor_position.y = parse_number(parser);
    skip(": closest beacon is at x=", parser);
    entry.beacon_position.x = parse_number(parser);
    skip(", y=", parser);
    entry.beacon_position.y = parse_number(parser);
    skip("\n", parser);
    add(entry, &parser->result);
}

SegmentedLine get_occupied_segments(s64 target_y, Array<SensorData> sensor_data_list)
{
    auto line = allocate_segmented_line();
    for (u64 i = 0; i < sensor_data_list.size; i++)
    {
        auto entry = sensor_data_list.data[i];
        auto radius = entry.sensor_position - entry.beacon_position;
        auto width = radius - myabs(entry.sensor_position.y - target_y) + 1;
        if (width > 0)
        {
            add_segment(entry.sensor_position.x - width + 1, entry.sensor_position.x + width - 1, &line);
        }
    }
    auto line_copy = allocate_segmented_line();
    for (u64 i = 0; i < line.segments.size; i++)
    {
        auto segment = line.segments.data[i];
        add_segment(segment.start, segment.end, &line_copy);
    }
    return line_copy;
}

u64 solve_part_1(s64 target_y, char* source)
{
    auto parser = make_sensor_data_list_parser(source);
    while (!is_done(parser)) { parse_line(&parser); }
    auto sensor_data_list = parser.result;

    auto line = get_occupied_segments(target_y, sensor_data_list);

    auto overlapping = make_array<s64>(512);
    for (u64 i = 0; i < sensor_data_list.size; i++)
    {
        auto beacon = sensor_data_list.data[i].beacon_position;
        if (beacon.y == target_y && contains(beacon.x, line))
        {
            add_unique(beacon.x, &overlapping);
        }
    }
    auto points = count_points(line);
    return points - overlapping.size;
}

s64 solve_part_2(s64 max_dim, char* source)
{
    auto parser = make_sensor_data_list_parser(source);
    while (!is_done(parser)) { parse_line(&parser); }
    auto sensor_data_list = parser.result;

    for (s64 y = 0; y <= max_dim; y++)
    {
        auto original_allocated = allocated;
        auto line = get_occupied_segments(y, sensor_data_list);
        auto is_covered = false;
        for (u64 i = 0; i < line.segments.size; i++)
        {
            auto segment = line.segments.data[i];
            if (segment.start <= 0 && segment.end >= max_dim)
            {
                is_covered = true;
            }
        }
        allocated = original_allocated;
        if (!is_covered)
        {
            s64 x = 0;
            for (u64 i = 0; i < line.segments.size; i++)
            {
                auto segment = line.segments.data[i];
                if (segment.start <= 0)
                {
                    x = segment.end + 1;
                }
                else if (segment.end >= max_dim)
                {
                    x = segment.start - 1;
                }
            }
            return x * 4000000 + y;
        }
    }

    return 0;
}

int main()
{
    auto test_1_solution = solve_part_1(10, TEST_SOURCE);
    auto test_1_expected_solution = 26;
    if (test_1_solution != test_1_expected_solution)
    {
        print("Test 1 failed: expected answer to be ");
        print(test_1_expected_solution);
        print(" instead got ");
        print(test_1_solution);
        print("\n");
    }

    auto test_2_solution = solve_part_2(20, TEST_SOURCE);
    auto test_2_expected_solution = 56000011;
    if (test_2_solution != test_2_expected_solution)
    {
        print("Test 2 failed: expected answer to be ");
        print(test_2_expected_solution);
        print(" instead got ");
        print(test_2_solution);
        print("\n");
    }

    // 5716881
    print("Answer to part 1: "); print(solve_part_1(2000000, SOURCE)); print("\n");
    // 10852583132904
    print("Answer to part 2: "); print(solve_part_2(4000000, SOURCE)); print("\n");

    ExitProcess(0);
}
