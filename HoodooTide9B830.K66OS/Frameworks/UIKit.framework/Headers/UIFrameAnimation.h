/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


@interface UIFrameAnimation : UIAnimation {
	CGRect _startFrame;	// 44 = 0x2c
	CGRect _endFrame;	// 60 = 0x3c
	int _fieldsToChange;	// 76 = 0x4c
}
@property(assign) CGRect endFrame;	// G=0x301fd151; S=0x3016a945; converted property
- (id)initWithTarget:(id)target;	// 0x3016a815
// converted property getter: - (CGRect)endFrame;	// 0x301fd151
// converted property setter: - (void)setEndFrame:(CGRect)frame;	// 0x3016a945
- (void)setProgress:(float)progress;	// 0x3016b0f9
- (void)setSignificantRectFields:(int)fields;	// 0x301fd175
- (void)setStartFrame:(CGRect)frame;	// 0x3016a929
@end

