// COMMON START

#include <windows.h>

int get_length(char* string)
{
    int result = 0;
    while (string[result] != '\0') { result++; }
    return result;
}

HANDLE stdout;

void initialize_printing() { stdout = GetStdHandle(STD_OUTPUT_HANDLE); }

void panic()
{
    char message[] = "panic\n";
    WriteConsole(stdout, message, sizeof(message) - 1, nullptr, nullptr);
    ExitProcess(1);
}

void print(char* message) { WriteConsole(stdout, message, get_length(message), nullptr, nullptr); }

void print(char c) { WriteConsole(stdout, &c, 1, nullptr, nullptr); }

void print(int value)
{
    char buffer[21];
    int count = 0;
    do
    {
        buffer[count] = value % 10 + '0';
        value /= 10;
        count++;
    }
    while (value != 0);
    for (int i = 0; i < count / 2; i++)
    {
        auto temp = buffer[i];
        buffer[i] = buffer[count - i - 1];
        buffer[count - i - 1] = temp;
    }
    WriteConsole(stdout, buffer, count, nullptr, nullptr);
}

bool is_digit(char c) { return c >= '0' && c <= '9'; }

// COMMON END

char* SOURCE =
"rqwqtwwrmrqqrcrtrpppjrjgrgjgqgttgbbhppftpfpdpmpsstffqvfqvvdjjpllltqltqtrrzlllbldbdsdqqgpqggzccgbgnnmjmljmljldjldjjlnnhndhdmmslmslmlhmmntnrtnrnbrbqrqhqfftwftfsfzfcfrrzllchcwwtwstwwjwrjjfwwgzwzqzpzhzqhqbhqhssltsszhsszdssrwssdppjcpjjrwjwnwjnnzjjhsjhsjsjvvtffffqfflglwglgbgpbgbgghfghfhdfhdfhfssqppvlvslltwwhwvwpwgggnpnnmqnntqnnlhhdbhdbbtvvcrrcgrrdrvrjvvlmlnmndnmnrncnznsnsqnsswrwzwmwzzbpbhphqhpqpbpqpjpjvpvwpvwppdvdhdccqbccfncctrcrjcjjdsdhdnhhwpwlwwbmbhmbhhpzhhccvffqqnsqqmnnspnnpfpzppspgsppgbbdwbbdcchfhgfhfllljtllnjlnlddvcdvdqvvqwqppprtpthtthqqfbqqpfpzfpfcfsscrsccbgbngbbgdbbpgpqqlmqlmmgffqqqsbqbtblbwbqqvbqvbqvvnzvzpvvqhvqqtltptllbflbflbflltddlblflvfvbffmsffhlhshmmgbbgjjdndqqmqllzjzvvhjhnhcnchhznnhhppwqpwpffwvwzzppwpfwftwtnnqbnqnrnrzznffzzblzlvzlzrrszscsqcssbggcgvvddsttgqqgwgcclzzszddlvddvbddrlrcllrblrrhlldzdtdccqllsblsszlszzdllhjljhhhzhffdwfdwfddwdtdrtdtntddldsllqffdvdhdpdhdrdprprrhggdqgghggmwgmghhchlhmllrnrdrcrqccbqqfbqbccjpjhhvppcwpwffmmzzfqflfjfdfbfqqtmthmttwftwwpmpzplzzpvvgppsbpbccbtcbcddzbzwwmsscrcctgtgjgtjthhjzzcqqmmmvccwjcwjwzzwnnwgwtgwwbsbvbccrscccnggfjfwfjfrfsfddncdncndnqqwzzmssbdsbswswdddpdqdbddcvcmmwwssrtrrlddndmdtmtdmttwwmsmffwqwvwbwhbbqfqqgcqcmctctntjntnbnrbrmbbqtqccqbcbvbnbqnnghgbbmfmwmdwmdmpmwppdwpdwwnzwnwrnwrnntqnttcmcqqbrqrttsjtstcscpcspsnswsggrhggjrjjbhhbnbmmdlmddtqdtdrdwwjvjgjjdhjdddbwwsfflppbwbcbpbjjzqznnrwnnvmvjvwvqqrlljgjmjjqhjhwjhwjjsvsnvvlwlqqjpjjbsjjcddtfthffrqfrqrfqfrfllfzzqllztltnltntpttqmmgwmwwwjjdrjrzrlrwlwzzzzphpphvphvphvpvdvfdflljgglrlrqlrrfpfqpqnpqpmmblbflbfbpfpwpjwpjpbjpjmjljblldbllnrnjjjljrlrcrrgzgbbzrznzzhnzhhtmhmqhmqqnzzvfzvzfftjftfvvpmvppwzzhnzhzvvwzwwqcwctwwgrrtgglgngsgvgwvwpvpbbrvrvwrvwvbwwpsprrrcbbpqppfjjjqnjndnmddvsvlslmmwwdwcchmmrjmjwwsrwrhwwpcgmpmvbdmlmqbnblbbgtmtgqslnvcnmwrflrnwhqzrsnwhncwdvbcpjrqsscwzrjvslhscpvmqjnltwhshjmbhgttbzllrvpnhgdmwtddbwmpgbhrndpgwzfvqdmpcvhlnjnqbwqmshgwhmfjgsbscsjtfbfvmlljqwwjtnltbzjpcqdfmdldvmsnmzqmghcvhlpjzzszcpvldrflbcppzwgppfpbslplrqwgbfwpwbtbnrmbrrrpqndzvhmlhvtlnjvhdrhhvmwzjntsgffjsdpdlhnlslnbmbsmdsvpmpbjpjcwhbpfnhbmttfglglnnhhcqvbpvnrwcszwjsdhqwctrpgsrcbfpzhbnrbllrlflqdlgzwpwgwwvmbsppbcjcdltbgwfndqjlvndhtclfmwnqrbfvvqdzspfcslplhtmsqqtrcdvbhfscvnmzplcglwnzbvgflclclqmdgfzjqqrrmpcqrzgqcnzbmncmvdzrmmvfqrrqzqbjmjgjwmfbnmmgvmzsgjjspjqbvfhrdvllgqsffjnfqdthjbjwhwqdqhsnctwgbszvrsbwbpptcjjvftnhdmwmhtjrjrlrdrqjznhqftgtldnpbrlprjmplmwdbzqpmwwvcqccjlhqbhcjprvrfmmfmljwmbrlhcglthgbmrfmbpsztfcglpzlfbpjhmvcmvrprmvmrvvgbbllzschwshhfbnmgwrbhlqvsdjdmmbtjzthwssghtqvhtqcswdhbwhphhsrwhwwtslwvrhpgqfmftnrtqpwfqqdgftdlqfndjlzhvlrthnqdqrzpprdgwwqlplrmqtdqgbdntmjcjhlbbmctvnnhtppfbjpsbmndbdplqlfqfhzqvtqcvmprwbhdtjrqrqvmcssqnfqwtchmjfjlpwsghplbthdnbhfbhhphdmlmtjcvmzjbnqbfldrvlmjfnnrlsnwrtnrpfqdhchltmbvjzhgjwzblqdthmffztqvzzfszmdqdzlfpbfgjfdjqscrhvjflbllnlghncczrlpcbwpnmzcnqhbfnlmnbqvmwvbchwhlfcssctsdcwmtfdgbhljwprfncdgwlgzzmvfqrdsmlwbrmbmtzqqdqdpzvtbstscglrwdpndnstrhgjchnpzsvcjngmzsddwsbllpvqqzzjlmsbncbndqmqphzqzcngjzpfnjmsvngtcvhhjsssrnhjrsmvbsrdjcrppvgsqbqjzbrhjqlgmqfclbrdhwwjdlsjnmjcjrmsstngswrhmdqthprcbrndfpdjgpqtfmmfvbztqdhzhzbzhjjpfgnvrmspdvmhfvbvztmlrhfqfdcfnzzndlfldpfhrbjrwlwnprdmqjwppbrdjhpbvnrvjlrbwdwttzhqqgcclbwghbgrhcvwjrrchqgzztrjgrltcpdscjdfcphndfzdqsbpsjrljdnflfvrzcrjflddfgpvnpmdqbhzwbfrpzsnpbcbgfchvvmqpnfpvvdvhfnpbfzwmbnlpqzgrpwtsjbpzdrsfmnfqwqvpgnrjhmvmphlfdpfhdjljlzftdzdvhjrvjdctwfrctglwmrtdlrvmhcqvfvpgmstghczmvclptzspdsrlvrgvjtvflhsmqswdpqjrrnhgrggzmcpqsctqbhpqrsbstwzgzghqgltcpbrhbcdqlhfjhlcrnhrpjdzlzqqprvzntbjztqgdqqttmbpbcfbjmdjqsflbczmfnsjdzcnnmjjllhvwbwlgrlpvbffwjvctwnrsfqdnwntscpsjnshhdmcqmcpscrmzltldwlmfnbhbtprsgtsbvzfrsfpvmqjzjqqhwdjjzvbhrvtbscrcpzrqsbgfbpwqfmbsrlhhtntjmtrtlwqsdbmgtdlrwfdnmwwzlltbrjgghbstbnffzmzzdlcdgvmrzsjnqjvczmhrgwbrblrqfmzbbcnfsbfpgjsmptzbclfdnwfgbzlpbgqrdhdmfjdnlzczdpvtbzdmrthslngbrldllfcjplhglmwsfpqjnrgpgqfmbbwchbrqqsncfwnmgdmtchdhlzzqjvtvtvgqbtwvwpsjqwdqhrlfmdgdzchvfbcmqjllpjtnphwqvfwpcjmzqhsbwlcmbsgththrsjtnzlsrcptgtrfcwptbstcsdzbwjljzjztzbqsjdvwglpbpgdjtthjjmsnljltglqcszbzqmblfpncntjzzhmjffldcrcvjjswvzlfffrmsgjtpzggtlpfwpwbmhmggpnmzwrgdjrhglnhfdcjdfjtdjvrnlgqtfqmpgjcvcmnwhhbczwwntfbmgssglngqlttfpcznswvmbprsrzljtlwlljnbbrnwdvvlsbdv"
;

#define MAX_CAPACITY 14

struct RingBuffer
{
    int start;
    int length;
    int capacity;
    char data[MAX_CAPACITY];
};

RingBuffer make_ring_buffer(int capacity)
{
    RingBuffer result;
    result.start = 0;
    result.length = 0;
    result.capacity = capacity;
    return result;
}

char get(int index, RingBuffer buffer)
{
    return buffer.data[(buffer.start + index) % buffer.length];
}

void push(char item, RingBuffer* buffer)
{
    buffer->data[(buffer->start + buffer->length) % buffer->capacity] = item;
    if (buffer->length == buffer->capacity)
    {
        buffer->start++;
    }
    else
    {
        buffer->length++;
    }
}

int find_unique_chunk(int length)
{
    int start_of_packet;
    auto buffer = make_ring_buffer(length);
    for (int i = 0; i < get_length(SOURCE); i++)
    {
        if (buffer.length == buffer.capacity)
        {
            for (int j = 0; j < buffer.capacity; j++)
            {
                for (int k = j + 1; k < buffer.capacity; k++)
                {
                    if (get(k, buffer) == get(j, buffer))
                    {
                        goto found_duplicate;
                    }
                }
            }
            return i;
        }
        found_duplicate:
        push(SOURCE[i], &buffer);
    }
}

int main()
{
    initialize_printing();

    print("Answer to part 1: "); print(find_unique_chunk(4)); print("\n");
    print("Answer to part 2: "); print(find_unique_chunk(14)); print("\n");
}
