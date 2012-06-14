/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x36e4f891
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x36e4f90d
- (id)stringByEncodingSlashes;	// 0x36e4f8c5
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x36e4f94d
@end

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x36e4fffd
- (id)appendSlashIfNeeded;	// 0x36e50111
- (id)quote;	// 0x36e4fb75
- (id)removeSlashIfNeeded;	// 0x36e500b9
- (id)safeFilename;	// 0x36e50041
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x36e4febd
- (id)trimChar:(unsigned short)aChar;	// 0x36e4fded
- (id)trimCommas;	// 0x36e4fd11
- (id)trimFinalChar:(unsigned short)aChar;	// 0x36e4fd39
- (id)trimFinalComma;	// 0x36e4fc61
- (id)trimFirstChar:(unsigned short)aChar;	// 0x36e4fd9d
- (id)trimFirstComma;	// 0x36e4fcc1
- (id)trimWhiteSpace;	// 0x36e4fc19
- (id)unquote;	// 0x36e4fe19
@end

@interface NSString (DAVExtensions)
- (id)stringByURLQuoting;	// 0x36e511ed
- (id)stringByURLQuotingPaths;	// 0x36e511a1
- (id)stringByURLUnquoting;	// 0x36e51239
- (id)stringByXMLUnquoting;	// 0x36e51041
@end
