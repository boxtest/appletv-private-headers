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
@interface _UIPickerViewTopFrame : UIView {
@private
	UIImage *_leftImage;	// 48 = 0x30
	UIImage *_middleImage;	// 52 = 0x34
	UIImage *_rightImage;	// 56 = 0x38
	float _inset;	// 60 = 0x3c
	float _shift;	// 64 = 0x40
}
- (id)initWithFrame:(CGRect)frame;	// 0x32e03b45
- (void)dealloc;	// 0x32e0eff1
- (void)drawRect:(CGRect)rect;	// 0x32e0ae05
- (void)setInset:(float)inset;	// 0x32e05219
- (void)setLeftImage:(id)image middleImage:(id)image2 rightImage:(id)image3;	// 0x32e03d01
- (void)setShift:(float)shift;	// 0x32e05259
@end

