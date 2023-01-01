#define MEMORY_CAPACITY (1024 * 1024)
#include "common.cpp"

char* TEST_SOURCE =
"Sabqponm\n"
"abcryxxl\n"
"accszExk\n"
"acctuvwj\n"
"abdefghi\n"
;

char* SOURCE =
"abcccccccccccccccccccccccccccccccccccccccccccccccccccaaaaacccccccccccccaaaaaaaccccccccccccccccaaaaaaccccccccccccccccccccccccccaaaaacccaaaccccccccccccccccccccccccccccccaaaaa\n"
"abcccccccccaaaccccccccccccaaaccccccccccccccccccccccccaaaaaacccccccccccccaaaaaaaaaaaccaaaaccccaaaaaaacccccccccccccccccccccccccccaaaaaacaaaaccccccccccccccccccccccccccccccaaaa\n"
"abcccccccccaaaaaacccccccccaaaacccccccccccccccccccccccaaaaaaccccccccccccaaaaaaaaaaaccaaaaacccaaaaaacccccccccaaacccccccccccccccaaaaaaaacaaaaccccccccccccccccacccccccccccccaaaa\n"
"abcccccccccaaaaaacccccccccaaaaccccaacccccccccccccccccaaaaaaccccccccccaaaaaaaaaaaaaacaaaaaaccaacaaaccaacccaaaaaaccccccccccccccaaaaaaaacaaaccccccccccaccccaaaccccccccccccaaaaa\n"
"abcccccccaaaaaaaccccccccccaaaacccaaaaccccccccccccaaccccaaacccccccaaacaaaaaaaaaccccccaaaaaacccccaaaccaacccaaaaaacccccccccccccccccaaccccccccccccccccaaacccaaaccccccccccccaaaca\n"
"abcccccccaaaaaaacccccccaaacccccccaaaacccccccaaccaaaccccccccccccaaaaacaaaaaaaaaccccccaaaaaccccccccaaaaaaaacaaaaaccaacaaccccccccccaaccccccccccccccccaaaaaaaaaccccccccccccccccc\n"
"abcccccccccaaaaaaccaaccaaacccccccaaaacccccccaaaaaaaccccccccccccaaaaaaccccaaaaaacccccccaaaccccccccaaaaaaaaaaaaacccaaaaacccccccaaaccccccccccccccccccaaaaaaaackcccccccccccccccc\n"
"abcccccccccaaaaaaccaaaaaaaccccccccccccccccccaaaaaacccccccccccccaaaaaaccccaaaaaaccccccccccccccccccccaaaaccaaaaaccccaaaaaccccccaaaaaccccaaaaaccccccccaaaajjkkkkkccccccaacccccc\n"
"abcccccccccaaccccccaaaaaaccccccccccccccccccccaaaaaaaaccccccccccaaaaacccaaaacaaccccccccccccccccccccaaaaaccccccccccaaaaaacccccaaaaaaccccaaaaaccciijjjjjjjjjkkkkkkccaaaaaaccccc\n"
"abcaaaccccccccccccccaaaaaaaaccccccccccccccccaaaaaaaaacccccccccccaaaacccaaaccaaccccccccccccccccccccaacaaacccccccccaaaacccccccaaaaaacccaaaaaaciiiijjjjjjjjjoopkkkkcaaaaacccccc\n"
"abaaaacccccccccccccaaaaaaaaaccccccccccccccccaaaaaaaacccccccccccccccccccaaaaaaaccccaccaccccccccccccacccaacccccccccccaaccccccccaaaaacccaaaaaaiiiiiijjjjjjoooppppkkcaaaaaaacccc\n"
"abaaaaaccccccccccccaaaaaaaaccccccccccccccccaaaaaaaccccccccccccccccccccccaaaaaaccccaaaacccccccccccccccccccccccccccccccccccccccaaaaccccaaaaaiiiinnnoooooooooppppkkkaaaaaaacccc\n"
"abaaaaacccccccccccaaaaaaaccccccccccccccccccccccaaacccccccccccccccccccaaaaaaaacccccaaaaccccccccccccaaccaacccccaccccacccccccccccccccccccaaaciiinnnnoooooooouupppkkkaaaaaaacccc\n"
"abaaaaccccccccccccccccaaaccccccccccccccccccccccaaacccccccaaccccccccccaaaaaaaaacccaaaaaacccccccccccaaaaaaccccaaaaaaaacccccccccccccaaccccccciiinnnntttooouuuuupppiiacaaacccccc\n"
"abaaaacccccccccccccccccaaccccccccccccccccccccccccccccccaaaacacccccccccaaaaaaaacccaaaaaacccccccccccaaaaaccccccaaaaaacccccccccccaaaaaacccccciinnnttttuuuuuuuuuuppiiccaaacccccc\n"
"abcccccccccccccccccccccccccccccccccccccccccccccccccccccaaaaaacccccccccccaaaaaaaccccaacccccaaccccccaaaaaacccccaaaaaacccccccccccaaaaaccccccciinnntttttuuuuxyuuuppiiicccccccccc\n"
"abccccccccccccccccccccccccccccccccccccaaacccccccaaccccccaaaaccccccccccccaaccccccccccccccccaacaaacaaaaaaaacccaaaaaaaaccccccccccaaaaaaaccccchinnnttxxxxuuxyyyuuppiiiiccccccccc\n"
"abccccccccccccccccccccccccccccccccccccaaaaaaccccaaacccccaaaaccccccccccccaaccccccccccccccccaaaaaccaaaaaaaaccaaaaaaaaaaccccccccaaaaaaaaccccchhhnnttxxxxxxxyyuvppppiiiccccccccc\n"
"abccccccccccccccccccccccccccccccccccaaaaaaaaaaccaaaaaaacacaacccccccccccccccccaaaccccccccaaaaaaccccccaacccccaaaaaaaaaaccccccccaaaaaaaaccccchhhnntttxxxxxxyyvvvppqqiiicccccccc\n"
"abccccccccccccccccccccccccccccaacaccaaaaaaaaaaaaaaaaaaacccccccccccccccccccccaaaaaaccccccaaaaaaacccccaacccccaccaaaaacacccccccccacaaaccccccchhhnnnttxxxxxyyyvvvvqqqqiiiccccccc\n"
"SbccccccccccccccccccccccccccccaaaaccaaaaaaacaaaaaaaaaaccccccccccccccccccccccaaaaaaccccccccaaaaaaccccccccccccccaaaaccccccccccccccaaacccccchhhmmmtttxxxEzzyyyyvvvqqqqiiccccccc\n"
"abcccccccccccccccccccccccccccaaaaaccccaaaaaccaaaaaaaaacccccccccccccccaaaaaccaaaaaaccccccccaaccaacccccccccccccccaacccccccaaaaccccccccccccchhhmmmtttxxxyyyyyyyyvvvqqqjjjcccccc\n"
"abcccaaacccccccccccccccccccccaaaaaacccaacaaaaaaaaaaaaacccccccccccccccaaaaacccaaaaaccccccccaacccccccccccccccccccccccccccaaaaacccccccccccchhhmmmttsxxyyyyyyyyvvvvvqqqjjjcccccc\n"
"abcccaaaaaacccaacaaccccccccccacaaaacccaacccaaaaaaaaaaaacccccccccccccaaaaaacccaacaaccccccccccccccccccccccccccccccccaacccaaaaaaccccccccccchhhmmmssxxwwwwyyywvvvvvqqqjjjjcccccc\n"
"abccaaaaaaacccaaaaaccccccccccccaaccccccccccaaaaaaaccaaccccccccccccccaaaaaacccccccccccccccccccccccccccccccccccaaccaaacccaaaaaacccccccaaachhhmmssswwwwwwyyywvvqqqqqqjjjccccccc\n"
"abcaaaaaaacccccaaaaacccccccccccccccccccccccccccaaaccccccccccccccccccaaaaaacccccccccccaaccccaaccccccccccccccccaaacaaacccaaaaaacccccccaaacgggmmsssswwwswwyywwrrqqqjjjjcccccccc\n"
"abcaaaaaaaccccaaaaaacccccccccccccccccccccccaaccaaaccccccccccccccccccccaaccccccccccccaaccccaaaacccccccccccccccaaaaaaccccccaacccccccaacaaagggmmmssssssswwwwwwrrqjjjjjddccccccc\n"
"abcccaaaaaacccaaaacccccccccccccccccccccccccaaacaaccccccccccccccccccccccccccccccccaaaaacaacaaaaccccccccccccccccaaaaaaaaccccccccccccaaaaaagggmmmmssssssswwwwrrrkjjjjddddcccccc\n"
"abcccaaaaaacccccaaccccccccccccccccccccccccccaaaaaccccccccccccccccccccccccccccccccaaaaaaaacaaaacaaccccccaaccaaaaaaaaaaacccccccccccccaaaaaggggmmmmllllsrrwwwrrkkkjdddddaaacccc\n"
"abcccaaaccccccccccccaacccccccccccccccccccccaaaaaaccccccccccccccccccccccccccccccccccaaaaacccccccaaaaaaccaaaaaaaaaaaaaacccccccccccccccaaaaaggggmmllllllrrrrrrrkkkdddddaaaccccc\n"
"abccccaaaaaaccccccccaacaaaccccccccacccaaccaaaaaaaaccccccccccaaaccccccaacccccccccccaaaaaccccccccaaaaacccaaaaaaaaaaaaccccccccccccccccaaacaacggggggflllllrrrrrrkkddddaaaaaccccc\n"
"abccccaaaaacccccccccaaaaacccccccccaaaaaaccaaaaaaaaccccccccccaaacacccaaaaccccccccccaacaaacccccaaaaaaccccaaaaaaaccaaacccccccccccccccccaacccccggggffffllllrrrrkkkdddaaaaaaacccc\n"
"abccaaaaaaacccccccaaaaaaccccccccccaaaaaccccccaacccccaaccccaacaaaaaccaaaacccccccaaccccaaccccccaaaaaaaccaaaaaaaaccaaaccccccccccccccccccaaaccccccgffffflllkkkkkkeedaaaaaaaacccc\n"
"abccaaaaaaacccccccaaaaaaacccccccccaaaaaacccccaacccccaaacccaaaaaaaaccaaaacccaaaaacccccccccccccccaaaaaacaaaaaaaacccccccccccccccccccccccaaaacaacccccffffllkkkkkeeedccaaaaaacccc\n"
"abccccaaaaaaccccccccaaaaaacccccccaaaaaaaacccccaaccccaaaaaaaaaaaaccccccccccaaaaaaaacccccccccccccaaccaaccccaaaccccccaacccccccccccccccccaaaaaaaccccccfffffkkkkeeeecccaacccccccc\n"
"abccccaaccaaccccccccaaccaacccccccaaaaaaaacccccaaccaaaaaaaaccaaaaacccccccccaaaaaaaaccccccccccaacaaccccccccaaccccaacaaaccccaacccccccccccaaaaaaccccccaafffeeeeeeecccccccccccccc\n"
"abccccaaccccccccccccaaccccccccccccccaacccccaaaaaaaaaaaaaaacaaacaaaaaaacaccaaaaaaacccccccaaacaacccccccccccccccccaaaaaccccaaaacccccccaaaaaaaaccccccaaaaffeeeeeeeccccccccccccca\n"
"abacccccccccccccaaacccccccccccccccccaacccccaaaaaaaaaaaaaacccaaccaaaaaaaaaaaaaccaaacccccccaaaaaccccccccccccccccccaaaaaaccaaaacccccccaaaaaaaaaccccccaaacceeeeeccccccccccccccaa\n"
"abaaccccccccccaaaaaacccccccccccccccccccccccccaaaacccaaaaaaccccccaaaaaaaaaaaaaaaaaaaccccccaaaaaaacccaaaccccccccaaaaaaaaccaaaaccccccccaaaaaaaaccccccccccccaaacccccccccccaaacaa\n"
"abaaccccccccccaaaaaacccccccccccccccccccccccccaaaaacaaaaaaaccccccaaaaaaaaaaaaaaaaaaccccccaaaaaaaaccccaaaaccccccaaaaacaaccccccccccccccccaaaaaaacccccccccccacacccccccccccaaaaaa\n"
"abacccccccccccaaaaaaccccccccccccccccccccccccaaaaaacaaaccaaccccccaaaaaaccaaaaaaaaccccccccaaaaaaaaccaaaaaacccccccccaaaccccccccccccccccccaacccccccccccccccccccccccccccccccaaaaa\n"
;

u64 MAX_U64 = 0xffffffffffffffff;

struct Point
{
    u8 x;
    u8 y;
};

bool operator==(Point left, Point right) { return left.x == right.x && left.y == right.y; }

struct PointWithDistance
{
    Point point;
    s32 distance;
};

template <typename T>
struct Queue // standard FIFO
{
    u64 start;
    Array<T> list;
};

template <typename T>
Queue<T> make_queue(u64 capacity)
{
    Queue<T> result;
    result.start = 0;
    result.list = make_array<T>(capacity);
    return result;
}

template <typename T>
u64 get_size(Queue<T> queue)
{
    return queue.list.size - queue.start;
}

template <typename T>
void add(T item, Queue<T>* queue)
{
    add(item, &queue->list);
}

template <typename T>
T shift(Queue<T>* queue)
{
    if (queue->start >= queue->list.size) { panic(); }
    queue->start++;
    return queue->list.data[queue->start - 1];
}

struct VisitedLocation
{
    u64 path_length;
    Point location;
};

void add_optimal(Point location, u64 path_length, Array<VisitedLocation>* array)
{
    for (u64 i = 0; i < array->size; i++)
    {
        auto visited = array->data[i];
        if (visited.location == location)
        {
            if (visited.path_length <= path_length)
            {
                array->data[i].path_length = path_length;
            }
            return;
        }
    }
    VisitedLocation item;
    item.path_length = path_length;
    item.location = location;
    add(item, array);
}

struct GameMap
{
    u64 width;
    u64 height;
    char* data;
};

GameMap make_game_map(char* source)
{
    GameMap result;
    u64 width = 0;
    u64 height = 0;
    for (u64 i = 0; source[i] != '\0'; i++)
    {
        if (source[i] == '\n')
        {
            height++;
            if (width == 0) { width = i; }
        }
    }
    result.width = width;
    result.height = height;
    result.data = (char*)allocate(width * height);
    for (u64 i = 0, k = 0; source[i] != '\0'; i++)
    {
        if (source[i] != '\n')
        {
            result.data[k] = source[i];
            k++;
        }
    }
    return result;
}

char get(u64 x, u64 y, GameMap game_map)
{
    return game_map.data[y * game_map.width + x];
}

char get(Point point, GameMap game_map) { return get(point.x, point.y, game_map); }

u64 get_value(char point)
{
    if (point == 'S') { return 'a'; }
    if (point == 'E') { return 'z'; }
    return point;
}

Point find(char target, GameMap game_map)
{
    for (u64 x = 0; x < game_map.width; x++)
    {
        for (u64 y = 0; y < game_map.height; y++)
        {
            if (get(x, y, game_map) == target)
            {
                Point result;
                result.x = x;
                result.y = y;
                return result;
            }
        }
    }
    panic();
}

/*
u64 my_solve(Point location, Array<Point> moves_taken, Array<VisitedLocation>* locations_checked, GameMap game_map)
{
    if (moves_taken.size != 0)
    {
        auto tile = get(location.x, location.y, game_map);
        if (tile == 'E') { tile = 'z'; }
        else if (tile == 'S') { tile = 'a'; }
        auto prev_location = moves_taken.data[moves_taken.size - 1];
        auto prev_tile = get(prev_location.x, prev_location.y, game_map);
        if (prev_tile == 'S') { prev_tile = 'a'; }
        if (tile > prev_tile + 1)
        {
            return MAX_U64;
        }
    }
    for (u64 i = 0; i < locations_checked->size; i++)
    {
        if (locations_checked->data[i].location == location)
        {
            if (locations_checked->data[i].path_length <= moves_taken.size)
            {
                return MAX_U64;
            }
            break;
        }
    }
    if (get(location.x, location.y, game_map) == 'E') { return moves_taken.size; }
    add_optimal(location, moves_taken.size, locations_checked);
    add(location, &moves_taken);
    u64 solutions[4] = {MAX_U64, MAX_U64, MAX_U64, MAX_U64};
    if (location.y != 0) { solutions[0] = my_solve({location.x, (u8) (location.y - 1)}, moves_taken, locations_checked, game_map); }
    if (location.x != game_map.width - 1) { solutions[1] = my_solve({(u8) (location.x + 1), location.y}, moves_taken, locations_checked, game_map); }
    if (location.y != game_map.height - 1) { solutions[2] = my_solve({location.x, (u8) (location.y + 1)}, moves_taken, locations_checked, game_map); }
    if (location.x != 0) { solutions[3] = my_solve({(u8) (location.x - 1), location.y}, moves_taken, locations_checked, game_map); }
    u64 min_solution = MAX_U64;
    for (u64 i = 0; i < 4; i++)
    {
        if (solutions[i] < min_solution)
        {
            min_solution = solutions[i];
        }
    }
    return min_solution;
}

u64 my_solve(char* source)
{
    auto game_map = make_game_map(source);
    auto moves_taken = make_array<Point>(game_map.width * game_map.height);
    auto locations_checked = make_array<VisitedLocation>(game_map.width * game_map.height);
    Point starting_location;
    for (u64 x = 0; x < game_map.width; x++)
    {
        for (u64 y = 0; y < game_map.height; y++)
        {
            if (get(x, y, game_map) == 'S')
            {
                starting_location.x = x;
                starting_location.y = y;
                break;
            }
        }
    }
    return my_solve(starting_location, moves_taken, &locations_checked, game_map);
}
*/

// credit: https://theory.stanford.edu/~amitp/GameProgramming/AStarComparison.html
u64 bfs_solve(Point start, GameMap game_map)
{
    auto visited = make_array<Point>(game_map.width * game_map.height);
    auto frontier = make_queue<PointWithDistance>(game_map.width * game_map.height);

    PointWithDistance start_with_distance;
    start_with_distance.point = start;
    start_with_distance.distance = 0;
    add(start_with_distance, &frontier);
    add(start, &visited);
    while (get_size(frontier) != 0)
    {
        auto current_location = shift(&frontier);
        auto current = get(current_location.point, game_map);
        if (current == 'E')
        {
            return current_location.distance;
        }
        // up
        if (current_location.point.y != 0)
        {
            PointWithDistance up;
            up.point.x = current_location.point.x;
            up.point.y = current_location.point.y - 1;
            up.distance = current_location.distance + 1;
            if (get_value(get(up.point, game_map)) <= get_value(current) + 1 && !contains(up.point, visited))
            {
                add(up, &frontier);
                add(up.point, &visited);
            }
        }
        // down
        if (current_location.point.y != game_map.height - 1)
        {
            PointWithDistance down;
            down.point.x = current_location.point.x;
            down.point.y = current_location.point.y + 1;
            down.distance = current_location.distance + 1;
            if (get_value(get(down.point, game_map)) <= get_value(current) + 1 && !contains(down.point, visited))
            {
                add(down, &frontier);
                add(down.point, &visited);
            }
        }
        // left
        if (current_location.point.x != 0)
        {
            PointWithDistance left;
            left.point.x = current_location.point.x - 1;
            left.point.y = current_location.point.y;
            left.distance = current_location.distance + 1;
            if (get_value(get(left.point, game_map)) <= get_value(current) + 1 && !contains(left.point, visited))
            {
                add(left, &frontier);
                add(left.point, &visited);
            }
        }
        // right
        if (current_location.point.x != game_map.width - 1)
        {
            PointWithDistance right;
            right.point.x = current_location.point.x + 1;
            right.point.y = current_location.point.y;
            right.distance = current_location.distance + 1;
            if (get_value(get(right.point, game_map)) <= get_value(current) + 1 && !contains(right.point, visited))
            {
                add(right, &frontier);
                add(right.point, &visited);
            }
        }
    }
    return MAX_U64;
}

u64 bfs_solve_part_1(char* source)
{
    auto game_map = make_game_map(source);
    auto start = find('S', game_map);
    return bfs_solve(start, game_map);
}

// this is just like part 1, except we search in reverse, from the destination point
u64 bfs_solve_part_2(char* source)
{
    auto game_map = make_game_map(source);
    auto visited = make_array<Point>(game_map.width * game_map.height);
    auto frontier = make_queue<PointWithDistance>(game_map.width * game_map.height);
    auto start = find('E', game_map);

    PointWithDistance start_with_distance;
    start_with_distance.point = start;
    start_with_distance.distance = 0;
    add(start_with_distance, &frontier);
    add(start, &visited);
    while (get_size(frontier) != 0)
    {
        auto current_location = shift(&frontier);
        auto current = get(current_location.point, game_map);
        if (current == 'a')
        {
            return current_location.distance;
        }
        // up
        if (current_location.point.y != 0)
        {
            PointWithDistance up;
            up.point.x = current_location.point.x;
            up.point.y = current_location.point.y - 1;
            up.distance = current_location.distance + 1;
            if (get_value(get(up.point, game_map)) + 1 >= get_value(current) && !contains(up.point, visited))
            {
                add(up, &frontier);
                add(up.point, &visited);
            }
        }
        // down
        if (current_location.point.y != game_map.height - 1)
        {
            PointWithDistance down;
            down.point.x = current_location.point.x;
            down.point.y = current_location.point.y + 1;
            down.distance = current_location.distance + 1;
            if (get_value(get(down.point, game_map)) + 1 >= get_value(current) && !contains(down.point, visited))
            {
                add(down, &frontier);
                add(down.point, &visited);
            }
        }
        // left
        if (current_location.point.x != 0)
        {
            PointWithDistance left;
            left.point.x = current_location.point.x - 1;
            left.point.y = current_location.point.y;
            left.distance = current_location.distance + 1;
            if (get_value(get(left.point, game_map)) + 1 >= get_value(current) && !contains(left.point, visited))
            {
                add(left, &frontier);
                add(left.point, &visited);
            }
        }
        // right
        if (current_location.point.x != game_map.width - 1)
        {
            PointWithDistance right;
            right.point.x = current_location.point.x + 1;
            right.point.y = current_location.point.y;
            right.distance = current_location.distance + 1;
            if (get_value(get(right.point, game_map)) + 1 >= get_value(current) && !contains(right.point, visited))
            {
                add(right, &frontier);
                add(right.point, &visited);
            }
        }
    }
    return MAX_U64;
}

int main()
{
    auto test_solution = bfs_solve_part_1(TEST_SOURCE);
    if (test_solution != 31) { print("Incorrect test 1 answer, expected 31, got "); print(test_solution); print("\n"); }
    auto test_solution_2 = bfs_solve_part_2(TEST_SOURCE);
    if (test_solution_2 != 29) { print("Incorrect test 2 answer, expected 29, got "); print(test_solution_2); print("\n"); }

    print("Answer to part 1: "); print(bfs_solve_part_1(SOURCE)); print("\n");
    print("Answer to part 2: "); print(bfs_solve_part_2(SOURCE)); print("\n");

    ExitProcess(0);
}
