/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSArray, UIKeyboardInputMode, NSString;
@protocol UIKeyboardInputModeControllerDelegate;

@interface UIKeyboardInputModeController : NSObject {
	UIKeyboardInputMode *_currentInputMode;	// 4 = 0x4
	NSArray *_inputModesWithoutHardwareSupport;	// 8 = 0x8
	NSString *currentLocale;	// 12 = 0xc
	NSString *currentLanguage;	// 16 = 0x10
	NSArray *keyboardInputModes;	// 20 = 0x14
	NSArray *enabledInputModes;	// 24 = 0x18
	NSArray *normalizedInputModes;	// 28 = 0x1c
	NSArray *defaultKeyboardInputModes;	// 32 = 0x20
	NSArray *defaultRawInputModes;	// 36 = 0x24
	NSArray *defaultInputModes;	// 40 = 0x28
	NSArray *defaultNormalizedInputModes;	// 44 = 0x2c
	id<UIKeyboardInputModeControllerDelegate> _delegate;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) BOOL containsDictationSupportedInputMode;	// G=0x2f7fcae9; 
@property(retain) UIKeyboardInputMode *currentInputMode;	// G=0x2f44bffd; S=0x2f7fcbe1; 
@property(retain) NSString *currentLanguage;	// G=0x2f4c1ccd; S=0x2f4a7991; @synthesize
@property(retain) NSString *currentLocale;	// G=0x2f4c1cb9; S=0x2f4a7981; @synthesize
@property(readonly, assign, nonatomic) UIKeyboardInputMode *currentPublicInputMode;	// G=0x2f7fca95; 
@property(retain) NSArray *defaultInputModes;	// G=0x2f4a796d; S=0x2f4a8281; @synthesize
@property(retain) NSArray *defaultKeyboardInputModes;	// G=0x2f4a82c5; S=0x2f4a8261; @synthesize
@property(retain) NSArray *defaultNormalizedInputModes;	// G=0x2f4a8291; S=0x2f4a8271; @synthesize
@property(copy, nonatomic) NSArray *defaultRawInputModes;	// G=0x2f7fd131; S=0x2f7fd145; @synthesize
@property(assign, nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;	// G=0x2f7fd155; S=0x2f7fd165; @synthesize=_delegate
@property(readonly, assign) NSArray *enabledInputModeIdentifiers;	// G=0x2f4a72ed; 
@property(readonly, assign) NSArray *enabledInputModeLanguages;	// G=0x2f7fd205; 
@property(retain) NSArray *enabledInputModes;	// G=0x2f4a82e9; S=0x2f4a82a5; @synthesize
@property(readonly, assign) NSArray *inputModesWithoutHardwareSupport;	// G=0x2f7fd175; 
@property(retain) NSArray *keyboardInputModes;	// G=0x2f7fd109; S=0x2f4a82d9; @synthesize
@property(readonly, assign) NSArray *normalizedEnabledInputModeIdentifiers;	// G=0x2f7fd1f1; 
@property(retain) NSArray *normalizedInputModes;	// G=0x2f7fd11d; S=0x2f4a82b5; @synthesize
@property(readonly, assign) NSArray *supportedInputModeIdentifiers;	// G=0x2f4a79a5; 
+ (id)sharedInputModeController;	// 0x2f44bfd1
- (id)activeInputModes;	// 0x2f7fca65
// declared property getter: - (BOOL)containsDictationSupportedInputMode;	// 0x2f7fcae9
// declared property getter: - (id)currentInputMode;	// 0x2f44bffd
// declared property getter: - (id)currentLanguage;	// 0x2f4c1ccd
// declared property getter: - (id)currentLocale;	// 0x2f4c1cb9
- (BOOL)currentLocaleRequiresExtendedSetup;	// 0x2f7fccbd
// declared property getter: - (id)currentPublicInputMode;	// 0x2f7fca95
- (void)dealloc;	// 0x2f7fc8f9
- (id)defaultEnabledInputModesForCurrentLocale:(BOOL)currentLocale;	// 0x2f4a7729
// declared property getter: - (id)defaultInputModes;	// 0x2f4a796d
// declared property getter: - (id)defaultKeyboardInputModes;	// 0x2f4a82c5
// declared property getter: - (id)defaultNormalizedInputModes;	// 0x2f4a8291
// declared property getter: - (id)defaultRawInputModes;	// 0x2f7fd131
// declared property getter: - (id)delegate;	// 0x2f7fd155
// declared property getter: - (id)enabledInputModeIdentifiers;	// 0x2f4a72ed
- (id)enabledInputModeIdentifiers:(BOOL)identifiers;	// 0x2f4a7301
// declared property getter: - (id)enabledInputModeLanguages;	// 0x2f7fd205
// declared property getter: - (id)enabledInputModes;	// 0x2f4a82e9
- (id)inputModeWithIdentifier:(id)identifier;	// 0x2f44c229
// declared property getter: - (id)inputModesWithoutHardwareSupport;	// 0x2f7fd175
// declared property getter: - (id)keyboardInputModes;	// 0x2f7fd109
// declared property getter: - (id)normalizedEnabledInputModeIdentifiers;	// 0x2f7fd1f1
// declared property getter: - (id)normalizedInputModes;	// 0x2f7fd11d
// declared property setter: - (void)setCurrentInputMode:(id)mode;	// 0x2f7fcbe1
// declared property setter: - (void)setCurrentLanguage:(id)language;	// 0x2f4a7991
// declared property setter: - (void)setCurrentLocale:(id)locale;	// 0x2f4a7981
// declared property setter: - (void)setDefaultInputModes:(id)modes;	// 0x2f4a8281
// declared property setter: - (void)setDefaultKeyboardInputModes:(id)modes;	// 0x2f4a8261
// declared property setter: - (void)setDefaultNormalizedInputModes:(id)modes;	// 0x2f4a8271
// declared property setter: - (void)setDefaultRawInputModes:(id)modes;	// 0x2f7fd145
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f7fd165
// declared property setter: - (void)setEnabledInputModes:(id)modes;	// 0x2f4a82a5
// declared property setter: - (void)setKeyboardInputModes:(id)modes;	// 0x2f4a82d9
// declared property setter: - (void)setNormalizedInputModes:(id)modes;	// 0x2f4a82b5
- (void)startConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x2f7fd0f9
- (void)startDictationConnectionForFileAtURL:(id)url forInputModeIdentifier:(id)inputModeIdentifier;	// 0x2f7fcfd9
- (id)suggestedInputModesForCurrentLocale;	// 0x2f7fcdd9
- (id)suggestedInputModesForCurrentLocale:(BOOL)currentLocale fallbackToDefaultInputModes:(BOOL)defaultInputModes;	// 0x2f7fccf1
// declared property getter: - (id)supportedInputModeIdentifiers;	// 0x2f4a79a5
- (void)updateCurrentInputMode:(id)mode;	// 0x2f44c5c5
@end

