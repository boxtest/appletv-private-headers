/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedMenuItemElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSignInSignOutMenuItemElement : ATVFeedMenuItemElement {
	BOOL _signOutExitsApp;	// 4 = 0x4
	NSString *_confirmationTitle;	// 8 = 0x8
	NSString *_confirmationDescription;	// 12 = 0xc
	NSString *_signInPageURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *confirmationDescription;	// G=0x15d9b5; S=0x15d9c9; @synthesize=_confirmationDescription
@property(copy, nonatomic) NSString *confirmationTitle;	// G=0x15d991; S=0x15d9a5; @synthesize=_confirmationTitle
@property(copy, nonatomic) NSString *signInPageURL;	// G=0x15d9d9; S=0x15d9ed; @synthesize=_signInPageURL
@property(assign, nonatomic) BOOL signOutExitsApp;	// G=0x15d971; S=0x15d981; @synthesize=_signOutExitsApp
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15d791
// declared property getter: - (id)confirmationDescription;	// 0x15d9b5
// declared property getter: - (id)confirmationTitle;	// 0x15d991
- (void)dealloc;	// 0x15d8f9
// declared property setter: - (void)setConfirmationDescription:(id)description;	// 0x15d9c9
// declared property setter: - (void)setConfirmationTitle:(id)title;	// 0x15d9a5
// declared property setter: - (void)setSignInPageURL:(id)pageURL;	// 0x15d9ed
// declared property setter: - (void)setSignOutExitsApp:(BOOL)app;	// 0x15d981
// declared property getter: - (id)signInPageURL;	// 0x15d9d9
// declared property getter: - (BOOL)signOutExitsApp;	// 0x15d971
@end
