/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "ToneLibrary-Structs.h"
#import "UITableViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSIndexPath, UITableView, TLVibrationPickerViewController, NSString, TLToneManager;

@interface TLToneTableController : NSObject <TLVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSMutableArray *_ringtoneGroupLists;	// 8 = 0x8
	NSMutableArray *_ringtoneGroupNames;	// 12 = 0xc
	NSIndexPath *_selectedRingtoneIndexPath;	// 16 = 0x10
	BOOL _showsNone;	// 20 = 0x14
	BOOL _showsDefault;	// 21 = 0x15
	NSString *_noneString;	// 24 = 0x18
	NSString *_noneIdentifier;	// 28 = 0x1c
	NSString *_defaultIdentifier;	// 32 = 0x20
	BOOL _showsNothingSelected;	// 36 = 0x24
	BOOL _showsRingtonesStore;	// 37 = 0x25
	BOOL _noneAtTop;	// 38 = 0x26
	UITableView *_tableView;	// 40 = 0x28
	BOOL _showsVibrations;	// 44 = 0x2c
	BOOL _showsVibrationsAlongsideTones;	// 45 = 0x2d
	BOOL _showsDefaultVibration;	// 46 = 0x2e
	BOOL _showsUserGeneratedVibrations;	// 47 = 0x2f
	BOOL _showsNoneVibration;	// 48 = 0x30
	BOOL _showsNoVibrationSelected;	// 49 = 0x31
	NSString *_selectedVibrationIdentifier;	// 52 = 0x34
	TLVibrationPickerViewController *_vibrationPickerViewController;	// 56 = 0x38
	TLToneManager *_ringtoneManager;	// 60 = 0x3c
	id _avController;	// 64 = 0x40
	BOOL _startedInteruption;	// 68 = 0x44
	BOOL _customAVController;	// 69 = 0x45
	BOOL _tonePicker;	// 70 = 0x46
	unsigned _filter;	// 72 = 0x48
	unsigned _systemRingtoneStartIndex;	// 76 = 0x4c
}
@property(readonly, retain) id avController;	// G=0x363307d9; converted property
@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier;	// G=0x36330fb5; S=0x36330fc5; @synthesize=_defaultIdentifier
@property(readonly, retain) TLToneManager *ringtoneManager;	// G=0x3632e6f1; converted property
@property(retain) id selectedRingtoneIdentifier;	// G=0x3632e6d1; S=0x3632e539; converted property
@property(retain) NSString *selectedVibrationIdentifier;	// G=0x3632eced; S=0x3632edb1; converted property
- (id)init;	// 0x3632cc45
- (id)initWithAVController:(id)avcontroller;	// 0x3632cc59
- (id)initWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x3632cc79
- (void)_setRingtoneManager:(id)manager;	// 0x36330f75
- (void)_setSelectedVibrationIdentifierTableViewUpdateDidComplete:(id)_setSelectedVibrationIdentifierTableViewUpdate;	// 0x3632ecfd
- (BOOL)_showsDefaultVibration;	// 0x3632f235
- (BOOL)_showsNoneVibration;	// 0x3632f255
- (BOOL)_showsUserGeneratedVibrations;	// 0x3632f245
- (BOOL)_showsVibrations;	// 0x3632f181
- (BOOL)_showsVibrationsSwitchIsOn;	// 0x3632f1d1
- (void)_stopPlayingButKeepVibrating:(BOOL)vibrating;	// 0x36330d91
- (void)_stopPlayingWithFadeOut:(BOOL)fadeOut shouldKeepVibrating:(BOOL)vibrating;	// 0x36330c51
- (void)_switchValueDidChange:(id)_switchValue;	// 0x36330eb9
- (id)_vibrationPickerViewController;	// 0x3632f281
- (void)addRingtonesInDirectory:(id)directory toArray:(id)array fileExtension:(id)extension;	// 0x3632cfe1
// converted property getter: - (id)avController;	// 0x363307d9
- (int)compareRingtoneWithIdentifier:(id)identifier toRingtoneWithIdentifier:(id)identifier2;	// 0x3632d111
- (id)copyCurrentPhoneRingtoneIdentifier;	// 0x3632f4d5
- (id)copyCurrentPhoneRingtoneName;	// 0x3632f4b5
- (id)copyCurrentPhoneTextToneIdentifier;	// 0x3632f515
- (id)copyCurrentPhoneTextToneName;	// 0x3632f4f5
- (void)dealloc;	// 0x3632ce69
// declared property getter: - (id)defaultIdentifier;	// 0x36330fb5
- (void)finishedWithPicker;	// 0x36330db9
- (id)identifierOfRingtoneAtIndexPath:(id)indexPath;	// 0x3632d4bd
- (id)indexPathForDefaultGroup;	// 0x3632d751
- (id)indexPathForFirstRingtoneGroup;	// 0x3632d7d1
- (id)indexPathForNoneGroup;	// 0x3632d87d
- (id)indexPathForRingtoneWithIdentifier:(id)identifier;	// 0x3632d619
- (id)indexPathForRingtonesStoreGroup;	// 0x3632d715
- (id)indexPathForSelectedRingtone;	// 0x3632d9d1
- (id)indexPathForVibrationGroup;	// 0x3632d91d
- (BOOL)isDefaultGroupAtIndexPath:(id)indexPath;	// 0x3632d1e5
- (BOOL)isDividerAtIndexPath:(id)indexPath;	// 0x3632d48d
- (BOOL)isNoneGroupAtIndexPath:(id)indexPath;	// 0x3632d279
- (BOOL)isOtherVibrationGroupWithSection:(int)section;	// 0x3632d411
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)indexPath;	// 0x3632d195
- (BOOL)isVibrationGroupAtIndexPath:(id)indexPath;	// 0x3632d33d
- (id)loadTextTonesFromPlist;	// 0x3632d9e1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3632fc95
- (void)playRingtoneWithIdentifier:(id)identifier;	// 0x363309c5
- (void)processNewRingtoneSelected:(id)selected;	// 0x3632f43d
- (void)reloadRingtones;	// 0x3632dbb5
// converted property getter: - (id)ringtoneManager;	// 0x3632e6f1
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x3632e6d1
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x3632eced
- (void)setAVController:(id)controller;	// 0x363306c5
// declared property setter: - (void)setDefaultIdentifier:(id)identifier;	// 0x36330fc5
- (void)setDelegate:(id)delegate;	// 0x3632e4e5
- (void)setNoneAtTop:(BOOL)top;	// 0x3632e9fd
- (void)setNoneString:(id)string;	// 0x3632eaa9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x3632e539
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x3632edb1
- (void)setShowsDefault:(BOOL)aDefault;	// 0x3632e7c5
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x3632eb1d
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x3632ec89
- (void)setShowsNone:(BOOL)none;	// 0x3632e955
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x3632ec79
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x3632eaed
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x3632e701
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x3632eb2d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x3632eafd
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x3632eb0d
- (void)setTableView:(id)view;	// 0x3632e4f5
- (void)stopPlaying;	// 0x36330da5
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x36330d7d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3632f535
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3632ffb1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x3632ff55
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3632fd81
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x36330465
- (void)togglePlayWithRingtoneWithIdentifier:(id)identifier;	// 0x36330961
- (void)vibrationPickerViewController:(id)controller selectedVibrationWithIdentifier:(id)identifier;	// 0x36330e41
@end
