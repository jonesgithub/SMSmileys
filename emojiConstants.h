/* defines the unicode sequences for various emoji characters */

#ifndef emoji
#define emoji

#define smileyface  @"\ue056"
#define dface       @"\ue057"
#define pface       @"\ue105"
#define oface       @"\ue107"
#define sface       @"\ue407"
#define winkeyface  @"\ue405"
#define sadface     @"\ue058"
#define cryingface  @"\ue413"
#define heart       @"\ue022"
#define brokenheart @"\ue023"
#define thumbsup    @"\ue00e"
#define thumbsdown  @"\ue421"

#define ASCIISMILEYS { \
    @":)", \
    @":(", \
    @":o", \
    @";)", \
    @":'(", \
    @":D", \
    @":p", \
    @":s", \
    @"<3", \
    @"</3", \
    @"(Y)", \
    @"(N)", \
    @":-)", \
    @":-(", \
    @":-o", \
    @";-)", \
    @":'-(", \
    @":-D", \
    @":-p", \
    @":-s" \
}

#define EMOJISMILEYS { \
    smileyface, \
    sadface, \
    oface, \
    winkeyface, \
    cryingface, \
    dface, \
    pface, \
    sface, \
    heart, \
    brokenheart, \
    thumbsup, \
    thumbsdown \
};


#endif
