/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSetupController.h"

@class NSString;

@interface PSInternationalLanguageSetupController : PSSetupController {
	NSString *_languageToSet;	// 308 = 0x134
}
- (void)commit;	// 0x34dbe3a1
- (void)dealloc;	// 0x34dbdc3d
- (void)didFinishCommit;	// 0x34dbe495
- (id)language:(id)language;	// 0x34dbe501
- (void)rotateView:(id)view toOrientation:(int)orientation;	// 0x34dbe24d
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x34dbe4c5
- (void)setupController;	// 0x34dbe535
- (void)showBlackViewWithLabel:(id)label;	// 0x34dbdcd9
@end

