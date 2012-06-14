/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRIconPreviewController : BRControl {
@private
	BRTextControl *_message;	// 48 = 0x30
	BRTextControl *_instruction;	// 52 = 0x34
	BRImageControl *_image;	// 56 = 0x38
	float _iconHeightFactor;	// 60 = 0x3c
	float _horizontalPosition;	// 64 = 0x40
	float _verticalPosition;	// 68 = 0x44
	float _messageVerticalPosition;	// 72 = 0x48
}
- (id)init;	// 0x366e90ad
- (id)accessibilityLabel;	// 0x366e98c1
- (void)dealloc;	// 0x366e91cd
- (void)layoutSubcontrols;	// 0x366e9241
- (void)setIconHeightFactor:(float)factor;	// 0x366e9861
- (void)setIconHorizontalPosition:(float)position;	// 0x366e9881
- (void)setIconVerticalPosition:(float)position;	// 0x366e98a1
- (void)setImage:(id)image;	// 0x366e97a5
- (void)setInstructions:(id)instructions;	// 0x366e97c5
- (void)setMessage:(id)message;	// 0x366e96e9
- (void)setMessageVerticalPosition:(float)position;	// 0x366e9785
@end
