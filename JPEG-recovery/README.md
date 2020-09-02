# JPEG Recovery

JPEGs have “signatures,” patterns of bytes that can distinguish them from other file formats. Specifically, the first three bytes of JPEGs are: 0xff 0xd8 0xff

The fourth byte, meanwhile, is either 0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, or 0xef. Put another way, the fourth byte’s first four bits are 1110.

Odds are, if you find this pattern of four bytes on media known to store photos (e.g., a memory card), they demarcate the start of a JPEG. To be fair, you might encounter these patterns on some disk purely by chance, so data recovery isn’t an exact science.

Using this information and assuming there is no wasted space on the disc, this program will recover deleted jpeg files from memory cards.
