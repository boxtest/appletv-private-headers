/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class NSString;

@interface SBDeviceLockTitle : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x3547c239; S=0x3547c23d; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x3547c255; S=0x3547c265; @synthesize=_interfaceOrientation
@property(retain, nonatomic) NSString *subtitle;	// G=0x3547c249; S=0x3547c24d; 
@property(retain, nonatomic) NSString *title;	// G=0x3547c241; S=0x3547c245; 
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3547c13d
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x3547c1d1
- (void)blinkSubtitle;	// 0x3547c251
// declared property getter: - (int)interfaceOrientation;	// 0x3547c255
// declared property getter: - (BOOL)isHighlighted;	// 0x3547c239
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3547c23d
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x3547c265
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x3547c24d
// declared property setter: - (void)setTitle:(id)title;	// 0x3547c245
// declared property getter: - (id)subtitle;	// 0x3547c249
// declared property getter: - (id)title;	// 0x3547c241
@end
