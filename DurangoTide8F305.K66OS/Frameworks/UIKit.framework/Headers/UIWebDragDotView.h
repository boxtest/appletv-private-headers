/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView {
@private
	UIImageView *_ball;	// 44 = 0x2c
	BOOL m_dotAtTop;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL showsBall;	// G=0x321d71b1; S=0x321d7169; 
- (id)initWithFrame:(CGRect)frame withDotAtTop:(BOOL)top;	// 0x321d7cad
- (void)dealloc;	// 0x321d7475
- (void)drawRect:(CGRect)rect;	// 0x321d801d
- (void)setFrame:(CGRect)frame;	// 0x321d7dd1
// declared property setter: - (void)setShowsBall:(BOOL)ball;	// 0x321d7169
// declared property getter: - (BOOL)showsBall;	// 0x321d71b1
@end

