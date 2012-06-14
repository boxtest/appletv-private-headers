/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x33068385
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x33068401
- (id)stringByEncodingSlashes;	// 0x330683b9
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x330685f5
- (BOOL)isPathToAppleScript;	// 0x33068441
- (BOOL)isPathToBackupFile;	// 0x33068545
- (BOOL)isPathToICalBookmark;	// 0x33068585
- (BOOL)isPathToICalData;	// 0x33068505
- (BOOL)isPathToVCalData;	// 0x33068481
@end

@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x33068d55
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x33068e0d
- (id)quote;	// 0x330688b9
- (id)safeFilename;	// 0x33068d99
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x33068c11
- (id)trimChar:(unsigned short)aChar;	// 0x33068b31
- (id)trimCommas;	// 0x33068a59
- (id)trimFinalChar:(unsigned short)aChar;	// 0x33068a81
- (id)trimFinalComma;	// 0x330689b1
- (id)trimFirstChar:(unsigned short)aChar;	// 0x33068ae1
- (id)trimFirstComma;	// 0x33068a0d
- (id)trimWhiteSpace;	// 0x33068969
- (id)unquote;	// 0x33068b61
@end

@interface NSString (CalNSStringEmailAddressAdditions)
- (BOOL)hasMailto;	// 0x3306a73d
- (BOOL)resemblesEmailAddress;	// 0x3306a75d
- (id)stringAddingMailto;	// 0x3306a81d
- (id)stringRemovingMailto;	// 0x3306a85d
@end
