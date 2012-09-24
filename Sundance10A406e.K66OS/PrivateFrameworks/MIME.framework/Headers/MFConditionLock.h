/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSConditionLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x346f9e19
- (id)init;	// 0x346f9e31
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x346f9e5d
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x346f9e7d
- (void)dealloc;	// 0x346fa0c1
- (id)description;	// 0x346fa029
- (BOOL)isLockedByMe;	// 0x346f9ee5
- (BOOL)lockBeforeDate:(id)date;	// 0x346f9ef1
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x346f9f55
- (void)unlock;	// 0x346f9fbd
- (void)unlockWithCondition:(int)condition;	// 0x346f9ff1
@end
