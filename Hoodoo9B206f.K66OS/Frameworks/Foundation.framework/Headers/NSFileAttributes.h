/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library
#import "Foundation-Structs.h"

@class NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
	stat statInfo;	// 8 = 0x8
	struct {
		BOOL extensionHidden;
		NSDate *creationDate;
		fields validFields;
	} catInfo;	// 116 = 0x74
	NSDictionary *extendedAttrs;	// 128 = 0x80
	int fileProtectionClass;	// 132 = 0x84
}
+ (id)_attributesAtPath:(id)path partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x31d23aa9
+ (id)_attributesAtURL:(id)url partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x31d55e2d
+ (id)attributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x31d32b09
+ (id)attributesWithStat:(stat *)stat;	// 0x31d23bfd
- (unsigned)count;	// 0x31d5667d
- (void)dealloc;	// 0x31d24b35
- (id)fileGroupOwnerAccountName;	// 0x31d56865
- (unsigned)fileGroupOwnerAccountNumber;	// 0x31d568b1
- (id)fileModificationDate;	// 0x31d56771
- (id)fileOwnerAccountName;	// 0x31d56805
- (unsigned)fileOwnerAccountNumber;	// 0x31d56851
- (unsigned)filePosixPermissions;	// 0x31d567ed
- (unsigned long long)fileSize;	// 0x31d5675d
- (unsigned)fileSystemFileNumber;	// 0x31d568d5
- (int)fileSystemNumber;	// 0x31d568c5
- (id)fileType;	// 0x31d567d9
- (unsigned)hash;	// 0x31d56075
- (BOOL)isDirectory;	// 0x31d568e9
- (BOOL)isEqual:(id)equal;	// 0x31d56531
- (id)keyEnumerator;	// 0x31d566ed
- (id)objectForKey:(id)key;	// 0x31d23fa5
@end

