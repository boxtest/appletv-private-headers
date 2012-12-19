/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLToneTableController, UITableView, NSString;

@interface TLTonePicker : UIView {
	UITableView *_table;	// 84 = 0x54
	TLToneTableController *_tableController;	// 88 = 0x58
	id _delegate;	// 92 = 0x5c
	Class _customTableViewClass;	// 96 = 0x60
}
@property(assign) BOOL allowsDeletingCurrentSystemVibration;	// G=0x35c01a6d; S=0x35c01a91; converted property
@property(assign, nonatomic) id delegate;	// G=0x35c01df5; S=0x35c015b5; @synthesize=_delegate
@property(retain) id selectedRingtoneIdentifier;	// G=0x35c018a9; S=0x35c0186d; converted property
@property(retain) id selectedVibrationIdentifier;	// G=0x35c01ab1; S=0x35c01ad1; converted property
@property(retain, nonatomic) NSString *vibrationAccountIdentifier;	// G=0x35c0136d; S=0x35c0138d; @dynamic
+ (id)ringtonePickerWithFrame:(CGRect)frame;	// 0x35c00f7d
+ (id)texttonePickerWithFrame:(CGRect)frame;	// 0x35c00fe5
+ (id)tonePickerWithFrame:(CGRect)frame;	// 0x35c01051
- (id)initWithFrame:(CGRect)frame;	// 0x35c00ec1
- (id)initWithFrame:(CGRect)frame avController:(id)controller;	// 0x35c00eed
- (id)initWithFrame:(CGRect)frame avController:(id)controller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x35c00f21
- (void)_buildTable;	// 0x35c01685
- (void)_reloadData;	// 0x35c01189
- (void)addMediaItems:(id)items;	// 0x35c01971
// converted property getter: - (BOOL)allowsDeletingCurrentSystemVibration;	// 0x35c01a6d
- (void)buildUIWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x35c015f9
- (float)contentHeight;	// 0x35c01ca1
- (void)dealloc;	// 0x35c010bd
// declared property getter: - (id)delegate;	// 0x35c01df5
- (void)didMoveToWindow;	// 0x35c01af1
- (void)displayScrollerIndicators;	// 0x35c01b95
- (void)finishedWithPicker;	// 0x35c01bf5
- (void)layoutSubviews;	// 0x35c01b49
- (void)removeMediaItems:(id)items;	// 0x35c01991
- (void)ringtoneManagerContentsChanged:(id)changed;	// 0x35c0180d
- (void)ringtoneTableController:(id)controller selectedMediaItemWithIdentifier:(id)identifier;	// 0x35c01d3d
- (void)ringtoneTableController:(id)controller selectedRingtoneWithIdentifier:(id)identifier;	// 0x35c01ce1
- (void)ringtoneTableController:(id)controller willPlayRingtoneWithIdentifier:(id)identifier;	// 0x35c01d99
- (id)selectedIdentifier:(BOOL *)identifier;	// 0x35c018c9
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x35c018a9
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x35c01ab1
- (void)setAVController:(id)controller;	// 0x35c0122d
// converted property setter: - (void)setAllowsDeletingCurrentSystemVibration:(BOOL)vibration;	// 0x35c01a91
- (void)setContext:(int)context;	// 0x35c01579
- (void)setCustomTableViewCellClass:(Class)aClass;	// 0x35c01c65
- (void)setCustomTableViewClass:(Class)aClass;	// 0x35c01c15
- (void)setDefaultIdentifier:(id)identifier;	// 0x35c01331
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35c015b5
- (void)setMediaAtTop:(BOOL)top;	// 0x35c014b1
- (void)setNoneAtTop:(BOOL)top;	// 0x35c012e5
- (void)setNoneString:(id)string;	// 0x35c013ad
- (void)setSelectedMediaIdentifier:(id)identifier;	// 0x35c018e9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x35c0186d
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x35c01ad1
- (void)setShowsDefault:(BOOL)aDefault;	// 0x35c01289
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x35c019ed
- (void)setShowsMedia:(BOOL)media;	// 0x35c01425
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x35c01a4d
- (void)setShowsNone:(BOOL)none;	// 0x35c012c5
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x35c01a2d
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x35c013e9
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x35c0124d
- (void)setShowsStoreButtonInNavigationBar:(BOOL)navigationBar;	// 0x35c0153d
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x35c01a0d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x35c019b1
// declared property setter: - (void)setVibrationAccountIdentifier:(id)identifier;	// 0x35c0138d
- (void)stopPlaying;	// 0x35c01bb5
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x35c01bd5
// declared property getter: - (id)vibrationAccountIdentifier;	// 0x35c0136d
@end
