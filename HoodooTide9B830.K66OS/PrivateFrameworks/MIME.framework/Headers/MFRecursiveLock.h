/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x36d4f1a5
- (id)init;	// 0x36d4df9d
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x36d4f13d
- (void)dealloc;	// 0x36d4f1bd
- (id)description;	// 0x36d4f209
- (BOOL)isLockedByMe;	// 0x36d4ecb9
- (void)lock;	// 0x36d4f3ad
- (BOOL)lockBeforeDate:(id)date;	// 0x36d4f2e1
- (BOOL)tryLock;	// 0x36d4f349
- (void)unlock;	// 0x36d4f2ad
@end

