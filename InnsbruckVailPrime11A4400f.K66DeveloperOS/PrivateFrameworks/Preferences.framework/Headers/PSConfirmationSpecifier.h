/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSpecifier.h"

@class NSString;

@interface PSConfirmationSpecifier : PSSpecifier {
	NSString *_title;	// 96 = 0x60
	NSString *_prompt;	// 100 = 0x64
	NSString *_okButton;	// 104 = 0x68
	NSString *_cancelButton;	// 108 = 0x6c
}
@property(retain, nonatomic) NSString *cancelButton;	// G=0x3246bb09; S=0x3246bb19; @synthesize=_cancelButton
@property(retain, nonatomic) NSString *okButton;	// G=0x3246bae9; S=0x3246baf9; @synthesize=_okButton
@property(retain, nonatomic) NSString *prompt;	// G=0x3246bac9; S=0x3246bad9; @synthesize=_prompt
@property(retain, nonatomic) NSString *title;	// G=0x3246baa9; S=0x3246bab9; @synthesize=_title
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x3246b889
// declared property getter: - (id)cancelButton;	// 0x3246bb09
- (void)dealloc;	// 0x3246ba29
- (BOOL)isDestructive;	// 0x3246b9f9
// declared property getter: - (id)okButton;	// 0x3246bae9
// declared property getter: - (id)prompt;	// 0x3246bac9
// declared property setter: - (void)setCancelButton:(id)button;	// 0x3246bb19
// declared property setter: - (void)setOkButton:(id)button;	// 0x3246baf9
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x3246bad9
// declared property setter: - (void)setTitle:(id)title;	// 0x3246bab9
- (void)setupWithDictionary:(id)dictionary;	// 0x3246b949
// declared property getter: - (id)title;	// 0x3246baa9
@end

