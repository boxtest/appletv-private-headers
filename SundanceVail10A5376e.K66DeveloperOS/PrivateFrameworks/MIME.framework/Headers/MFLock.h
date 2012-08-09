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
+ (void)initialize;	// 0x369abb51
- (id)init;	// 0x369abb69
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x369abb95
- (void)dealloc;	// 0x369abded
- (id)description;	// 0x369abd55
- (BOOL)isLockedByMe;	// 0x369abbf9
- (void)lock;	// 0x369abc05
- (BOOL)lockBeforeDate:(id)date;	// 0x369abcbd
- (BOOL)tryLock;	// 0x369abc5d
- (void)unlock;	// 0x369abd21
@end
