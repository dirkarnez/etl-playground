#include <etl/cstring.h>
#include <etl/unordered_map.h>

const char* keys[] = {
    "abandon", "absence", "absent",  "absorb",  "abuse",   "account", "acquit",  "action",
    "active",  "add",     "adjust",  "admire",  "adult",   "advance", "adviser", "agency",
    "agile",   "aid",     "air",     "alarm",   "alcohol", "alive",   "allow",   "amber",
    "ample",   "analyst", "annual",  "ant",     "appeal",  "apple",   "appoint", "area",
};

constexpr size_t MAP_SIZE = 32;  // 32, 100 or 1000 (see map_keys.h)

using hashmap_t = etl::unordered_map<const char*, unsigned long, MAP_SIZE>;

hashmap_t hashmap{};

void setup() {
  hashmap[keys[0]] = 123;
}
