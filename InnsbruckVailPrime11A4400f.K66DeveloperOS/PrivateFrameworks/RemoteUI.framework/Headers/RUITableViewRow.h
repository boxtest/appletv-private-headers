/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RUIElement.h"
#import "RemoteUI-Structs.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class RemoteUITableViewCell, NSData, NSMutableArray, NSDictionary, UIWebView, NSDate, UISwitch, WebContainerView;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate> {
	RemoteUITableViewCell *_tableCell;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	NSMutableArray *_selectOptions;	// 16 = 0x10
	int _selectedRow;	// 20 = 0x14
	NSDate *_date;	// 24 = 0x18
	NSDate *_dateMax;	// 28 = 0x1c
	NSDate *_dateMin;	// 32 = 0x20
	UISwitch *_switchControl;	// 36 = 0x24
	BOOL _rowInvalid;	// 40 = 0x28
	NSDictionary *_deleteAction;	// 44 = 0x2c
	NSData *_data;	// 48 = 0x30
	UIWebView *_webView;	// 52 = 0x34
	WebContainerView *_webContainerView;	// 56 = 0x38
	float _cachedHeight;	// 60 = 0x3c
	BOOL _configured;	// 64 = 0x40
	float _height;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL configured;	// G=0x3268df0d; S=0x3268df1d; @synthesize=_configured
@property(retain, nonatomic) NSData *data;	// G=0x3268de6d; S=0x3268de7d; @synthesize=_data
@property(retain, nonatomic) NSDate *date;	// G=0x3268de9d; S=0x3268dead; @synthesize=_date
@property(retain, nonatomic) NSDate *dateMax;	// G=0x3268dedd; S=0x3268deed; @synthesize=_dateMax
@property(retain, nonatomic) NSDate *dateMin;	// G=0x3268debd; S=0x3268decd; @synthesize=_dateMin
@property(retain, nonatomic) NSDictionary *deleteAction;	// G=0x3268de4d; S=0x3268de5d; @synthesize=_deleteAction
@property(assign, nonatomic) float height;	// G=0x3268d659; S=0x3268defd; @synthesize=_height
@property(assign, nonatomic) BOOL rowInvalid;	// G=0x3268de3d; S=0x3268b0fd; @synthesize=_rowInvalid
@property(readonly, retain) NSMutableArray *selectOptions;	// G=0x3268d39d; converted property
@property(readonly, assign, nonatomic) int selectedRow;	// G=0x3268de8d; @synthesize=_selectedRow
@property(readonly, retain) RemoteUITableViewCell *tableCell;	// G=0x3268b6e1; converted property
+ (id)_formatterForDateYMD;	// 0x3268ac11
+ (id)_formatterForMonthAndDay;	// 0x3268ae0d
+ (id)_formatterForShortDate;	// 0x3268ad35
+ (id)_timeZoneAdjustedDateFromDate:(id)date;	// 0x3268abbd
+ (void)initialize;	// 0x3268ab35
+ (void)resetLocale;	// 0x3268af1d
- (void)_activate;	// 0x3268da8d
- (void)_datePickerChanged:(id)changed;	// 0x3268d531
- (void)accessoryImageLoaded;	// 0x3268b401
- (void)clearCachedHeight;	// 0x3268da79
// declared property getter: - (BOOL)configured;	// 0x3268df0d
// declared property getter: - (id)data;	// 0x3268de6d
// declared property getter: - (id)date;	// 0x3268de9d
// declared property getter: - (id)dateMax;	// 0x3268dedd
// declared property getter: - (id)dateMin;	// 0x3268debd
- (void)dealloc;	// 0x3268d3ed
// declared property getter: - (id)deleteAction;	// 0x3268de4d
// declared property getter: - (float)height;	// 0x3268d659
- (BOOL)loadAccessoryImage;	// 0x3268b569
- (int)numberOfComponentsInPickerView:(id)pickerView;	// 0x3268dbe9
- (void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;	// 0x3268daad
- (int)pickerView:(id)view numberOfRowsInComponent:(int)component;	// 0x3268dbc9
- (id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;	// 0x3268db71
- (void)populatePostbackDictionary:(id)dictionary;	// 0x3268d0a1
- (float)rowHeightWithMax:(float)max peggedHeight:(float)height tableView:(id)view indexPath:(id)path;	// 0x3268d6bd
// declared property getter: - (BOOL)rowInvalid;	// 0x3268de3d
// converted property getter: - (id)selectOptions;	// 0x3268d39d
// declared property getter: - (int)selectedRow;	// 0x3268de8d
- (void)setAttributes:(id)attributes;	// 0x3268af69
// declared property setter: - (void)setConfigured:(BOOL)configured;	// 0x3268df1d
// declared property setter: - (void)setData:(id)data;	// 0x3268de7d
// declared property setter: - (void)setDate:(id)date;	// 0x3268dead
// declared property setter: - (void)setDateMax:(id)max;	// 0x3268deed
// declared property setter: - (void)setDateMin:(id)min;	// 0x3268decd
- (void)setDelegate:(id)delegate;	// 0x3268af59
// declared property setter: - (void)setDeleteAction:(id)action;	// 0x3268de5d
// declared property setter: - (void)setHeight:(float)height;	// 0x3268defd
- (void)setImage:(id)image;	// 0x3268b3b1
// declared property setter: - (void)setRowInvalid:(BOOL)invalid;	// 0x3268b0fd
- (id)sourceURL;	// 0x3268de1d
- (BOOL)supportsAutomaticSelection;	// 0x3268d02d
// converted property getter: - (id)tableCell;	// 0x3268b6e1
- (Class)tableCellClass;	// 0x3268b181
- (int)tableCellStyle;	// 0x3268b289
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x3268dc15
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3268dbed
@end

