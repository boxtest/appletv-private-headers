/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIOnePartImageView : UIView {
@private
	CGRect _fromRect;	// 48 = 0x30
	UIImage *_image;	// 64 = 0x40
}
- (void)dealloc;	// 0x32fc25e9
- (void)drawRect:(CGRect)rect;	// 0x32fc2679
- (void)setFromRect:(CGRect)rect;	// 0x32fc265d
- (void)setImage:(id)image;	// 0x32fc2635
@end

