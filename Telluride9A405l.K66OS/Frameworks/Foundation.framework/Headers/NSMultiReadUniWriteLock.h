/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x302d98fd; S=0x302d98bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x302d95ad
- (id)init;	// 0x302d95b5
- (void)dealloc;	// 0x302d9605
- (id)description;	// 0x302d97ed
- (void)finalize;	// 0x302d96a5
- (void)lock;	// 0x302d97a1
- (void)lockForReading;	// 0x302d972d
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x302d9755
- (void)lockForWriting;	// 0x302d9759
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x302d979d
// converted property getter: - (id)name;	// 0x302d98fd
// converted property setter: - (void)setName:(id)name;	// 0x302d98bd
- (BOOL)tryLockForReading;	// 0x302d973d
- (BOOL)tryLockForWriting;	// 0x302d9775
- (void)unlock;	// 0x302d97bd
@end

