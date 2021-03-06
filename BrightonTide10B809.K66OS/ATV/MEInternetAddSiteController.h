/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRController.h"
#import "BRTextFieldDelegate.h"

@class BRTextEntryController, NSString;

__attribute__((visibility("hidden")))
@interface MEInternetAddSiteController : BRController <BRTextFieldDelegate> {
	BRTextEntryController *_textEntryControl;	// 100 = 0x64
	NSString *_URLString;	// 104 = 0x68
	BOOL _showingNamePrompt;	// 108 = 0x6c
}
+ (id)_extraCategoriesPath;	// 0x19dd5d
+ (id)addSiteController;	// 0x19dd21
+ (id)extraInternetSites;	// 0x19ddd9
+ (void)initialize;	// 0x19da75
- (id)init;	// 0x19df19
- (void).cxx_destruct;	// 0x19e3c1
- (void)textDidChange:(id)text;	// 0x19e0c1
- (void)textDidEndEditing:(id)text;	// 0x19e0c5
@end

