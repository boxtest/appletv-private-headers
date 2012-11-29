/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIView.h> // Unknown library
#import "Preferences-Structs.h"

@class PSSpecifier;

@interface PSEditingPane : UIView {
	PSSpecifier *_specifier;	// 84 = 0x54
	id _delegate;	// 88 = 0x58
	unsigned _requiresKeyboard : 1;	// 92 = 0x5c
	CGRect _pinstripeRect;	// 96 = 0x60
	UIView *_pinstripeView;	// 112 = 0x70
}
@property(assign, nonatomic) CGRect pinstripeRect;	// G=0x3160fcb9; S=0x3160fb5d; 
@property(retain) id preferenceSpecifier;	// G=0x3160fb31; S=0x3160faed; converted property
@property(retain) id preferenceValue;	// G=0x3160fb45; S=0x3160fb41; converted property
+ (id)defaultBackgroundColor;	// 0x3160f9c1
+ (float)preferredHeight;	// 0x3160f9fd
- (id)initWithFrame:(CGRect)frame;	// 0x3160fa05
- (void)addNewValue;	// 0x3160fd05
- (BOOL)changed;	// 0x3160fd15
- (CGRect)contentRect;	// 0x3160fa55
- (void)dealloc;	// 0x3160fa79
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3160fd21
- (void)doneEditing;	// 0x3160fd0d
- (void)editMode;	// 0x3160fd09
- (BOOL)handlesDoneButton;	// 0x3160fd11
// declared property getter: - (CGRect)pinstripeRect;	// 0x3160fcb9
// converted property getter: - (id)preferenceSpecifier;	// 0x3160fb31
// converted property getter: - (id)preferenceValue;	// 0x3160fb45
- (BOOL)requiresKeyboard;	// 0x3160fb49
- (void)setDelegate:(id)delegate;	// 0x3160fadd
// declared property setter: - (void)setPinstripeRect:(CGRect)rect;	// 0x3160fb5d
// converted property setter: - (void)setPreferenceSpecifier:(id)specifier;	// 0x3160faed
// converted property setter: - (void)setPreferenceValue:(id)value;	// 0x3160fb41
- (id)specifierLabel;	// 0x3160fcdd
- (void)viewDidBecomeVisible;	// 0x3160fd01
- (BOOL)wantsNewButton;	// 0x3160fcfd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3160fd1d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3160fd19
@end
