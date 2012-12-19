/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UICalloutBarOverlay : UIView {
	CGRect m_arrowRect;	// 84 = 0x54
	float m_dividerOffsets[20];	// 100 = 0x64
	BOOL highlighted;	// 180 = 0xb4
	CGRect highlightRect;	// 184 = 0xb8
}
@property(assign, nonatomic) CGRect highlightRect;	// G=0x32f6841d; S=0x32dacc79; @synthesize
@property(assign, nonatomic) BOOL highlighted;	// G=0x32e07fc5; S=0x32daf215; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x32dacbe5
- (void)dealloc;	// 0x32f683f1
- (void)drawRect:(CGRect)rect;	// 0x32e078e1
// declared property getter: - (CGRect)highlightRect;	// 0x32f6841d
// declared property getter: - (BOOL)highlighted;	// 0x32e07fc5
- (void)setDividerOffsets:(float *)offsets;	// 0x32e0769d
// declared property setter: - (void)setHighlightRect:(CGRect)rect;	// 0x32dacc79
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32daf215
- (void)setHighlighted:(BOOL)highlighted forFrame:(CGRect)frame;	// 0x32daf1c1
@end
