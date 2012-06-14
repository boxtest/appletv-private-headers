/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"

@class ATVFlickrSearchAgent, ATVFlickrProvider, NSString;

@interface ATVFlickrMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
@private
	BOOL _isScreenSaverMenu;	// 156 = 0x9c
	ATVFlickrSearchAgent *_searchAgent;	// 160 = 0xa0
	BOOL _searching;	// 164 = 0xa4
	NSString *_activeSearchTerm;	// 168 = 0xa8
	ATVFlickrProvider *_persistentAccountProvider;	// 172 = 0xac
}
+ (void)initialize;	// 0x340b99c1
+ (id)menuController;	// 0x340b9935
+ (id)screenSaverMenuController;	// 0x340b9979
- (id)init;	// 0x340b9a65
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x340b9a79
- (void)_accountLoaded:(id)loaded;	// 0x340bab79
- (void)_handleAccountSelection:(id)selection;	// 0x340ba849
- (void)_handleAddSelection:(id)selection;	// 0x340ba51d
- (void)_handleSavedSearchCollectionSelection:(id)selection;	// 0x340ba961
- (void)_handleSearchSelection:(id)selection;	// 0x340ba6a1
- (void)_searchComplete:(id)complete;	// 0x340bae19
- (id)accessibilityLabel;	// 0x340ba50d
- (void)dealloc;	// 0x340ba04d
- (long)defaultIndex;	// 0x340ba125
- (BOOL)isNetworkDependent;	// 0x340ba509
- (float)listVerticalOffset;	// 0x340ba0f1
- (void)textDidChange:(id)text;	// 0x340ba15d
- (void)textDidEndEditing:(id)text;	// 0x340ba161
@end
