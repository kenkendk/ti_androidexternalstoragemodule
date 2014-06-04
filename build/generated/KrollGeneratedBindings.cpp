/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/36/0y6y3zls7h70v6tz9d5fqmbw0000gn/T/Michiel/mkdfs-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/36/0y6y3zls7h70v6tz9d5fqmbw0000gn/T/Michiel/mkdfs-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "dk.mikkendigital.mkdfs.MkdfsModule.h"


#line 13 "/private/var/folders/36/0y6y3zls7h70v6tz9d5fqmbw0000gn/T/Michiel/mkdfs-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 1, duplicates = 0 */

class MkdfsBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
MkdfsBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
MkdfsBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1,
      MIN_WORD_LENGTH = 34,
      MAX_WORD_LENGTH = 34,
      MIN_HASH_VALUE = 34,
      MAX_HASH_VALUE = 34
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 15 "/private/var/folders/36/0y6y3zls7h70v6tz9d5fqmbw0000gn/T/Michiel/mkdfs-generated/KrollGeneratedBindings.gperf"
      {"dk.mikkendigital.mkdfs.MkdfsModule", ::dk::mikkendigital::mkdfs::MkdfsModule::bindProxy, ::dk::mikkendigital::mkdfs::MkdfsModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 16 "/private/var/folders/36/0y6y3zls7h70v6tz9d5fqmbw0000gn/T/Michiel/mkdfs-generated/KrollGeneratedBindings.gperf"

