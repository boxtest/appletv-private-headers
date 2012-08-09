/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_source, OS_dispatch_queue;

@interface AXTimer : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	NSObject<OS_dispatch_source> *_dispatchTimer;	// 8 = 0x8
	BOOL _isCancelled;	// 12 = 0xc
}
- (id)init;	// 0x35057b59
- (id)initWithTargetSerialQueue:(id)targetSerialQueue;	// 0x35057b6d
- (void)_reallyCancel;	// 0x35057f49
- (void)afterDelay:(double)delay processBlock:(id)block;	// 0x35057cd1
- (void)afterDelay:(double)delay processBlock:(id)block cancelBlock:(id)block3;	// 0x35057cf5
- (void)cancel;	// 0x35057f75
- (void)dealloc;	// 0x35057c79
@end
