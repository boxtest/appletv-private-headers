/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x373dab99
- (id)init;	// 0x373dabb1
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x373dabdd
- (void)dealloc;	// 0x373dae35
- (id)description;	// 0x373dad9d
- (BOOL)isLockedByMe;	// 0x373dac41
- (void)lock;	// 0x373dac4d
- (BOOL)lockBeforeDate:(id)date;	// 0x373dad05
- (BOOL)tryLock;	// 0x373daca5
- (void)unlock;	// 0x373dad69
@end

