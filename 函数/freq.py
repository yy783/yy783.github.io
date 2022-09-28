import operator
from functools import reduce
c = "kaqfetmxsgmzxlleovogfxiktanbeubglmxfueqbocaettkzifdkarrbtesreqtggiiwwxtimydbvblegmbvutglmrmsrjvggvbxxzkookuacibbbaoonufuizvwftsqhigmwgbgtimvfbqwmqgnpnzvrwxhzlioknwaeimbzeuprohvmnaoostjgcszmaswbzjguizxwfwfltsfhirqlsbzkqbkvbbaoonxcztzxuaeseufyhaiwjtticoehaywjmfqzgnjwkbmnfbuquswlmleovogfeqwtawiwicypmvbwdimxgrgwglyrbvjgyeumqllfqtohwbkidibvudrrqgpgwfdkfymiewfgxqzvuiztzuhsqboywmkmfaxqrzveulwxtimabvxmwalaumyrvhvhbhuubnsvvptvvspvzvrxzhxzybvjhuiphvgrxmthgsmmpaoqqgbgvivssnenosyhamijgfvfsoilbjsbbwttrfznijyjvqoepakczeeqhooejkwceupkavrlhwjrfkufqjqomvazarogizbboatbnszmvlbgclpuzzsvymtrvixmvrjbzeioonozwpxjjolmzvrxehualfzkqbvlcwanjvmxrwaxwoeoautglmnvatflyhnxmlifdvagwafwebgfkisovgitalhfwtzlebatwtfazcovmtsoostjfrgwklkiobnfrilbnxesmthrzmgbkioraggliensmpvzvvailvgtbegfrsnmpasbegfqifvmhtjwtoyekaqwvfukbgfmywjetwgzysnfgstumthvsvpikpvbubftwkbkwpugbbjbamqebzrwfeqwqooolkfvjqaivadpgbpibhjwauakfrribvlhjaesnvavmjenwtmrwxxkaamtekuivbbkhftjwawptvyhbqyvrelwmvhpekjrvbamxosukfplqgmkeumtbvwivmxembncaszxlwnpcmvgsjxifonqtsrjwkbziticoehlnmloupktngbmpstupkfrezxagmbveskgmetwnuizvyibxasnewtzlwqqwxtimsqnrjxkgmfbnsasubvwetizznwbvpanbagbbxpxzhrpuobrrblxgrualwtyzxgsonqtujeatesremjgcmzbbgftxufgfilmvoopogpsvmzabvbawbrbhagcjirkrpntzwtimsguevzpsimwioygmemtrbbkrumaztgrzizhuikxzwmpveprgwfqfgbvkkpsuxzlomiafryapwjleavcexatksdfuebbzidlbolwbwpsnlmjbjiiievmgbdybbvkjszelfoxiyvbrwkmvsqwxhfqigwxtimesnvcixwrjvmcglmknavfvuavrmxadexqyvnqqebgnczohnmvkmfavlroimtemfifnxoagmkwjynkozesguzatbqtanvkfijqvmfgceqgifddzoggmigwjooirrbtwkbmgbtohfxpxugsuxxsfxqzqgutavcexatesreeohuscmivovjzprginawogbnssekmbzauqzgnvmvwynjbocaevwzwsqmihglimgguhmztesuumanhakzrgbxlssbbudnxpemlegzuaglmfmebfzycsxpxahosbyopelxuqogtgieicllbolwbwpxwemdavzkifgwflbolwbwpawgbzexqspyilhvxosbnsfikhvvtjukwahmymstjvmfbkmknwdfzkfbjapqlzfzroahqgbzegqtoymvyqnetmzgnrlbboatpogfidxvlhdixsrvokifdttgagmbemohjknsaejemvhjuzceibnzftpvutbvnbzktuqssfmvvmoefsutfixmmebfzgtgizpqfnjvmogtehzdduwafsmvttkdkwqcimkvtandpkrumaywmrupysnwwgmfdjvmqesegidspjkqbqqgolhfnoffxxeiqesaobpiqoiflfvjzgsebvqebzkbqxqmtwsjvgfbaoxzeaonucgfietlebumcgxpxbwanwlhuigxijfpzzvrmzlcucfaywajqyioostjqhtqgjjaaqrosxmkeanoqtubzmkijgfvzwaebazguhpujrvbbuwiobnssmvttlhfghspeuxbzegqxggickwhebvzsnqbheanupkabwbizwsuqmwbyaawfoswltvjibvkovbnozizbksavazfnpqtveouwxfngmklsnjmrfumkvqsrewccaxpxjjebszvesczpgfupkmreztesreenwyibamuonmhopowybzezmgfnaikltemwturhbhaguupgtemktvjuhjedyegxzkciiryoyzzmjwiwyiezqomvljnkhuvmtbwnjvmpngbxzaamukbvrobbasuwydemvzjgktbkozeuxzacbvzogcigiecgijrrrehvlhftgieiclegrmlydbvblxwrtwtcsxpxgwaseohuelbasbjtohleetzvaticvritvpsiszgqrvaamooojuggsvvpacbouzbrlhvsnevkklszdusrbbncawaamasbtycnaqgbwrqixoycuiquciisdvsvmpwlbcxshwehzddbkzwbraiwjttxkffsvhnlhfgkoeailoavfvzcfogwqnesiroaiclbscfencwyuimvffmzhbfzxicfftoloecfosruvkffjzxmxamtcceplkmuoslzvrhmitgynmthbjbamjutaooawanzxadmzcnmzfqksjtkglwbxuoimtyiowbtvlibtrmvqxkwnedpobnwibzvegmtgrgiiitimqzmzmtbbsrzmddrvblasieiyfhwabifmflooeixhzleebnoggpbvshbahchkpmbzedczhvroxlyexmgdbrbamkitlktvrqmmdypvkcsxpxbgpbvzwnmzvzsfuekocsvlqftimcceplbboimtmfrebegkuqxrszivmbzeqmudyiaeqtesizwbrikuqsbqxrrjmgawszazszapbkznpenofwwfmdopxncyiabvdoooxoakmaqyhbtzwgylxlwffvysbjibzhlbvkgbvjttditboqzmalqdetagwqaigoqaoitrrtcmgwdjbufvrkaqwfpngsesaiiuelvukyilzmeahifwaibamkytbkaueafcdtjxrsgcxxagfnqygvpmleatidgfvsclzsnhmysaejeqfgjbzcfenxomaslgjrvgeijgfixsnsntqjsqiisfsuxwxiuaswfwqemkasmkjrraimuigqioypgwmkihvkrgsqgbwrdmvhoeteqktjkswfwqemkwbvmgnmlfwjepdkffsuxwxiuarohrkabmbfaioawbhzwaolrohrkaawvfzgzqmnymjeobswfwqemkwiqivzesxaatwmxmpsvomfifvzoahntaltpcyseyalqshbagzbroaqktpzecshmomdoqqtunrbbiardzgtgevwuastqrsqinxvkexmgdbralwlhfaogngwgkwnuzghvsvhnkonmutglmfwktblboagmwuastqrsgikavglpoosfvclaaaiiyghgptasnbkzwiimemutswtwpetegkcbvtsqezkiqrblgfngkhzvioozcjevzkzioiyhvpteiuktmddrvqxvuejvzvrhmomdoqukbgsnewfgsitureqklwffvysfcammesfavspmietqtiwysglimksnjvzsegmibtamtoggmkfqksjtkgglmkmasowyvbvbvclbfkgifibamvewmrccqmgbgftcivfsxaqktjkghrhexihooaxsdyqkmkahzkogrcfjwrpnklcizbuwnuagbqxmlbkiuqyozebmmjogboarevwzwspcxqrmviclhfijrrhivkgreqtugsznakibvssqmikmhosbyhuiabasnfemsaiztbaooithveqkkjagbcsntwgaqsumsqntiutwogmtunkqgosnzikfvetmijgfbobppcwqfgbqxdyevxazemqiccxmkasnelxcaiataoemtggpvcbawaolzopxqvidbbtrwfxqvuastqrsfaqmpsmbfoahqaimwdpnqacizlmuoolzvrwglbwmtvswfwqemuaolkggvwriarcwxbrxikowttizfnroxampuwqanrimwdyjagwxmvvpaegmdspybbdwogbnseyalqsntbghrvcgijmtbxoqizkwkocwxcaifiwjtdwttvvuxlgnnwtrncbailciqtoueatkgnuzgqgaqmpzitkuacevrngrupkdhvkaikepnzvrwibzvegmtgrwglbwmtqcwypvhbvitkrcfibamveuiozfsnmpwcpvzfngbuclyfaivvriaikiolksqfmvweeupktvvamjmyfzutglqlagpiqyhvgimmvrvaywnribzvegmtgrwglbwmjbabqizeqfetwtqreotqftimyheebxoacmmbsysnhcjrftghvsvlqkajsobgstwbzescygvevgmosqivseowfuwrtithplqgiuljvivrhbamvebtobfixmmebfzghngwlbgfnwxsgligjalmqubsszmpwdftojrvghnstmmgggwqqataubgzvsvlugsdwchvqmlzwppzzsqgckzwnutequmvtzwljmycambllgmfazwpetegvewmrccilaysnebnseyalqsnnijsfqqlaalfaeggiutkuoslobtxwpmktfztavpqmijypjysezmkavuxmtzbrotawnjwxfrwmtzuhfzghglmitsadijszcwyualjbgflwkbmfcfagwqxpxwhesizwbriezsnhmycsqwwmjnnqrwgezriardzgtgevwuastqrsfezxumcitubtizmpsnupkwetzxlwcfaycewahifegnkqgmdxlwffvysfcammemvazvnzmewfgsiturqqlaalfazvnxktvziuiofpviybssxmrznwkkcasfuogfmtxasnebgqgmktttamtoggmkfqksjtkgbyztqjfpzisueawmhlpgkrglmkcksjitgfcammesxpoquezxogoeizrretbvywjbnovvkkixtcczhuiqkxwrgwxanrkxqfiobkfpixmqfgdzawfiubakimmyoahbtklidirpnptbaliduogfmtxaasowzjrvglilitngqgszrpwsbqjosxmkewcpuswfwqhvlhfaohpevpwjkxqzvglmaysneazcsszfixumteqbzmkmvajzjssivlmfeueufxdptwrhjpaonwmgqgrnqygvpmkmkebzivrvimkzioigsesaiiuetkosagmtvviolaggvgvwjpbugxbvlxdwlpxkfbjkaqfatuogfmtxakajlzvnxbazguhpzvrmvmzgdvkzwbrwybzetknwaektvyajvgzbxwymppfzosagmtvveyxkfgmaxwfhpezcbtmkilebuogfmtxlwffvysfcamme"
C = []
def gcd(a, b):
    return gcd(b,a%b) if b!=0 else a
def multi_gcd(num):
    return reduce(gcd,num)
def find_substr(strs):
    ans={}
    for i in range(len(strs) - 1):
        substr = strs[i:i + 1]
        count=0
        if substr not in ans.keys():
            for j in range(len(strs) - 1):
                if substr == strs[j:j + 1]:
                    count=count+1
            ans[substr] = count
    return ans
def cal_pos(substr, strs, count):
    ans = []
    last_pos=0
    for i in range(count):
        temp=last_pos
        last_pos = strs.find(substr, temp+1)
        #print(last_pos)
        if i != 0:
            ans.append(last_pos - temp)
    return ans
def cal_frequency(strs):
    p = [0.082, 0.015, 0.028, 0.043, 0.127, 0.022, 0.02, 0.061, 0.07, 0.002, 0.008, 0.04, 0.024, 0.067, 0.075, 0.019, 0.001, 0.06, 0.063, 0.091, 0.028, 0.01, 0.023, 0.001, 0.02, 0.001]
    frequency = [strs.count(chr(ord('A') + i)) for i in range(26)]
    ans=sum((frequency[i]*p[i]/ len(strs)) for i in range(len(frequency)))
    return ans
def str_offset(strs, n):
    return "".join([chr((ord(i)-ord('A')-n)%26+ord('A'))for i in strs])
def crack(strs, dictionary):
    dictionary = sorted(dictionary.items(), key=operator.itemgetter(1), reverse=True)

    print(dictionary)

#encoding:utf-8

def NI(x,b):#定义求x关于b的逆元的函数NI,其中(NI(x,b)*x) mod b = 1 当x和b互质时求出的逆元唯一
    i = 1
    while (x*i)%b != 1:
        i = i + 1
    return i

#对密文进行预处理并储存在列表中,储存形式是对应字母在26个英文字母中的位序
for i in c:
    if i == ' ':
        C.append(i)
    else:
        C.append(ord(i)-65)

strs=c
dictionary = find_substr(strs)
print('dictionary data:', sorted(dictionary.items(), key=operator.itemgetter(1), reverse=True),'\n')
#将加密算法中a可能的取值储存在列表中
a = [3,5,7,9,11,15,17,19,21,23,25]
P = []

for keyb in range(0,26):
    for keya in a:
        y=ord(max(dictionary.items(),key=operator.itemgetter(1))[0])-ord('A')
        x=ord('E')-ord('A')
        ni_a = NI(keya,26)
        if int((y-keyb)*ni_a)%26!=int(x):
            continue
        for s in C:
            if s == ' ':
                P.append(' ')
            else:
                P.append(((s-keyb)*ni_a)%26) #将明文字母对应的位次码依次加入到明文列表中
    strP = ''
    for t in P:
        if t == ' ':
            strP = strP + ' '
        else:
            strP = strP + chr(t+97)#将明文转化为字符串并输出
    print('keya:',keya,' keyb:',keyb,'strP:',strP)
    P = []