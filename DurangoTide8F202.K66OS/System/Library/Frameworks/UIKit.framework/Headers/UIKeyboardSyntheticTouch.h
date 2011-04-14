/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
@private
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x307c7a71; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x307c7a81; @synthesize
@property(readonly, assign, nonatomic) float _pathMajorRadius;	// G=0x307c7a61; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x307c7a91; S=0x307c7a49; @synthesize
@property(assign, nonatomic) int phase;	// G=0x307c7ad9; S=0x307c7ae9; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x307c7ab9; S=0x307c7ac9; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x307c7af9; S=0x307c7b09; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x307c7aa9; S=0x307c8fb1; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x307c8cfd
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x307c7d69
// declared property getter: - (unsigned char)_pathIdentity;	// 0x307c7a71
// declared property getter: - (unsigned char)_pathIndex;	// 0x307c7a81
// declared property getter: - (float)_pathMajorRadius;	// 0x307c7a61
- (CGPoint)getLocationInWindow;	// 0x307c7a31
- (CGPoint)locationInView:(id)view;	// 0x307c9421
// declared property getter: - (CGPoint)locationInWindow;	// 0x307c7a91
// declared property getter: - (int)phase;	// 0x307c7ad9
- (CGPoint)previousLocationInView:(id)view;	// 0x307c93cd
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x307c7a49
// declared property setter: - (void)setPhase:(int)phase;	// 0x307c7ae9
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x307c7ac9
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x307c7b09
// declared property setter: - (void)setWindow:(id)window;	// 0x307c8fb1
// declared property getter: - (unsigned)tapCount;	// 0x307c7ab9
// declared property getter: - (double)timestamp;	// 0x307c7af9
// declared property getter: - (id)window;	// 0x307c7aa9
@end
