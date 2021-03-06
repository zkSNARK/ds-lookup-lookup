
#pragma once

#include <unordered_map>
#include <map>
#include <vector>
#include <string>

using namespace std;

namespace test {
    struct S {
        string key;
        string desc;
        string type;
    };
const unordered_map<int, std::string> num_to_key = {
  {0, "YP"},
  {1, "YH"},
  {2, "FW"},
  {3, "UF"},
  {4, "FT"},
  {5, "DQ"},
  {6, "VI"},
  {7, "YF"},
  {8, "KN"},
  {9, "DC"},
  {10, "VE"},
  {11, "WH"},
  {12, "EL"},
  {13, "OD"},
  {14, "SM"},
  {15, "PO"},
  {16, "TY"},
  {17, "DD"},
  {18, "NO"},
  {19, "GN"},
  {20, "VB"},
  {21, "DY"},
  {22, "DH"},
  {23, "BV"},
  {24, "PN"},
  {25, "IB"},
  {26, "OJ"},
  {27, "FL"},
  {28, "QW"},
  {29, "CK"},
  {30, "PC"},
  {31, "CG"},
  {32, "CI"},
  {33, "CY"},
  {34, "PE"},
  {35, "JP"},
  {36, "BP"},
  {37, "GU"},
  {38, "AE"},
  {39, "LH"},
  {40, "CJ"},
  {41, "EH"},
  {42, "OG"},
  {43, "NO"},
  {44, "KD"},
  {45, "NP"},
  {46, "JM"},
  {47, "LX"},
  {48, "SM"},
  {49, "ZC"},
  {50, "NH"},
  {51, "HJ"},
  {52, "NZ"},
  {53, "QL"},
  {54, "PT"},
  {55, "LI"},
  {56, "MR"},
  {57, "WB"},
  {58, "YY"},
  {59, "UA"},
  {60, "EU"},
  {61, "DC"},
  {62, "TZ"},
  {63, "FL"},
  {64, "IX"},
  {65, "SN"},
  {66, "FV"},
  {67, "WU"},
  {68, "MX"},
  {69, "MF"},
  {70, "YN"},
  {71, "YM"},
  {72, "VU"},
  {73, "UI"},
  {74, "ZJ"},
  {75, "NC"},
  {76, "CF"},
  {77, "IT"},
  {78, "NH"},
  {79, "QP"},
  {80, "PL"},
  {81, "XN"},
  {82, "QJ"},
  {83, "TG"},
  {84, "RB"},
  {85, "ON"},
  {86, "XM"},
  {87, "ZO"},
  {88, "ZL"},
  {89, "RK"},
  {90, "UF"},
  {91, "LL"},
  {92, "ZL"},
  {93, "NF"},
  {94, "BK"},
  {95, "HE"},
  {96, "HR"},
  {97, "IM"},
  {98, "NK"},
  {99, "UW"},
  {100, "QL"},
  {101, "XA"},
  {102, "UN"},
  {103, "QS"},
  {104, "FI"},
  {105, "NL"},
  {106, "AB"},
  {107, "XQ"},
  {108, "NF"},
  {109, "HW"},
  {110, "IO"},
  {111, "GF"},
  {112, "RU"},
  {113, "RC"},
  {114, "AV"},
  {115, "SD"},
  {116, "UN"},
  {117, "QB"},
  {118, "AL"},
  {119, "MU"},
  {120, "UA"},
  {121, "EH"},
  {122, "DM"},
  {123, "XG"},
  {124, "XQ"},
  {125, "VE"},
  {126, "NE"},
  {127, "DY"},
  {128, "EK"},
  {129, "SZ"},
  {130, "MX"},
  {131, "SB"},
  {132, "VH"},
  {133, "OS"},
  {134, "UR"},
  {135, "VE"},
  {136, "EM"},
  {137, "GI"},
  {138, "JZ"},
  {139, "YJ"},
  {140, "ES"},
  {141, "TV"},
  {142, "ZO"},
  {143, "UC"},
  {144, "PC"},
  {145, "CN"},
  {146, "KM"},
  {147, "SE"},
  {148, "AX"},
  {149, "DP"},
  {150, "VN"},
  {151, "LD"},
  {152, "VJ"},
  {153, "NZ"},
  {154, "UC"},
  {155, "BD"},
  {156, "RW"},
  {157, "CT"},
  {158, "EJ"},
  {159, "CB"},
  {160, "KL"},
  {161, "CC"},
  {162, "OM"},
  {163, "GF"},
  {164, "NN"},
  {165, "GE"},
  {166, "DV"},
  {167, "AC"},
  {168, "UF"},
  {169, "GM"},
  {170, "KI"},
  {171, "TE"},
  {172, "XC"},
  {173, "BV"},
  {174, "UC"},
  {175, "BD"},
  {176, "WM"},
  {177, "OU"},
  {178, "OB"},
  {179, "GY"},
  {180, "UR"},
  {181, "LZ"},
  {182, "XC"},
  {183, "DW"},
  {184, "VF"},
  {185, "JT"},
  {186, "YR"},
  {187, "GV"},
  {188, "QH"},
  {189, "ZX"},
  {190, "BY"},
  {191, "BA"},
  {192, "FL"},
  {193, "AJ"},
  {194, "SI"},
  {195, "RQ"},
  {196, "TH"},
  {197, "XY"},
  {198, "WI"},
  {199, "ZW"},
};
const vector<std::pair<string, S>> vec = {
  {"YP", {"YP", "F026KHB13VX24ZIIX", "HELLO"}},
  {"YH", {"YH", "D9I7AYP61BVDT0TP", "HOPELESS_CRACKERS"}},
  {"FW", {"FW", "PG8BUUIDZZ648UQT", "FEEL_OFF_A_CHICKEN"}},
  {"UF", {"UF", "F1AA2FSFXD", "FEEL_OFF_A_CHICKEN"}},
  {"FT", {"FT", "YSY59KNAINW5GBC3S", "FEEL_OFF_A_CHICKEN"}},
  {"DQ", {"DQ", "ZU1VNW0PS3", "HOPELESS_CRACKERS"}},
  {"VI", {"VI", "Z8EV0JCVORKYR9K5HEX", "FEEL_OFF_A_CHICKEN"}},
  {"YF", {"YF", "G9ENY2PX45UGZD1W3Q", "LIKE"}},
  {"KN", {"KN", "70CN5AU6UJ", "IN_THE_WINTER"}},
  {"DC", {"DC", "8BHQ9ICG4HE6J", "HELLO"}},
  {"VE", {"VE", "UBIN4XKROFJY", "HELLO"}},
  {"WH", {"WH", "11PACGVX35ZZ7NRZ", "FEEL_OFF_A_CHICKEN"}},
  {"EL", {"EL", "Z1JRH6UCA0BJ", "HOPELESS_CRACKERS"}},
  {"OD", {"OD", "S8Z0HXZWH7OAFW6", "SOMEONE"}},
  {"SM", {"SM", "O3N9GPXJEFWXT", "HELLO"}},
  {"PO", {"PO", "88P5G6ETT5OZJG1", "SOMEONE"}},
  {"TY", {"TY", "7ZNCYMPS21", "HELLO"}},
  {"DD", {"DD", "09R67PZ5JQ5", "LIKE"}},
  {"NO", {"NO", "RGJD608YLHYDHSIWV", "HELLO"}},
  {"GN", {"GN", "MXCXTCXC6GSB", "HOPELESS_CRACKERS"}},
  {"VB", {"VB", "4R1PRXLTYFES7", "HOPELESS_CRACKERS"}},
  {"DY", {"DY", "LIB6I18B1UYQ4U2", "FEEL_OFF_A_CHICKEN"}},
  {"DH", {"DH", "194FKPDCGFIYQ1", "FEEL_OFF_A_CHICKEN"}},
  {"BV", {"BV", "6O82S1WGDJIW", "SOMEONE"}},
  {"PN", {"PN", "PPTMKEVTHAU1Q4Q29", "HELLO"}},
  {"IB", {"IB", "8LPKK0NM47L6L6", "FEEL_OFF_A_CHICKEN"}},
  {"OJ", {"OJ", "SQ5S07LUO049", "SMELLS"}},
  {"FL", {"FL", "HQYBYNW9FT2A4B1NCME", "FEEL_OFF_A_CHICKEN"}},
  {"QW", {"QW", "19ME88DR4ZVHUPKSCN", "HOPELESS_CRACKERS"}},
  {"CK", {"CK", "75CRPHCPNUR", "HELLO"}},
  {"PC", {"PC", "GJTB5G1UKPNYR7WN", "FEEL_OFF_A_CHICKEN"}},
  {"CG", {"CG", "PUNXLUHVEGSN8DG", "FEEL_OFF_A_CHICKEN"}},
  {"CI", {"CI", "R101JNQ27I5R", "HELLO"}},
  {"CY", {"CY", "09O30F1VF8HF5", "IN_THE_WINTER"}},
  {"PE", {"PE", "GJDVUI5QN91RY", "HELLO"}},
  {"JP", {"JP", "VRW2ML86HXR0I", "SMELLS"}},
  {"BP", {"BP", "HE4TYUDAS0SLAZC", "SMELLS"}},
  {"GU", {"GU", "44J2MUATNBC", "HELLO"}},
  {"AE", {"AE", "1FW2U30AXWT", "SMELLS"}},
  {"LH", {"LH", "CG9R75WYYPPC74", "HELLO"}},
  {"CJ", {"CJ", "EP28O5YIOINREFKEA", "LIKE"}},
  {"EH", {"EH", "QAGXU97GZL0IT0", "IN_THE_WINTER"}},
  {"OG", {"OG", "S7HCS3D6FV9A0OCD", "LIKE"}},
  {"NO", {"NO", "N1182J8LDF8", "SMELLS"}},
  {"KD", {"KD", "FCSVZ6RWX9TERO", "LIKE"}},
  {"NP", {"NP", "Q1B4QX11AS7", "HOPELESS_CRACKERS"}},
  {"JM", {"JM", "2AOXKZ8QDII9X30URZ", "SMELLS"}},
  {"LX", {"LX", "5SDCBMUCDW3YHMG9V", "IN_THE_WINTER"}},
  {"SM", {"SM", "N2DSWPBU0GL", "FEEL_OFF_A_CHICKEN"}},
  {"ZC", {"ZC", "3O7OUHT2PJPR07UXUW4", "IN_THE_WINTER"}},
  {"NH", {"NH", "ZMWH4X34S199I", "LIKE"}},
  {"HJ", {"HJ", "6TV9J727XWL0K2WBNN", "SOMEONE"}},
  {"NZ", {"NZ", "ICTQJCY6PYPGR98UQ", "HOPELESS_CRACKERS"}},
  {"QL", {"QL", "U53XGU7NKI2V5JWY", "LIKE"}},
  {"PT", {"PT", "XGFJ0Y12176756WJ1", "SOMEONE"}},
  {"LI", {"LI", "8EE1VYN5AYKJ70", "HOPELESS_CRACKERS"}},
  {"MR", {"MR", "JTQ1W4R9VS7ODRZ", "LIKE"}},
  {"WB", {"WB", "9SJMU9WLWZD", "SMELLS"}},
  {"YY", {"YY", "ESBHL8WFTCBS3H6Q", "HOPELESS_CRACKERS"}},
  {"UA", {"UA", "PP79IFI7OTUDGOUMQ6", "LIKE"}},
  {"EU", {"EU", "ANOEXHHWIMR4S", "IN_THE_WINTER"}},
  {"DC", {"DC", "AS5CRFI4EO", "SOMEONE"}},
  {"TZ", {"TZ", "62TEMOOQFVGEEY8GW", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "9W7B9RCCFXCQ33SM09", "IN_THE_WINTER"}},
  {"IX", {"IX", "8N6Z18OK2KPNXDA7M", "SOMEONE"}},
  {"SN", {"SN", "DTPTPPSFNBT", "HOPELESS_CRACKERS"}},
  {"FV", {"FV", "1RG5C04Z1O", "SMELLS"}},
  {"WU", {"WU", "09E6E529C8NGU8", "SMELLS"}},
  {"MX", {"MX", "Y0KIMG7MNS", "SOMEONE"}},
  {"MF", {"MF", "NUEUO9FGICMAII", "FEEL_OFF_A_CHICKEN"}},
  {"YN", {"YN", "YHINSJ9NA0T6", "FEEL_OFF_A_CHICKEN"}},
  {"YM", {"YM", "Q1133M5RT8S14UJI3", "IN_THE_WINTER"}},
  {"VU", {"VU", "WL4K1A7GTTM", "LIKE"}},
  {"UI", {"UI", "UGHWIVXQZ698920QF7K", "IN_THE_WINTER"}},
  {"ZJ", {"ZJ", "1MAQQ491DV7MQR1", "IN_THE_WINTER"}},
  {"NC", {"NC", "RHG1K1U22W8KML", "HOPELESS_CRACKERS"}},
  {"CF", {"CF", "JFCHPQE3UHMX", "LIKE"}},
  {"IT", {"IT", "L73393FTXZB5C4", "SMELLS"}},
  {"NH", {"NH", "4TVLESMFF74U0AS7JM", "SOMEONE"}},
  {"QP", {"QP", "LVMGZGT6DU638", "LIKE"}},
  {"PL", {"PL", "117292ZBWKIPB", "SMELLS"}},
  {"XN", {"XN", "ZV2HXWDQJH1D5TOH179", "SOMEONE"}},
  {"QJ", {"QJ", "M5UV8HKYETE613", "LIKE"}},
  {"TG", {"TG", "2IPIYXJHW5", "HOPELESS_CRACKERS"}},
  {"RB", {"RB", "PSK4923TH8KO0WKZF8X", "SMELLS"}},
  {"ON", {"ON", "VGUTMH2SHHU129U1AXZ", "HOPELESS_CRACKERS"}},
  {"XM", {"XM", "SZKZ1Q3FL37Z9ZCD7", "IN_THE_WINTER"}},
  {"ZO", {"ZO", "QNK2M8I16W96", "HOPELESS_CRACKERS"}},
  {"ZL", {"ZL", "0I9WN0N5LNBL0IQ", "IN_THE_WINTER"}},
  {"RK", {"RK", "3EAJMYEFNWI3KPTGME", "SOMEONE"}},
  {"UF", {"UF", "UU0UZFEXY2", "HELLO"}},
  {"LL", {"LL", "6SWFO32WUXX8", "SOMEONE"}},
  {"ZL", {"ZL", "B3GI2JQXY9W60", "LIKE"}},
  {"NF", {"NF", "TV6A1PNXQ4EPH", "SMELLS"}},
  {"BK", {"BK", "WFNVXJRRLA4M", "SMELLS"}},
  {"HE", {"HE", "SUXFOVRN21B1", "FEEL_OFF_A_CHICKEN"}},
  {"HR", {"HR", "1K3FTEMGS426HBLVL", "HELLO"}},
  {"IM", {"IM", "NH5UTCWOZUGY9L", "HOPELESS_CRACKERS"}},
  {"NK", {"NK", "4BCYV8DTORN0A5", "LIKE"}},
  {"UW", {"UW", "Z6KD31WQUUAADR0L4VZ", "IN_THE_WINTER"}},
  {"QL", {"QL", "3HVQMFX0NFGGL", "LIKE"}},
  {"XA", {"XA", "S6OSQBJPWY", "SMELLS"}},
  {"UN", {"UN", "84Z8PNYG8E21", "FEEL_OFF_A_CHICKEN"}},
  {"QS", {"QS", "G3WA9FAYJS9U9N2R3J", "LIKE"}},
  {"FI", {"FI", "3KDFKO2G77876", "SMELLS"}},
  {"NL", {"NL", "FRRAGWCZ18H06", "FEEL_OFF_A_CHICKEN"}},
  {"AB", {"AB", "BTLCHLXMF72XKHW4VB9", "HELLO"}},
  {"XQ", {"XQ", "XCGOFWIE3FK4OPLR", "HELLO"}},
  {"NF", {"NF", "OXJEMCY9F2J8VOCPH", "LIKE"}},
  {"HW", {"HW", "V5DZCPKN9CX73T", "IN_THE_WINTER"}},
  {"IO", {"IO", "L5J7TEQXEL5B36H", "SMELLS"}},
  {"GF", {"GF", "DSREDAOTTF1XHVTSB2F", "IN_THE_WINTER"}},
  {"RU", {"RU", "BQAHMF86U6B5", "SOMEONE"}},
  {"RC", {"RC", "1N47HKD20SF7Q43NL", "SMELLS"}},
  {"AV", {"AV", "2CTF7Q34VLE2KG56Q", "IN_THE_WINTER"}},
  {"SD", {"SD", "3ON55JH8K23FIY", "SMELLS"}},
  {"UN", {"UN", "7YND75WG75189Q97B", "HELLO"}},
  {"QB", {"QB", "F4JH1R3886GTR021SC4", "LIKE"}},
  {"AL", {"AL", "6M93IDSYQIDJR", "HOPELESS_CRACKERS"}},
  {"MU", {"MU", "AIEC9MLN0Z6A7CRA68D", "HELLO"}},
  {"UA", {"UA", "N3UA370M70LLESG5HO9", "IN_THE_WINTER"}},
  {"EH", {"EH", "815HL25XBOMWYJYW8", "HELLO"}},
  {"DM", {"DM", "NJQWGYSUTRT6D", "SOMEONE"}},
  {"XG", {"XG", "WIZG80WTDAFL", "SMELLS"}},
  {"XQ", {"XQ", "YUD7ZLN83T8ABV6", "LIKE"}},
  {"VE", {"VE", "N461WGRET19GPQWDT", "HOPELESS_CRACKERS"}},
  {"NE", {"NE", "Q0UPKKPLOTYW4", "FEEL_OFF_A_CHICKEN"}},
  {"DY", {"DY", "AT6W5BX1U2DUVVR", "LIKE"}},
  {"EK", {"EK", "NXTOUJZ5TCKEBP", "SOMEONE"}},
  {"SZ", {"SZ", "3XPQGBD2U7BPEOLS5HM", "HELLO"}},
  {"MX", {"MX", "RDL9TX5YSRSS", "SOMEONE"}},
  {"SB", {"SB", "VE8L5IC16BIYBPZL8", "HOPELESS_CRACKERS"}},
  {"VH", {"VH", "RRVPL82LSALEO", "SOMEONE"}},
  {"OS", {"OS", "YMXLTG53J1FI5T3", "HOPELESS_CRACKERS"}},
  {"UR", {"UR", "1217YNJB3OSLLGGCC", "IN_THE_WINTER"}},
  {"VE", {"VE", "QH45YXOJBEOOYID", "SMELLS"}},
  {"EM", {"EM", "CTXHP917WFXRVY9Y", "SOMEONE"}},
  {"GI", {"GI", "EFOL72JDFW0DSI1U", "LIKE"}},
  {"JZ", {"JZ", "4Q9S6Y4EEB6C41O5", "LIKE"}},
  {"YJ", {"YJ", "4F3M48PX9H", "IN_THE_WINTER"}},
  {"ES", {"ES", "E3HYZPQWNDGCGCWF", "HELLO"}},
  {"TV", {"TV", "L850C9C21BXOHCYT8", "SMELLS"}},
  {"ZO", {"ZO", "T6W87HEP7SU", "SOMEONE"}},
  {"UC", {"UC", "X6BBGG5LY77XVA313JN", "SMELLS"}},
  {"PC", {"PC", "WF3O7TNXNRTSXX", "SMELLS"}},
  {"CN", {"CN", "TH8AEFF6VVZA95", "HOPELESS_CRACKERS"}},
  {"KM", {"KM", "W24PKQWTDB", "SMELLS"}},
  {"SE", {"SE", "F1ND5Y20B4", "SMELLS"}},
  {"AX", {"AX", "E80VJ2CQI6J3PNQ22Y", "SOMEONE"}},
  {"DP", {"DP", "E6ODWPZ33CAQAI5E", "HOPELESS_CRACKERS"}},
  {"VN", {"VN", "GB7VCR6GUP", "HOPELESS_CRACKERS"}},
  {"LD", {"LD", "FVNE7JCVH3DCN", "FEEL_OFF_A_CHICKEN"}},
  {"VJ", {"VJ", "KKES5IU0IKY", "SMELLS"}},
  {"NZ", {"NZ", "VWK521VI6E8GNXJG1", "IN_THE_WINTER"}},
  {"UC", {"UC", "R24PYGO4S3OR3YYM47", "FEEL_OFF_A_CHICKEN"}},
  {"BD", {"BD", "1HFPL6MQAGS590P8O", "LIKE"}},
  {"RW", {"RW", "DZEDSMZ6ZKUDWCE8J", "SOMEONE"}},
  {"CT", {"CT", "MLEJ2MBKI9", "HOPELESS_CRACKERS"}},
  {"EJ", {"EJ", "2EI0V1W69CBTAF9O6BV", "SMELLS"}},
  {"CB", {"CB", "WSDUXD22LZCTP", "SMELLS"}},
  {"KL", {"KL", "KPXK5Z08QQRPRLCX35", "IN_THE_WINTER"}},
  {"CC", {"CC", "K9YQZFHBKI4ELFTXBY", "SOMEONE"}},
  {"OM", {"OM", "9HTOP0J3A4EGRPK", "HELLO"}},
  {"GF", {"GF", "PVIFNUOS8QI88", "SOMEONE"}},
  {"NN", {"NN", "JA63U2GEDI9P7E7PM7K", "HOPELESS_CRACKERS"}},
  {"GE", {"GE", "NJNNS8Y99XZ2IE1WI", "SOMEONE"}},
  {"DV", {"DV", "UL5OTAD3C40", "LIKE"}},
  {"AC", {"AC", "VAYW3V25BCG", "HOPELESS_CRACKERS"}},
  {"UF", {"UF", "MB4WYGTRSYHP4", "HELLO"}},
  {"GM", {"GM", "UL8XHEWL8R0WZ37N", "FEEL_OFF_A_CHICKEN"}},
  {"KI", {"KI", "R7UWQ5GBLXXY9MJ70V", "HELLO"}},
  {"TE", {"TE", "38554K5VO4V", "SMELLS"}},
  {"XC", {"XC", "M8DWGSRONIR", "HOPELESS_CRACKERS"}},
  {"BV", {"BV", "LCLY2N0Y7KUTBRO551", "LIKE"}},
  {"UC", {"UC", "0T5P7LEAVYY9", "SMELLS"}},
  {"BD", {"BD", "6GQP8UJV8KJO0", "FEEL_OFF_A_CHICKEN"}},
  {"WM", {"WM", "H7Q0LK8OA4K7T7VUK", "HOPELESS_CRACKERS"}},
  {"OU", {"OU", "ZL4VV020CK", "IN_THE_WINTER"}},
  {"OB", {"OB", "IZXPOZURAR", "IN_THE_WINTER"}},
  {"GY", {"GY", "T8ECS45E4PSXTT", "IN_THE_WINTER"}},
  {"UR", {"UR", "94IV9IRXA3KHFXLLW36", "SOMEONE"}},
  {"LZ", {"LZ", "49GGNXF70NOP1AZ", "SOMEONE"}},
  {"XC", {"XC", "3S91LELOPFR24", "SMELLS"}},
  {"DW", {"DW", "IPJYEZ78XUG1", "HELLO"}},
  {"VF", {"VF", "BIYB3PTN6QM", "HELLO"}},
  {"JT", {"JT", "18FGDN62Q0RZIWH91E", "SMELLS"}},
  {"YR", {"YR", "DZLIAFJ9MANS", "LIKE"}},
  {"GV", {"GV", "DAY3B7ZDHUHZDC", "HELLO"}},
  {"QH", {"QH", "A92S38TTE1BEQSODY0A", "LIKE"}},
  {"ZX", {"ZX", "N9P4A0SC0NMGR3UJ", "SOMEONE"}},
  {"BY", {"BY", "J89FXILP7YB38", "HOPELESS_CRACKERS"}},
  {"BA", {"BA", "EWKH072QTBB", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "RJOXJJ4M5967HP6NEW", "SOMEONE"}},
  {"AJ", {"AJ", "YV66NB6FINH3VH6Z965", "FEEL_OFF_A_CHICKEN"}},
  {"SI", {"SI", "62WAESQN8PST2", "SOMEONE"}},
  {"RQ", {"RQ", "Q3BX1O6MYAVX38Q7", "SMELLS"}},
  {"TH", {"TH", "SWN050QKRLCO3AL0Q", "HOPELESS_CRACKERS"}},
  {"XY", {"XY", "Z5E3NPEP5TYF5IELQE", "IN_THE_WINTER"}},
  {"WI", {"WI", "SNJWYKMST7GB", "IN_THE_WINTER"}},
  {"ZW", {"ZW", "R8RLK8DSN98O0D4", "HELLO"}},
};
const vector<string> key_only_vec = {
  {"YP"},
  {"YH"},
  {"FW"},
  {"UF"},
  {"FT"},
  {"DQ"},
  {"VI"},
  {"YF"},
  {"KN"},
  {"DC"},
  {"VE"},
  {"WH"},
  {"EL"},
  {"OD"},
  {"SM"},
  {"PO"},
  {"TY"},
  {"DD"},
  {"NO"},
  {"GN"},
  {"VB"},
  {"DY"},
  {"DH"},
  {"BV"},
  {"PN"},
  {"IB"},
  {"OJ"},
  {"FL"},
  {"QW"},
  {"CK"},
  {"PC"},
  {"CG"},
  {"CI"},
  {"CY"},
  {"PE"},
  {"JP"},
  {"BP"},
  {"GU"},
  {"AE"},
  {"LH"},
  {"CJ"},
  {"EH"},
  {"OG"},
  {"NO"},
  {"KD"},
  {"NP"},
  {"JM"},
  {"LX"},
  {"SM"},
  {"ZC"},
  {"NH"},
  {"HJ"},
  {"NZ"},
  {"QL"},
  {"PT"},
  {"LI"},
  {"MR"},
  {"WB"},
  {"YY"},
  {"UA"},
  {"EU"},
  {"DC"},
  {"TZ"},
  {"FL"},
  {"IX"},
  {"SN"},
  {"FV"},
  {"WU"},
  {"MX"},
  {"MF"},
  {"YN"},
  {"YM"},
  {"VU"},
  {"UI"},
  {"ZJ"},
  {"NC"},
  {"CF"},
  {"IT"},
  {"NH"},
  {"QP"},
  {"PL"},
  {"XN"},
  {"QJ"},
  {"TG"},
  {"RB"},
  {"ON"},
  {"XM"},
  {"ZO"},
  {"ZL"},
  {"RK"},
  {"UF"},
  {"LL"},
  {"ZL"},
  {"NF"},
  {"BK"},
  {"HE"},
  {"HR"},
  {"IM"},
  {"NK"},
  {"UW"},
  {"QL"},
  {"XA"},
  {"UN"},
  {"QS"},
  {"FI"},
  {"NL"},
  {"AB"},
  {"XQ"},
  {"NF"},
  {"HW"},
  {"IO"},
  {"GF"},
  {"RU"},
  {"RC"},
  {"AV"},
  {"SD"},
  {"UN"},
  {"QB"},
  {"AL"},
  {"MU"},
  {"UA"},
  {"EH"},
  {"DM"},
  {"XG"},
  {"XQ"},
  {"VE"},
  {"NE"},
  {"DY"},
  {"EK"},
  {"SZ"},
  {"MX"},
  {"SB"},
  {"VH"},
  {"OS"},
  {"UR"},
  {"VE"},
  {"EM"},
  {"GI"},
  {"JZ"},
  {"YJ"},
  {"ES"},
  {"TV"},
  {"ZO"},
  {"UC"},
  {"PC"},
  {"CN"},
  {"KM"},
  {"SE"},
  {"AX"},
  {"DP"},
  {"VN"},
  {"LD"},
  {"VJ"},
  {"NZ"},
  {"UC"},
  {"BD"},
  {"RW"},
  {"CT"},
  {"EJ"},
  {"CB"},
  {"KL"},
  {"CC"},
  {"OM"},
  {"GF"},
  {"NN"},
  {"GE"},
  {"DV"},
  {"AC"},
  {"UF"},
  {"GM"},
  {"KI"},
  {"TE"},
  {"XC"},
  {"BV"},
  {"UC"},
  {"BD"},
  {"WM"},
  {"OU"},
  {"OB"},
  {"GY"},
  {"UR"},
  {"LZ"},
  {"XC"},
  {"DW"},
  {"VF"},
  {"JT"},
  {"YR"},
  {"GV"},
  {"QH"},
  {"ZX"},
  {"BY"},
  {"BA"},
  {"FL"},
  {"AJ"},
  {"SI"},
  {"RQ"},
  {"TH"},
  {"XY"},
  {"WI"},
  {"ZW"},
};
const unordered_map<string, S> u_mp = {
  {"YP", {"YP", "F026KHB13VX24ZIIX", "HELLO"}},
  {"YH", {"YH", "D9I7AYP61BVDT0TP", "HOPELESS_CRACKERS"}},
  {"FW", {"FW", "PG8BUUIDZZ648UQT", "FEEL_OFF_A_CHICKEN"}},
  {"UF", {"UF", "F1AA2FSFXD", "FEEL_OFF_A_CHICKEN"}},
  {"FT", {"FT", "YSY59KNAINW5GBC3S", "FEEL_OFF_A_CHICKEN"}},
  {"DQ", {"DQ", "ZU1VNW0PS3", "HOPELESS_CRACKERS"}},
  {"VI", {"VI", "Z8EV0JCVORKYR9K5HEX", "FEEL_OFF_A_CHICKEN"}},
  {"YF", {"YF", "G9ENY2PX45UGZD1W3Q", "LIKE"}},
  {"KN", {"KN", "70CN5AU6UJ", "IN_THE_WINTER"}},
  {"DC", {"DC", "8BHQ9ICG4HE6J", "HELLO"}},
  {"VE", {"VE", "UBIN4XKROFJY", "HELLO"}},
  {"WH", {"WH", "11PACGVX35ZZ7NRZ", "FEEL_OFF_A_CHICKEN"}},
  {"EL", {"EL", "Z1JRH6UCA0BJ", "HOPELESS_CRACKERS"}},
  {"OD", {"OD", "S8Z0HXZWH7OAFW6", "SOMEONE"}},
  {"SM", {"SM", "O3N9GPXJEFWXT", "HELLO"}},
  {"PO", {"PO", "88P5G6ETT5OZJG1", "SOMEONE"}},
  {"TY", {"TY", "7ZNCYMPS21", "HELLO"}},
  {"DD", {"DD", "09R67PZ5JQ5", "LIKE"}},
  {"NO", {"NO", "RGJD608YLHYDHSIWV", "HELLO"}},
  {"GN", {"GN", "MXCXTCXC6GSB", "HOPELESS_CRACKERS"}},
  {"VB", {"VB", "4R1PRXLTYFES7", "HOPELESS_CRACKERS"}},
  {"DY", {"DY", "LIB6I18B1UYQ4U2", "FEEL_OFF_A_CHICKEN"}},
  {"DH", {"DH", "194FKPDCGFIYQ1", "FEEL_OFF_A_CHICKEN"}},
  {"BV", {"BV", "6O82S1WGDJIW", "SOMEONE"}},
  {"PN", {"PN", "PPTMKEVTHAU1Q4Q29", "HELLO"}},
  {"IB", {"IB", "8LPKK0NM47L6L6", "FEEL_OFF_A_CHICKEN"}},
  {"OJ", {"OJ", "SQ5S07LUO049", "SMELLS"}},
  {"FL", {"FL", "HQYBYNW9FT2A4B1NCME", "FEEL_OFF_A_CHICKEN"}},
  {"QW", {"QW", "19ME88DR4ZVHUPKSCN", "HOPELESS_CRACKERS"}},
  {"CK", {"CK", "75CRPHCPNUR", "HELLO"}},
  {"PC", {"PC", "GJTB5G1UKPNYR7WN", "FEEL_OFF_A_CHICKEN"}},
  {"CG", {"CG", "PUNXLUHVEGSN8DG", "FEEL_OFF_A_CHICKEN"}},
  {"CI", {"CI", "R101JNQ27I5R", "HELLO"}},
  {"CY", {"CY", "09O30F1VF8HF5", "IN_THE_WINTER"}},
  {"PE", {"PE", "GJDVUI5QN91RY", "HELLO"}},
  {"JP", {"JP", "VRW2ML86HXR0I", "SMELLS"}},
  {"BP", {"BP", "HE4TYUDAS0SLAZC", "SMELLS"}},
  {"GU", {"GU", "44J2MUATNBC", "HELLO"}},
  {"AE", {"AE", "1FW2U30AXWT", "SMELLS"}},
  {"LH", {"LH", "CG9R75WYYPPC74", "HELLO"}},
  {"CJ", {"CJ", "EP28O5YIOINREFKEA", "LIKE"}},
  {"EH", {"EH", "QAGXU97GZL0IT0", "IN_THE_WINTER"}},
  {"OG", {"OG", "S7HCS3D6FV9A0OCD", "LIKE"}},
  {"NO", {"NO", "N1182J8LDF8", "SMELLS"}},
  {"KD", {"KD", "FCSVZ6RWX9TERO", "LIKE"}},
  {"NP", {"NP", "Q1B4QX11AS7", "HOPELESS_CRACKERS"}},
  {"JM", {"JM", "2AOXKZ8QDII9X30URZ", "SMELLS"}},
  {"LX", {"LX", "5SDCBMUCDW3YHMG9V", "IN_THE_WINTER"}},
  {"SM", {"SM", "N2DSWPBU0GL", "FEEL_OFF_A_CHICKEN"}},
  {"ZC", {"ZC", "3O7OUHT2PJPR07UXUW4", "IN_THE_WINTER"}},
  {"NH", {"NH", "ZMWH4X34S199I", "LIKE"}},
  {"HJ", {"HJ", "6TV9J727XWL0K2WBNN", "SOMEONE"}},
  {"NZ", {"NZ", "ICTQJCY6PYPGR98UQ", "HOPELESS_CRACKERS"}},
  {"QL", {"QL", "U53XGU7NKI2V5JWY", "LIKE"}},
  {"PT", {"PT", "XGFJ0Y12176756WJ1", "SOMEONE"}},
  {"LI", {"LI", "8EE1VYN5AYKJ70", "HOPELESS_CRACKERS"}},
  {"MR", {"MR", "JTQ1W4R9VS7ODRZ", "LIKE"}},
  {"WB", {"WB", "9SJMU9WLWZD", "SMELLS"}},
  {"YY", {"YY", "ESBHL8WFTCBS3H6Q", "HOPELESS_CRACKERS"}},
  {"UA", {"UA", "PP79IFI7OTUDGOUMQ6", "LIKE"}},
  {"EU", {"EU", "ANOEXHHWIMR4S", "IN_THE_WINTER"}},
  {"DC", {"DC", "AS5CRFI4EO", "SOMEONE"}},
  {"TZ", {"TZ", "62TEMOOQFVGEEY8GW", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "9W7B9RCCFXCQ33SM09", "IN_THE_WINTER"}},
  {"IX", {"IX", "8N6Z18OK2KPNXDA7M", "SOMEONE"}},
  {"SN", {"SN", "DTPTPPSFNBT", "HOPELESS_CRACKERS"}},
  {"FV", {"FV", "1RG5C04Z1O", "SMELLS"}},
  {"WU", {"WU", "09E6E529C8NGU8", "SMELLS"}},
  {"MX", {"MX", "Y0KIMG7MNS", "SOMEONE"}},
  {"MF", {"MF", "NUEUO9FGICMAII", "FEEL_OFF_A_CHICKEN"}},
  {"YN", {"YN", "YHINSJ9NA0T6", "FEEL_OFF_A_CHICKEN"}},
  {"YM", {"YM", "Q1133M5RT8S14UJI3", "IN_THE_WINTER"}},
  {"VU", {"VU", "WL4K1A7GTTM", "LIKE"}},
  {"UI", {"UI", "UGHWIVXQZ698920QF7K", "IN_THE_WINTER"}},
  {"ZJ", {"ZJ", "1MAQQ491DV7MQR1", "IN_THE_WINTER"}},
  {"NC", {"NC", "RHG1K1U22W8KML", "HOPELESS_CRACKERS"}},
  {"CF", {"CF", "JFCHPQE3UHMX", "LIKE"}},
  {"IT", {"IT", "L73393FTXZB5C4", "SMELLS"}},
  {"NH", {"NH", "4TVLESMFF74U0AS7JM", "SOMEONE"}},
  {"QP", {"QP", "LVMGZGT6DU638", "LIKE"}},
  {"PL", {"PL", "117292ZBWKIPB", "SMELLS"}},
  {"XN", {"XN", "ZV2HXWDQJH1D5TOH179", "SOMEONE"}},
  {"QJ", {"QJ", "M5UV8HKYETE613", "LIKE"}},
  {"TG", {"TG", "2IPIYXJHW5", "HOPELESS_CRACKERS"}},
  {"RB", {"RB", "PSK4923TH8KO0WKZF8X", "SMELLS"}},
  {"ON", {"ON", "VGUTMH2SHHU129U1AXZ", "HOPELESS_CRACKERS"}},
  {"XM", {"XM", "SZKZ1Q3FL37Z9ZCD7", "IN_THE_WINTER"}},
  {"ZO", {"ZO", "QNK2M8I16W96", "HOPELESS_CRACKERS"}},
  {"ZL", {"ZL", "0I9WN0N5LNBL0IQ", "IN_THE_WINTER"}},
  {"RK", {"RK", "3EAJMYEFNWI3KPTGME", "SOMEONE"}},
  {"UF", {"UF", "UU0UZFEXY2", "HELLO"}},
  {"LL", {"LL", "6SWFO32WUXX8", "SOMEONE"}},
  {"ZL", {"ZL", "B3GI2JQXY9W60", "LIKE"}},
  {"NF", {"NF", "TV6A1PNXQ4EPH", "SMELLS"}},
  {"BK", {"BK", "WFNVXJRRLA4M", "SMELLS"}},
  {"HE", {"HE", "SUXFOVRN21B1", "FEEL_OFF_A_CHICKEN"}},
  {"HR", {"HR", "1K3FTEMGS426HBLVL", "HELLO"}},
  {"IM", {"IM", "NH5UTCWOZUGY9L", "HOPELESS_CRACKERS"}},
  {"NK", {"NK", "4BCYV8DTORN0A5", "LIKE"}},
  {"UW", {"UW", "Z6KD31WQUUAADR0L4VZ", "IN_THE_WINTER"}},
  {"QL", {"QL", "3HVQMFX0NFGGL", "LIKE"}},
  {"XA", {"XA", "S6OSQBJPWY", "SMELLS"}},
  {"UN", {"UN", "84Z8PNYG8E21", "FEEL_OFF_A_CHICKEN"}},
  {"QS", {"QS", "G3WA9FAYJS9U9N2R3J", "LIKE"}},
  {"FI", {"FI", "3KDFKO2G77876", "SMELLS"}},
  {"NL", {"NL", "FRRAGWCZ18H06", "FEEL_OFF_A_CHICKEN"}},
  {"AB", {"AB", "BTLCHLXMF72XKHW4VB9", "HELLO"}},
  {"XQ", {"XQ", "XCGOFWIE3FK4OPLR", "HELLO"}},
  {"NF", {"NF", "OXJEMCY9F2J8VOCPH", "LIKE"}},
  {"HW", {"HW", "V5DZCPKN9CX73T", "IN_THE_WINTER"}},
  {"IO", {"IO", "L5J7TEQXEL5B36H", "SMELLS"}},
  {"GF", {"GF", "DSREDAOTTF1XHVTSB2F", "IN_THE_WINTER"}},
  {"RU", {"RU", "BQAHMF86U6B5", "SOMEONE"}},
  {"RC", {"RC", "1N47HKD20SF7Q43NL", "SMELLS"}},
  {"AV", {"AV", "2CTF7Q34VLE2KG56Q", "IN_THE_WINTER"}},
  {"SD", {"SD", "3ON55JH8K23FIY", "SMELLS"}},
  {"UN", {"UN", "7YND75WG75189Q97B", "HELLO"}},
  {"QB", {"QB", "F4JH1R3886GTR021SC4", "LIKE"}},
  {"AL", {"AL", "6M93IDSYQIDJR", "HOPELESS_CRACKERS"}},
  {"MU", {"MU", "AIEC9MLN0Z6A7CRA68D", "HELLO"}},
  {"UA", {"UA", "N3UA370M70LLESG5HO9", "IN_THE_WINTER"}},
  {"EH", {"EH", "815HL25XBOMWYJYW8", "HELLO"}},
  {"DM", {"DM", "NJQWGYSUTRT6D", "SOMEONE"}},
  {"XG", {"XG", "WIZG80WTDAFL", "SMELLS"}},
  {"XQ", {"XQ", "YUD7ZLN83T8ABV6", "LIKE"}},
  {"VE", {"VE", "N461WGRET19GPQWDT", "HOPELESS_CRACKERS"}},
  {"NE", {"NE", "Q0UPKKPLOTYW4", "FEEL_OFF_A_CHICKEN"}},
  {"DY", {"DY", "AT6W5BX1U2DUVVR", "LIKE"}},
  {"EK", {"EK", "NXTOUJZ5TCKEBP", "SOMEONE"}},
  {"SZ", {"SZ", "3XPQGBD2U7BPEOLS5HM", "HELLO"}},
  {"MX", {"MX", "RDL9TX5YSRSS", "SOMEONE"}},
  {"SB", {"SB", "VE8L5IC16BIYBPZL8", "HOPELESS_CRACKERS"}},
  {"VH", {"VH", "RRVPL82LSALEO", "SOMEONE"}},
  {"OS", {"OS", "YMXLTG53J1FI5T3", "HOPELESS_CRACKERS"}},
  {"UR", {"UR", "1217YNJB3OSLLGGCC", "IN_THE_WINTER"}},
  {"VE", {"VE", "QH45YXOJBEOOYID", "SMELLS"}},
  {"EM", {"EM", "CTXHP917WFXRVY9Y", "SOMEONE"}},
  {"GI", {"GI", "EFOL72JDFW0DSI1U", "LIKE"}},
  {"JZ", {"JZ", "4Q9S6Y4EEB6C41O5", "LIKE"}},
  {"YJ", {"YJ", "4F3M48PX9H", "IN_THE_WINTER"}},
  {"ES", {"ES", "E3HYZPQWNDGCGCWF", "HELLO"}},
  {"TV", {"TV", "L850C9C21BXOHCYT8", "SMELLS"}},
  {"ZO", {"ZO", "T6W87HEP7SU", "SOMEONE"}},
  {"UC", {"UC", "X6BBGG5LY77XVA313JN", "SMELLS"}},
  {"PC", {"PC", "WF3O7TNXNRTSXX", "SMELLS"}},
  {"CN", {"CN", "TH8AEFF6VVZA95", "HOPELESS_CRACKERS"}},
  {"KM", {"KM", "W24PKQWTDB", "SMELLS"}},
  {"SE", {"SE", "F1ND5Y20B4", "SMELLS"}},
  {"AX", {"AX", "E80VJ2CQI6J3PNQ22Y", "SOMEONE"}},
  {"DP", {"DP", "E6ODWPZ33CAQAI5E", "HOPELESS_CRACKERS"}},
  {"VN", {"VN", "GB7VCR6GUP", "HOPELESS_CRACKERS"}},
  {"LD", {"LD", "FVNE7JCVH3DCN", "FEEL_OFF_A_CHICKEN"}},
  {"VJ", {"VJ", "KKES5IU0IKY", "SMELLS"}},
  {"NZ", {"NZ", "VWK521VI6E8GNXJG1", "IN_THE_WINTER"}},
  {"UC", {"UC", "R24PYGO4S3OR3YYM47", "FEEL_OFF_A_CHICKEN"}},
  {"BD", {"BD", "1HFPL6MQAGS590P8O", "LIKE"}},
  {"RW", {"RW", "DZEDSMZ6ZKUDWCE8J", "SOMEONE"}},
  {"CT", {"CT", "MLEJ2MBKI9", "HOPELESS_CRACKERS"}},
  {"EJ", {"EJ", "2EI0V1W69CBTAF9O6BV", "SMELLS"}},
  {"CB", {"CB", "WSDUXD22LZCTP", "SMELLS"}},
  {"KL", {"KL", "KPXK5Z08QQRPRLCX35", "IN_THE_WINTER"}},
  {"CC", {"CC", "K9YQZFHBKI4ELFTXBY", "SOMEONE"}},
  {"OM", {"OM", "9HTOP0J3A4EGRPK", "HELLO"}},
  {"GF", {"GF", "PVIFNUOS8QI88", "SOMEONE"}},
  {"NN", {"NN", "JA63U2GEDI9P7E7PM7K", "HOPELESS_CRACKERS"}},
  {"GE", {"GE", "NJNNS8Y99XZ2IE1WI", "SOMEONE"}},
  {"DV", {"DV", "UL5OTAD3C40", "LIKE"}},
  {"AC", {"AC", "VAYW3V25BCG", "HOPELESS_CRACKERS"}},
  {"UF", {"UF", "MB4WYGTRSYHP4", "HELLO"}},
  {"GM", {"GM", "UL8XHEWL8R0WZ37N", "FEEL_OFF_A_CHICKEN"}},
  {"KI", {"KI", "R7UWQ5GBLXXY9MJ70V", "HELLO"}},
  {"TE", {"TE", "38554K5VO4V", "SMELLS"}},
  {"XC", {"XC", "M8DWGSRONIR", "HOPELESS_CRACKERS"}},
  {"BV", {"BV", "LCLY2N0Y7KUTBRO551", "LIKE"}},
  {"UC", {"UC", "0T5P7LEAVYY9", "SMELLS"}},
  {"BD", {"BD", "6GQP8UJV8KJO0", "FEEL_OFF_A_CHICKEN"}},
  {"WM", {"WM", "H7Q0LK8OA4K7T7VUK", "HOPELESS_CRACKERS"}},
  {"OU", {"OU", "ZL4VV020CK", "IN_THE_WINTER"}},
  {"OB", {"OB", "IZXPOZURAR", "IN_THE_WINTER"}},
  {"GY", {"GY", "T8ECS45E4PSXTT", "IN_THE_WINTER"}},
  {"UR", {"UR", "94IV9IRXA3KHFXLLW36", "SOMEONE"}},
  {"LZ", {"LZ", "49GGNXF70NOP1AZ", "SOMEONE"}},
  {"XC", {"XC", "3S91LELOPFR24", "SMELLS"}},
  {"DW", {"DW", "IPJYEZ78XUG1", "HELLO"}},
  {"VF", {"VF", "BIYB3PTN6QM", "HELLO"}},
  {"JT", {"JT", "18FGDN62Q0RZIWH91E", "SMELLS"}},
  {"YR", {"YR", "DZLIAFJ9MANS", "LIKE"}},
  {"GV", {"GV", "DAY3B7ZDHUHZDC", "HELLO"}},
  {"QH", {"QH", "A92S38TTE1BEQSODY0A", "LIKE"}},
  {"ZX", {"ZX", "N9P4A0SC0NMGR3UJ", "SOMEONE"}},
  {"BY", {"BY", "J89FXILP7YB38", "HOPELESS_CRACKERS"}},
  {"BA", {"BA", "EWKH072QTBB", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "RJOXJJ4M5967HP6NEW", "SOMEONE"}},
  {"AJ", {"AJ", "YV66NB6FINH3VH6Z965", "FEEL_OFF_A_CHICKEN"}},
  {"SI", {"SI", "62WAESQN8PST2", "SOMEONE"}},
  {"RQ", {"RQ", "Q3BX1O6MYAVX38Q7", "SMELLS"}},
  {"TH", {"TH", "SWN050QKRLCO3AL0Q", "HOPELESS_CRACKERS"}},
  {"XY", {"XY", "Z5E3NPEP5TYF5IELQE", "IN_THE_WINTER"}},
  {"WI", {"WI", "SNJWYKMST7GB", "IN_THE_WINTER"}},
  {"ZW", {"ZW", "R8RLK8DSN98O0D4", "HELLO"}},
};
const map<string, S> mp = {
  {"YP", {"YP", "F026KHB13VX24ZIIX", "HELLO"}},
  {"YH", {"YH", "D9I7AYP61BVDT0TP", "HOPELESS_CRACKERS"}},
  {"FW", {"FW", "PG8BUUIDZZ648UQT", "FEEL_OFF_A_CHICKEN"}},
  {"UF", {"UF", "F1AA2FSFXD", "FEEL_OFF_A_CHICKEN"}},
  {"FT", {"FT", "YSY59KNAINW5GBC3S", "FEEL_OFF_A_CHICKEN"}},
  {"DQ", {"DQ", "ZU1VNW0PS3", "HOPELESS_CRACKERS"}},
  {"VI", {"VI", "Z8EV0JCVORKYR9K5HEX", "FEEL_OFF_A_CHICKEN"}},
  {"YF", {"YF", "G9ENY2PX45UGZD1W3Q", "LIKE"}},
  {"KN", {"KN", "70CN5AU6UJ", "IN_THE_WINTER"}},
  {"DC", {"DC", "8BHQ9ICG4HE6J", "HELLO"}},
  {"VE", {"VE", "UBIN4XKROFJY", "HELLO"}},
  {"WH", {"WH", "11PACGVX35ZZ7NRZ", "FEEL_OFF_A_CHICKEN"}},
  {"EL", {"EL", "Z1JRH6UCA0BJ", "HOPELESS_CRACKERS"}},
  {"OD", {"OD", "S8Z0HXZWH7OAFW6", "SOMEONE"}},
  {"SM", {"SM", "O3N9GPXJEFWXT", "HELLO"}},
  {"PO", {"PO", "88P5G6ETT5OZJG1", "SOMEONE"}},
  {"TY", {"TY", "7ZNCYMPS21", "HELLO"}},
  {"DD", {"DD", "09R67PZ5JQ5", "LIKE"}},
  {"NO", {"NO", "RGJD608YLHYDHSIWV", "HELLO"}},
  {"GN", {"GN", "MXCXTCXC6GSB", "HOPELESS_CRACKERS"}},
  {"VB", {"VB", "4R1PRXLTYFES7", "HOPELESS_CRACKERS"}},
  {"DY", {"DY", "LIB6I18B1UYQ4U2", "FEEL_OFF_A_CHICKEN"}},
  {"DH", {"DH", "194FKPDCGFIYQ1", "FEEL_OFF_A_CHICKEN"}},
  {"BV", {"BV", "6O82S1WGDJIW", "SOMEONE"}},
  {"PN", {"PN", "PPTMKEVTHAU1Q4Q29", "HELLO"}},
  {"IB", {"IB", "8LPKK0NM47L6L6", "FEEL_OFF_A_CHICKEN"}},
  {"OJ", {"OJ", "SQ5S07LUO049", "SMELLS"}},
  {"FL", {"FL", "HQYBYNW9FT2A4B1NCME", "FEEL_OFF_A_CHICKEN"}},
  {"QW", {"QW", "19ME88DR4ZVHUPKSCN", "HOPELESS_CRACKERS"}},
  {"CK", {"CK", "75CRPHCPNUR", "HELLO"}},
  {"PC", {"PC", "GJTB5G1UKPNYR7WN", "FEEL_OFF_A_CHICKEN"}},
  {"CG", {"CG", "PUNXLUHVEGSN8DG", "FEEL_OFF_A_CHICKEN"}},
  {"CI", {"CI", "R101JNQ27I5R", "HELLO"}},
  {"CY", {"CY", "09O30F1VF8HF5", "IN_THE_WINTER"}},
  {"PE", {"PE", "GJDVUI5QN91RY", "HELLO"}},
  {"JP", {"JP", "VRW2ML86HXR0I", "SMELLS"}},
  {"BP", {"BP", "HE4TYUDAS0SLAZC", "SMELLS"}},
  {"GU", {"GU", "44J2MUATNBC", "HELLO"}},
  {"AE", {"AE", "1FW2U30AXWT", "SMELLS"}},
  {"LH", {"LH", "CG9R75WYYPPC74", "HELLO"}},
  {"CJ", {"CJ", "EP28O5YIOINREFKEA", "LIKE"}},
  {"EH", {"EH", "QAGXU97GZL0IT0", "IN_THE_WINTER"}},
  {"OG", {"OG", "S7HCS3D6FV9A0OCD", "LIKE"}},
  {"NO", {"NO", "N1182J8LDF8", "SMELLS"}},
  {"KD", {"KD", "FCSVZ6RWX9TERO", "LIKE"}},
  {"NP", {"NP", "Q1B4QX11AS7", "HOPELESS_CRACKERS"}},
  {"JM", {"JM", "2AOXKZ8QDII9X30URZ", "SMELLS"}},
  {"LX", {"LX", "5SDCBMUCDW3YHMG9V", "IN_THE_WINTER"}},
  {"SM", {"SM", "N2DSWPBU0GL", "FEEL_OFF_A_CHICKEN"}},
  {"ZC", {"ZC", "3O7OUHT2PJPR07UXUW4", "IN_THE_WINTER"}},
  {"NH", {"NH", "ZMWH4X34S199I", "LIKE"}},
  {"HJ", {"HJ", "6TV9J727XWL0K2WBNN", "SOMEONE"}},
  {"NZ", {"NZ", "ICTQJCY6PYPGR98UQ", "HOPELESS_CRACKERS"}},
  {"QL", {"QL", "U53XGU7NKI2V5JWY", "LIKE"}},
  {"PT", {"PT", "XGFJ0Y12176756WJ1", "SOMEONE"}},
  {"LI", {"LI", "8EE1VYN5AYKJ70", "HOPELESS_CRACKERS"}},
  {"MR", {"MR", "JTQ1W4R9VS7ODRZ", "LIKE"}},
  {"WB", {"WB", "9SJMU9WLWZD", "SMELLS"}},
  {"YY", {"YY", "ESBHL8WFTCBS3H6Q", "HOPELESS_CRACKERS"}},
  {"UA", {"UA", "PP79IFI7OTUDGOUMQ6", "LIKE"}},
  {"EU", {"EU", "ANOEXHHWIMR4S", "IN_THE_WINTER"}},
  {"DC", {"DC", "AS5CRFI4EO", "SOMEONE"}},
  {"TZ", {"TZ", "62TEMOOQFVGEEY8GW", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "9W7B9RCCFXCQ33SM09", "IN_THE_WINTER"}},
  {"IX", {"IX", "8N6Z18OK2KPNXDA7M", "SOMEONE"}},
  {"SN", {"SN", "DTPTPPSFNBT", "HOPELESS_CRACKERS"}},
  {"FV", {"FV", "1RG5C04Z1O", "SMELLS"}},
  {"WU", {"WU", "09E6E529C8NGU8", "SMELLS"}},
  {"MX", {"MX", "Y0KIMG7MNS", "SOMEONE"}},
  {"MF", {"MF", "NUEUO9FGICMAII", "FEEL_OFF_A_CHICKEN"}},
  {"YN", {"YN", "YHINSJ9NA0T6", "FEEL_OFF_A_CHICKEN"}},
  {"YM", {"YM", "Q1133M5RT8S14UJI3", "IN_THE_WINTER"}},
  {"VU", {"VU", "WL4K1A7GTTM", "LIKE"}},
  {"UI", {"UI", "UGHWIVXQZ698920QF7K", "IN_THE_WINTER"}},
  {"ZJ", {"ZJ", "1MAQQ491DV7MQR1", "IN_THE_WINTER"}},
  {"NC", {"NC", "RHG1K1U22W8KML", "HOPELESS_CRACKERS"}},
  {"CF", {"CF", "JFCHPQE3UHMX", "LIKE"}},
  {"IT", {"IT", "L73393FTXZB5C4", "SMELLS"}},
  {"NH", {"NH", "4TVLESMFF74U0AS7JM", "SOMEONE"}},
  {"QP", {"QP", "LVMGZGT6DU638", "LIKE"}},
  {"PL", {"PL", "117292ZBWKIPB", "SMELLS"}},
  {"XN", {"XN", "ZV2HXWDQJH1D5TOH179", "SOMEONE"}},
  {"QJ", {"QJ", "M5UV8HKYETE613", "LIKE"}},
  {"TG", {"TG", "2IPIYXJHW5", "HOPELESS_CRACKERS"}},
  {"RB", {"RB", "PSK4923TH8KO0WKZF8X", "SMELLS"}},
  {"ON", {"ON", "VGUTMH2SHHU129U1AXZ", "HOPELESS_CRACKERS"}},
  {"XM", {"XM", "SZKZ1Q3FL37Z9ZCD7", "IN_THE_WINTER"}},
  {"ZO", {"ZO", "QNK2M8I16W96", "HOPELESS_CRACKERS"}},
  {"ZL", {"ZL", "0I9WN0N5LNBL0IQ", "IN_THE_WINTER"}},
  {"RK", {"RK", "3EAJMYEFNWI3KPTGME", "SOMEONE"}},
  {"UF", {"UF", "UU0UZFEXY2", "HELLO"}},
  {"LL", {"LL", "6SWFO32WUXX8", "SOMEONE"}},
  {"ZL", {"ZL", "B3GI2JQXY9W60", "LIKE"}},
  {"NF", {"NF", "TV6A1PNXQ4EPH", "SMELLS"}},
  {"BK", {"BK", "WFNVXJRRLA4M", "SMELLS"}},
  {"HE", {"HE", "SUXFOVRN21B1", "FEEL_OFF_A_CHICKEN"}},
  {"HR", {"HR", "1K3FTEMGS426HBLVL", "HELLO"}},
  {"IM", {"IM", "NH5UTCWOZUGY9L", "HOPELESS_CRACKERS"}},
  {"NK", {"NK", "4BCYV8DTORN0A5", "LIKE"}},
  {"UW", {"UW", "Z6KD31WQUUAADR0L4VZ", "IN_THE_WINTER"}},
  {"QL", {"QL", "3HVQMFX0NFGGL", "LIKE"}},
  {"XA", {"XA", "S6OSQBJPWY", "SMELLS"}},
  {"UN", {"UN", "84Z8PNYG8E21", "FEEL_OFF_A_CHICKEN"}},
  {"QS", {"QS", "G3WA9FAYJS9U9N2R3J", "LIKE"}},
  {"FI", {"FI", "3KDFKO2G77876", "SMELLS"}},
  {"NL", {"NL", "FRRAGWCZ18H06", "FEEL_OFF_A_CHICKEN"}},
  {"AB", {"AB", "BTLCHLXMF72XKHW4VB9", "HELLO"}},
  {"XQ", {"XQ", "XCGOFWIE3FK4OPLR", "HELLO"}},
  {"NF", {"NF", "OXJEMCY9F2J8VOCPH", "LIKE"}},
  {"HW", {"HW", "V5DZCPKN9CX73T", "IN_THE_WINTER"}},
  {"IO", {"IO", "L5J7TEQXEL5B36H", "SMELLS"}},
  {"GF", {"GF", "DSREDAOTTF1XHVTSB2F", "IN_THE_WINTER"}},
  {"RU", {"RU", "BQAHMF86U6B5", "SOMEONE"}},
  {"RC", {"RC", "1N47HKD20SF7Q43NL", "SMELLS"}},
  {"AV", {"AV", "2CTF7Q34VLE2KG56Q", "IN_THE_WINTER"}},
  {"SD", {"SD", "3ON55JH8K23FIY", "SMELLS"}},
  {"UN", {"UN", "7YND75WG75189Q97B", "HELLO"}},
  {"QB", {"QB", "F4JH1R3886GTR021SC4", "LIKE"}},
  {"AL", {"AL", "6M93IDSYQIDJR", "HOPELESS_CRACKERS"}},
  {"MU", {"MU", "AIEC9MLN0Z6A7CRA68D", "HELLO"}},
  {"UA", {"UA", "N3UA370M70LLESG5HO9", "IN_THE_WINTER"}},
  {"EH", {"EH", "815HL25XBOMWYJYW8", "HELLO"}},
  {"DM", {"DM", "NJQWGYSUTRT6D", "SOMEONE"}},
  {"XG", {"XG", "WIZG80WTDAFL", "SMELLS"}},
  {"XQ", {"XQ", "YUD7ZLN83T8ABV6", "LIKE"}},
  {"VE", {"VE", "N461WGRET19GPQWDT", "HOPELESS_CRACKERS"}},
  {"NE", {"NE", "Q0UPKKPLOTYW4", "FEEL_OFF_A_CHICKEN"}},
  {"DY", {"DY", "AT6W5BX1U2DUVVR", "LIKE"}},
  {"EK", {"EK", "NXTOUJZ5TCKEBP", "SOMEONE"}},
  {"SZ", {"SZ", "3XPQGBD2U7BPEOLS5HM", "HELLO"}},
  {"MX", {"MX", "RDL9TX5YSRSS", "SOMEONE"}},
  {"SB", {"SB", "VE8L5IC16BIYBPZL8", "HOPELESS_CRACKERS"}},
  {"VH", {"VH", "RRVPL82LSALEO", "SOMEONE"}},
  {"OS", {"OS", "YMXLTG53J1FI5T3", "HOPELESS_CRACKERS"}},
  {"UR", {"UR", "1217YNJB3OSLLGGCC", "IN_THE_WINTER"}},
  {"VE", {"VE", "QH45YXOJBEOOYID", "SMELLS"}},
  {"EM", {"EM", "CTXHP917WFXRVY9Y", "SOMEONE"}},
  {"GI", {"GI", "EFOL72JDFW0DSI1U", "LIKE"}},
  {"JZ", {"JZ", "4Q9S6Y4EEB6C41O5", "LIKE"}},
  {"YJ", {"YJ", "4F3M48PX9H", "IN_THE_WINTER"}},
  {"ES", {"ES", "E3HYZPQWNDGCGCWF", "HELLO"}},
  {"TV", {"TV", "L850C9C21BXOHCYT8", "SMELLS"}},
  {"ZO", {"ZO", "T6W87HEP7SU", "SOMEONE"}},
  {"UC", {"UC", "X6BBGG5LY77XVA313JN", "SMELLS"}},
  {"PC", {"PC", "WF3O7TNXNRTSXX", "SMELLS"}},
  {"CN", {"CN", "TH8AEFF6VVZA95", "HOPELESS_CRACKERS"}},
  {"KM", {"KM", "W24PKQWTDB", "SMELLS"}},
  {"SE", {"SE", "F1ND5Y20B4", "SMELLS"}},
  {"AX", {"AX", "E80VJ2CQI6J3PNQ22Y", "SOMEONE"}},
  {"DP", {"DP", "E6ODWPZ33CAQAI5E", "HOPELESS_CRACKERS"}},
  {"VN", {"VN", "GB7VCR6GUP", "HOPELESS_CRACKERS"}},
  {"LD", {"LD", "FVNE7JCVH3DCN", "FEEL_OFF_A_CHICKEN"}},
  {"VJ", {"VJ", "KKES5IU0IKY", "SMELLS"}},
  {"NZ", {"NZ", "VWK521VI6E8GNXJG1", "IN_THE_WINTER"}},
  {"UC", {"UC", "R24PYGO4S3OR3YYM47", "FEEL_OFF_A_CHICKEN"}},
  {"BD", {"BD", "1HFPL6MQAGS590P8O", "LIKE"}},
  {"RW", {"RW", "DZEDSMZ6ZKUDWCE8J", "SOMEONE"}},
  {"CT", {"CT", "MLEJ2MBKI9", "HOPELESS_CRACKERS"}},
  {"EJ", {"EJ", "2EI0V1W69CBTAF9O6BV", "SMELLS"}},
  {"CB", {"CB", "WSDUXD22LZCTP", "SMELLS"}},
  {"KL", {"KL", "KPXK5Z08QQRPRLCX35", "IN_THE_WINTER"}},
  {"CC", {"CC", "K9YQZFHBKI4ELFTXBY", "SOMEONE"}},
  {"OM", {"OM", "9HTOP0J3A4EGRPK", "HELLO"}},
  {"GF", {"GF", "PVIFNUOS8QI88", "SOMEONE"}},
  {"NN", {"NN", "JA63U2GEDI9P7E7PM7K", "HOPELESS_CRACKERS"}},
  {"GE", {"GE", "NJNNS8Y99XZ2IE1WI", "SOMEONE"}},
  {"DV", {"DV", "UL5OTAD3C40", "LIKE"}},
  {"AC", {"AC", "VAYW3V25BCG", "HOPELESS_CRACKERS"}},
  {"UF", {"UF", "MB4WYGTRSYHP4", "HELLO"}},
  {"GM", {"GM", "UL8XHEWL8R0WZ37N", "FEEL_OFF_A_CHICKEN"}},
  {"KI", {"KI", "R7UWQ5GBLXXY9MJ70V", "HELLO"}},
  {"TE", {"TE", "38554K5VO4V", "SMELLS"}},
  {"XC", {"XC", "M8DWGSRONIR", "HOPELESS_CRACKERS"}},
  {"BV", {"BV", "LCLY2N0Y7KUTBRO551", "LIKE"}},
  {"UC", {"UC", "0T5P7LEAVYY9", "SMELLS"}},
  {"BD", {"BD", "6GQP8UJV8KJO0", "FEEL_OFF_A_CHICKEN"}},
  {"WM", {"WM", "H7Q0LK8OA4K7T7VUK", "HOPELESS_CRACKERS"}},
  {"OU", {"OU", "ZL4VV020CK", "IN_THE_WINTER"}},
  {"OB", {"OB", "IZXPOZURAR", "IN_THE_WINTER"}},
  {"GY", {"GY", "T8ECS45E4PSXTT", "IN_THE_WINTER"}},
  {"UR", {"UR", "94IV9IRXA3KHFXLLW36", "SOMEONE"}},
  {"LZ", {"LZ", "49GGNXF70NOP1AZ", "SOMEONE"}},
  {"XC", {"XC", "3S91LELOPFR24", "SMELLS"}},
  {"DW", {"DW", "IPJYEZ78XUG1", "HELLO"}},
  {"VF", {"VF", "BIYB3PTN6QM", "HELLO"}},
  {"JT", {"JT", "18FGDN62Q0RZIWH91E", "SMELLS"}},
  {"YR", {"YR", "DZLIAFJ9MANS", "LIKE"}},
  {"GV", {"GV", "DAY3B7ZDHUHZDC", "HELLO"}},
  {"QH", {"QH", "A92S38TTE1BEQSODY0A", "LIKE"}},
  {"ZX", {"ZX", "N9P4A0SC0NMGR3UJ", "SOMEONE"}},
  {"BY", {"BY", "J89FXILP7YB38", "HOPELESS_CRACKERS"}},
  {"BA", {"BA", "EWKH072QTBB", "HOPELESS_CRACKERS"}},
  {"FL", {"FL", "RJOXJJ4M5967HP6NEW", "SOMEONE"}},
  {"AJ", {"AJ", "YV66NB6FINH3VH6Z965", "FEEL_OFF_A_CHICKEN"}},
  {"SI", {"SI", "62WAESQN8PST2", "SOMEONE"}},
  {"RQ", {"RQ", "Q3BX1O6MYAVX38Q7", "SMELLS"}},
  {"TH", {"TH", "SWN050QKRLCO3AL0Q", "HOPELESS_CRACKERS"}},
  {"XY", {"XY", "Z5E3NPEP5TYF5IELQE", "IN_THE_WINTER"}},
  {"WI", {"WI", "SNJWYKMST7GB", "IN_THE_WINTER"}},
  {"ZW", {"ZW", "R8RLK8DSN98O0D4", "HELLO"}},
};
}