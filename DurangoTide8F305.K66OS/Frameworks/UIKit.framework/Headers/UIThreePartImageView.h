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
@interface UIThreePartImageView : UIView {
@private
	XXStruct_UUz0SD _slices;	// 44 = 0x2c
	UIImage *_image;	// 92 = 0x5c
}
- (void)dealloc;	// 0x322407c9
- (void)drawRect:(CGRect)rect;	// 0x32240c75
- (void)setImage:(id)image;	// 0x322402cd
- (void)setSlices:(XXStruct_UUz0SD)slices;	// 0x3223fd09
@end

