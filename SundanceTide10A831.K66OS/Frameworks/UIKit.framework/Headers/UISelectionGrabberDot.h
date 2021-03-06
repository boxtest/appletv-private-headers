/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIView {
	UISelectionGrabber *m_grabber;	// 84 = 0x54
}
@property(assign, nonatomic) UISelectionGrabber *grabber;	// G=0x31eb1469; S=0x31d98119; @synthesize=m_grabber
- (id)initWithFrame:(CGRect)frame container:(id)container;	// 0x31d9800d
- (void)dealloc;	// 0x31d984d1
// declared property getter: - (id)grabber;	// 0x31eb1469
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31eb12cd
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x31eb126d
- (void)setFrame:(CGRect)frame;	// 0x31d980c9
// declared property setter: - (void)setGrabber:(id)grabber;	// 0x31d98119
- (int)textEffectsVisibilityLevel;	// 0x31eb1465
- (int)textEffectsVisibilityLevelWhenKey;	// 0x31eb1451
@end

