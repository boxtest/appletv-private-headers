/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRTimer : NSObject {
@private
	BOOL _cancel;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	double _interval;	// 12 = 0xc
}
@property(assign) BOOL cancel;	// G=0x35ed8391; S=0x35ed83a1; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x35ed827d
- (id)initWithName:(id)name;	// 0x35ed8281
// declared property getter: - (BOOL)cancel;	// 0x35ed8391
- (void)dealloc;	// 0x35ed82ed
- (void)reset;	// 0x35ed8371
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x35ed83a1
@end

