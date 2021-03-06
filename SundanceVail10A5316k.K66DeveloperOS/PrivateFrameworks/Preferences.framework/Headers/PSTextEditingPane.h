/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSEditingPane.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UITableView, UITextField, PSTextEditingCell;

@interface PSTextEditingPane : PSEditingPane <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_table;	// 116 = 0x74
	PSTextEditingCell *_cell;	// 120 = 0x78
	UITextField *_textField;	// 124 = 0x7c
}
@property(retain) id preferenceValue;	// G=0x372a3c6d; S=0x372a3c4d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x372a38d1
- (BOOL)becomeFirstResponder;	// 0x372a3c29
- (void)dealloc;	// 0x372a3a55
- (void)layoutSubviews;	// 0x372a3acd
// converted property getter: - (id)preferenceValue;	// 0x372a3c6d
- (void)setPreferenceSpecifier:(id)specifier;	// 0x372a3c8d
// converted property setter: - (void)setPreferenceValue:(id)value;	// 0x372a3c4d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x372a3c15
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x372a3c25
@end

