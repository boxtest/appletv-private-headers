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
@property(assign) BOOL cancel;	// G=0x3315225d; S=0x3315226d; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x33152149
- (id)initWithName:(id)name;	// 0x3315214d
// declared property getter: - (BOOL)cancel;	// 0x3315225d
- (void)dealloc;	// 0x331521b9
- (void)reset;	// 0x3315223d
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x3315226d
@end
