/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateShadowView : UIView {
@private
	BOOL _landscape;	// 41 = 0x29
	int _windowType;	// 44 = 0x2c
}
@property(assign, nonatomic) int windowType;	// G=0x32177535; S=0x32177545; @synthesize=_windowType
- (id)initWithFrame:(CGRect)frame;	// 0x3217863d
- (void)drawRect:(CGRect)rect;	// 0x3217a625
- (void)setLandscape:(BOOL)landscape;	// 0x32177525
// declared property setter: - (void)setWindowType:(int)type;	// 0x32177545
// declared property getter: - (int)windowType;	// 0x32177535
@end

