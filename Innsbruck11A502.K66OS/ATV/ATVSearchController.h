/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextFieldDelegate.h"
#import "BRMenuController.h"

@class BRControl, BRMediatorProvider, BRTextEntryControl, NSArray, BRImageControl, NSString, ATVSearchAgent;

__attribute__((visibility("hidden")))
@interface ATVSearchController : BRMenuController <BRTextFieldDelegate> {
	BRTextEntryControl *_editor;	// 144 = 0x90
	BRImageControl *_verticalDividerImage;	// 148 = 0x94
	ATVSearchAgent *_agent;	// 152 = 0x98
	BRMediatorProvider *_recentSearchesProvider;	// 156 = 0x9c
	NSString *_activeSearchRequest;	// 160 = 0xa0
	NSString *_textEntryHistoryClient;	// 164 = 0xa4
	NSString *_textEntryHistoryBehavior;	// 168 = 0xa8
	BRControl *_alertControl;	// 172 = 0xac
	NSArray *_resultsProviderPresentationOrder;	// 176 = 0xb0
}
@property(retain, nonatomic) BRControl *alertControl;	// G=0x24a58d; S=0x24a59d; @synthesize=_alertControl
@property(copy, nonatomic) NSArray *resultsProviderPresentationOrder;	// G=0x24a5ad; S=0x24a541; @synthesize=_resultsProviderPresentationOrder
- (id)initWithSearchAgent:(id)searchAgent;	// 0x249321
- (void)_handleContextMenuSelection:(id)selection;	// 0x24aa1d
- (void)_networkStateChanged;	// 0x24a5c1
- (void)_performSearchWithString:(id)string;	// 0x24a88d
- (void)_recentSearchTermSelected:(id)selected;	// 0x24b165
- (void)_searchComplete:(id)complete;	// 0x24abad
- (BOOL)_shouldSetFocusToListForEvent:(id)event;	// 0x24aad9
// declared property getter: - (id)alertControl;	// 0x24a58d
- (BOOL)brEventAction:(id)action;	// 0x249cfd
- (id)controlToDim;	// 0x24a53d
- (void)dealloc;	// 0x249789
- (long)defaultIndex;	// 0x24a295
- (void)displayTextEntryHistoryForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x249c49
- (BOOL)isNetworkDependent;	// 0x249bb1
- (BOOL)isValidAfterDataUpdate;	// 0x249bd5
- (void)layoutSubcontrols;	// 0x249869
- (id)providersForContextMenu;	// 0x24a44d
// declared property getter: - (id)resultsProviderPresentationOrder;	// 0x24a5ad
- (id)searchAgent;	// 0x249bd9
- (void)searchWithString:(id)string;	// 0x249be9
// declared property setter: - (void)setAlertControl:(id)control;	// 0x24a59d
- (void)setHeaderTitle:(id)title;	// 0x24a21d
- (void)setKeyboardTextEntryStyle:(int)style;	// 0x249c29
// declared property setter: - (void)setResultsProviderPresentationOrder:(id)order;	// 0x24a541
- (void)setSearchFieldLabel:(id)label;	// 0x24a1fd
- (void)setTextEntryHistoryClient:(id)client textEntryBehavior:(id)behavior;	// 0x249c69
- (void)textDidChange:(id)text;	// 0x24a2f1
- (void)textDidEndEditing:(id)text;	// 0x24a321
@end

