/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRTextFieldDelegate.h"

@class BRTextEntryController, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAirtunesController : BRViewController <BRTextFieldDelegate> {
	NSDictionary *_selectedSpeakerInfo;	// 104 = 0x68
	BOOL _selectedSpeakerIsConnecting;	// 108 = 0x6c
	BRTextEntryController *_localPasswordEntryController;	// 112 = 0x70
	NSArray *_sortedSpeakers;	// 116 = 0x74
	BOOL _speakersEnabled;	// 120 = 0x78
}
- (id)init;	// 0xb1155
- (void).cxx_destruct;	// 0xb1c91
- (void)_handleSettingsItemSelectedForRow:(long)row;	// 0xb1fa5
- (void)_handleSpeakerItemSelectedForRow:(long)row;	// 0xb28b9
- (id)_newLocalPasswordEntryControllerWithIdentifier:(id)identifier;	// 0xb233d
- (void)_reloadAirTunesSpeakers:(id)speakers;	// 0xb2a01
- (id)_settingsItemForRow:(long)row;	// 0xb1cd9
- (void)_sortListOfAirTunesSpeakers;	// 0xb2a71
- (id)_speakerItemForRow:(long)row;	// 0xb2471
- (void)_speakerSelectionWasCanceled:(id)canceled;	// 0xb2bbd
- (void)_speakerWasSelected:(id)selected;	// 0xb2b55
- (void)_speakerWillBeSelected:(id)_speaker;	// 0xb2aed
- (void)dealloc;	// 0xb14e9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xb15e9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb19d1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb1555
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb1925
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xb1969
- (long)numberOfSectionsInList:(id)list;	// 0xb190d
- (void)textDidChange:(id)text;	// 0xb1a4d
- (void)textDidEndEditing:(id)text;	// 0xb1a51
@end
