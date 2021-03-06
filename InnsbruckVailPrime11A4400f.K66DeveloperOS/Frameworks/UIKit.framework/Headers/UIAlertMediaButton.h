/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UIImageView, UIImage;

__attribute__((visibility("hidden")))
@interface UIAlertMediaButton : UIAlertButton {
	UIImageView *_checkmarkView;	// 232 = 0xe8
	UIImage *_tableIcon;	// 236 = 0xec
	UIImage *_highlightedTableIcon;	// 240 = 0xf0
}
@property(readonly, assign, nonatomic) UIImageView *checkmarkView;	// G=0x2f7de899; 
@property(retain, nonatomic) UIImage *highlightedTableIcon;	// G=0x2f7decd5; S=0x2f7dece5; @synthesize=_highlightedTableIcon
@property(retain, nonatomic) UIImage *tableIcon;	// G=0x2f7decb5; S=0x2f7decc5; @synthesize=_tableIcon
// declared property getter: - (id)checkmarkView;	// 0x2f7de899
- (void)dealloc;	// 0x2f7dec3d
// declared property getter: - (id)highlightedTableIcon;	// 0x2f7decd5
- (void)layoutSubviews;	// 0x2f7de95d
// declared property setter: - (void)setHighlightedTableIcon:(id)icon;	// 0x2f7dece5
// declared property setter: - (void)setTableIcon:(id)icon;	// 0x2f7decc5
// declared property getter: - (id)tableIcon;	// 0x2f7decb5
@end

