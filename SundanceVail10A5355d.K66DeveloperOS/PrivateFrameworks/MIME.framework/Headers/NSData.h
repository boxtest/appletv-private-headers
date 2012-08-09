/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x373bb359
- (id)mf_subdataWithRange:(NSRange)range;	// 0x373bb269
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x373c3649
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x373c37b9
- (id)mf_decodeModifiedBase64;	// 0x373c37c1
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x373c34cd
- (id)mf_decodeUuencoded;	// 0x373c35b9
- (id)mf_encodeBase64;	// 0x373c38b5
- (id)mf_encodeBase64HeaderData;	// 0x373c38cd
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x373c37c9
- (id)mf_encodeModifiedBase64;	// 0x373c38c1
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x373c5c51
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x373c5ac1
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x373c5a05
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x373c58f9
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x373c5871
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x373c5945
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x373c598d
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x373c59d5
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x373c5819
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x373c55c1
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x373c57e5
- (id)mf_subdataToIndex:(unsigned)index;	// 0x373c57d1
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x373e3d55
@end
