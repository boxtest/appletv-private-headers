/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryEnumerator.h"

@class NSFileAttributes, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface NSAllDescendantPathsEnumerator : NSDirectoryEnumerator {
@private
	NSString *path;	// 4 = 0x4
	NSArray *contents;	// 8 = 0x8
	unsigned idx;	// 12 = 0xc
	NSString *prepend;	// 16 = 0x10
	NSAllDescendantPathsEnumerator *under;	// 20 = 0x14
	NSFileAttributes *directoryAttributes;	// 24 = 0x18
	NSString *pathToLastReportedItem;	// 28 = 0x1c
	unsigned depth;	// 32 = 0x20
	BOOL cross;	// 36 = 0x24
	BOOL _padding[3];	// 37 = 0x25
}
@property(readonly, retain) NSFileAttributes *directoryAttributes;	// G=0x30663cf1; converted property
+ (id)newWithPath:(id)path prepend:(id)prepend attributes:(id)attributes cross:(BOOL)cross depth:(unsigned)depth;	// 0x3063fc81
- (id)_under;	// 0x30663df5
- (id)currentSubdirectoryAttributes;	// 0x30663d39
- (void)dealloc;	// 0x3063ffad
// converted property getter: - (id)directoryAttributes;	// 0x30663cf1
- (id)fileAttributes;	// 0x30663c85
- (unsigned)level;	// 0x30663db9
- (id)nextObject;	// 0x3063fd91
- (void)skipDescendants;	// 0x30663e15
- (void)skipDescendents;	// 0x30663e05
@end

