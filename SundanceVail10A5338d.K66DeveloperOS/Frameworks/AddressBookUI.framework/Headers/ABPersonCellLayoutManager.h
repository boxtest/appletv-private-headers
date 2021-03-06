/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCellLayoutManager.h> // Unknown library
#import "AddressBookUI-Structs.h"

@protocol ABPersonCellLayoutManagerDelegate, ABStyleProvider;

@interface ABPersonCellLayoutManager : UITableViewCellLayoutManager {
	id<ABPersonCellLayoutManagerDelegate> _delegate;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
}
@property(assign, nonatomic) id<ABPersonCellLayoutManagerDelegate> delegate;	// G=0x370c3e11; S=0x3706f195; @synthesize=_delegate
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3706f2d9; S=0x3706f1a5; @synthesize=_styleProvider
- (float)accessoryViewInsetForBounds:(CGRect)bounds;	// 0x3706f311
- (CGRect)backgroundEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x370752b5
- (CGRect)backgroundStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3707dc9d
- (void)cell:(id)cell didTransitionToState:(unsigned)state;	// 0x3707de2d
- (void)cell:(id)cell willTransitionToState:(unsigned)state;	// 0x3707dbe5
- (id)cellAsMultiCell:(id)cell;	// 0x3708d361
- (CGRect)contentEndingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3707537d
- (CGRect)contentStartingRectForCell:(id)cell forNewEditingState:(BOOL)newEditingState;	// 0x3707dd65
- (void)dealloc;	// 0x37082c21
// declared property getter: - (id)delegate;	// 0x370c3e11
- (CGRect)deleteConfirmationRectForCell:(id)cell;	// 0x3708d4c5
- (float)deleteConfirmationWidth;	// 0x370c3de1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3706f195
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3706f1a5
// declared property getter: - (id)styleProvider;	// 0x3706f2d9
- (float)widthForCellContentViewInTableView:(id)tableView whenEditing:(BOOL)editing isShowingDeleteConfirmation:(BOOL)confirmation accessoryViewBounds:(CGRect)bounds;	// 0x3706f1b5
@end

