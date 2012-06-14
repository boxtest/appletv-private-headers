/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3MusicLibrary_SortMapEntry : NSObject {
@private
	long long _nameOrder;	// 4 = 0x4
	NSString *_name;	// 12 = 0xc
	NSData *_sortKey;	// 16 = 0x10
	int _nameSection;	// 20 = 0x14
}
- (id)initWithName:(id)name nameSection:(int)section sortKey:(id)key;	// 0x30e2d2bd
- (id)initWithStatement:(sqlite3_stmt *)statement;	// 0x30e2d359
- (void)dealloc;	// 0x30e2d445
- (id)description;	// 0x30e2d3e9
@end
