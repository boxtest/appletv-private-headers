/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "ABPersonTableActionDelegate.h"
#import <NSObject.h> // Unknown library
#import "ABPersonTableTinyActionDelegate.h"

@class ABPersonTableTinyActionCell, ABPersonTableViewDataSource, ABStyleProvider, ABPersonTableActionDataSource;
@protocol ABFMFActionButtonsDelegate;

@interface ABPersonTableViewActionsDelegate : NSObject <UIActionSheetDelegate, ABPersonTableActionDelegate, ABPersonTableTinyActionDelegate> {
	int _highlightedValueIdentifier;	// 4 = 0x4
	void *_highlightedValuePerson;	// 8 = 0x8
	BOOL _highlightedValueIsImportant;	// 12 = 0xc
	int _actionSheetType;	// 16 = 0x10
	ABPersonTableTinyActionCell *_tinyActionCell;	// 20 = 0x14
	id<ABFMFActionButtonsDelegate> _FMFActionButtonsDelegate;	// 24 = 0x18
	ABStyleProvider *_styleProvider;	// 28 = 0x1c
	ABPersonTableViewDataSource *_dataSource;	// 32 = 0x20
	ABPersonTableActionDataSource *_actionDataSource;	// 36 = 0x24
	BOOL _actionShouldPickHighlightedValue;	// 40 = 0x28
	int _highlightedValueProperty;	// 44 = 0x2c
}
@property(assign, nonatomic) id<ABFMFActionButtonsDelegate> FMFActionButtonsDelegate;	// G=0x3095d2bd; S=0x3095b585; @synthesize=_FMFActionButtonsDelegate
@property(readonly, assign, nonatomic) ABPersonTableActionDataSource *actionDataSource;	// G=0x308e833d; @synthesize=_actionDataSource
@property(assign, nonatomic) BOOL actionShouldPickHighlightedValue;	// G=0x3095d29d; S=0x3095d2ad; @synthesize=_actionShouldPickHighlightedValue
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x308ea619; S=0x308e56c1; @synthesize=_dataSource
@property(assign, nonatomic) int highlightedValueIdentifier;	// G=0x3095d2fd; S=0x3095d30d; @synthesize=_highlightedValueIdentifier
@property(assign, nonatomic) void *highlightedValuePerson;	// G=0x3095d2ed; S=0x3095b595; @synthesize=_highlightedValuePerson
@property(assign, nonatomic) int highlightedValueProperty;	// G=0x3095d2cd; S=0x3095d2dd; @synthesize=_highlightedValueProperty
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x308ec4e9; S=0x308e56e1; @synthesize=_styleProvider
@property(readonly, assign, nonatomic) ABPersonTableTinyActionCell *tinyActionCell;	// G=0x308fd921; 
- (id)init;	// 0x308e565d
// declared property getter: - (id)FMFActionButtonsDelegate;	// 0x3095d2bd
- (unsigned)_sectionForAction:(id)action;	// 0x3090e4d5
- (void)action:(id)action willShowButton:(id)button forValueAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x3095d211
- (int)actionCountForBottomGroupingExcludingProperty:(int)bottomGroupingExcludingProperty excludedPropertyGroupContext:(void *)context;	// 0x308e83c5
- (int)actionCountForGrouping:(int)grouping inSection:(int)section excludingProperty:(int)property excludedPropertyGroupContext:(void *)context outExcludedIndexPaths:(id *)paths;	// 0x308e803d
- (int)actionCountForTopGroupingInSection:(int)section excludingProperty:(int)property excludedPropertyGroupContext:(void *)context outExcludedIndexPaths:(id *)paths;	// 0x308e8011
// declared property getter: - (id)actionDataSource;	// 0x308e833d
- (int)actionGroupingCountForPropertyGroup:(id)propertyGroup whenEditing:(BOOL)editing;	// 0x3095c0c5
- (int)actionGroupingCountForPropertyGroup:(id)propertyGroup whenEditing:(BOOL)editing assumeThatPropertyHasSection:(BOOL)section;	// 0x3095c029
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3095cd79
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x3095d191
// declared property getter: - (BOOL)actionShouldPickHighlightedValue;	// 0x3095d29d
- (id)actionsForProperty:(int)property withActionGrouping:(int)actionGrouping;	// 0x308fcf01
- (id)actionsForProperty:(int)property withActionGroupingAtIndex:(int)index;	// 0x3090e681
- (id)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x3095bf59
- (id)addActionWithTitle:(id)title shortTitle:(id)title2 detailText:(id)text style:(int)style target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x3090e195
- (id)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x3090e155
- (void)addToFavoritesButtonClicked:(id)favoritesButtonClicked;	// 0x3095c495
- (void)callContact:(id)contact person:(void *)person property:(int)property identifier:(int)identifier;	// 0x3095c205
- (void)conference:(id)conference person:(void *)person property:(int)property identifier:(int)identifier;	// 0x3095c42d
// declared property getter: - (id)dataSource;	// 0x308ea619
- (void)dealloc;	// 0x3090aa11
- (int)groupingCountForProperty:(int)property;	// 0x308fcafd
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x3095bf0d
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering outActions:(id *)actions outIndex:(int *)index;	// 0x3095bebd
// declared property getter: - (int)highlightedValueIdentifier;	// 0x3095d2fd
// declared property getter: - (void *)highlightedValuePerson;	// 0x3095d2ed
// declared property getter: - (int)highlightedValueProperty;	// 0x3095d2cd
- (BOOL)isFavoriteOfType:(int)type inPropertyGroup:(id)propertyGroup atIndex:(int)index;	// 0x308f3c91
- (id)newActionsForProperty:(int)property;	// 0x308e8311
- (void)performPersonTableAction:(id)action atIndexPath:(id)indexPath;	// 0x3095bdb9
- (BOOL)personTableTinyActionCell:(id)cell shouldShowAction:(id)action;	// 0x308fe119
- (void)presentDifferentiationSheetForAction:(id)action;	// 0x3095d1fd
- (void)presentDifferentiationSheetIfNeededForAction:(id)action withPropertyGroup:(id)propertyGroup;	// 0x3095b5c1
- (void)reloadBottomActionCellAnimated:(BOOL)animated;	// 0x3090d96d
- (void)reloadBottomActionDataForFavorites:(BOOL)favorites texting:(BOOL)texting sharing:(BOOL)sharing conferencing:(BOOL)conferencing;	// 0x308ea839
- (void)reloadBottomActions;	// 0x308ea371
- (void)reloadBottomActionsAnimated:(BOOL)animated;	// 0x308ea385
- (void)reloadBottomActionsAnimated:(BOOL)animated favorites:(BOOL)favorites texting:(BOOL)texting sharing:(BOOL)sharing conferencing:(BOOL)conferencing;	// 0x308ea3a9
- (void)reloadPrimaryPropertyActionsSection;	// 0x3095cbf9
- (void)removeActionWithSelector:(SEL)selector target:(id)target property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x308e9219
- (void)removeActionWithSelector:(SEL)selector target:(id)target property:(int)property actionGrouping:(int)grouping ordering:(int)ordering animated:(BOOL)animated;	// 0x308e9251
- (void)sendTextMessage:(id)message person:(void *)person property:(int)property identifier:(int)identifier;	// 0x3095c2ed
// declared property setter: - (void)setActionShouldPickHighlightedValue:(BOOL)pickHighlightedValue;	// 0x3095d2ad
// declared property setter: - (void)setDataSource:(id)source;	// 0x308e56c1
// declared property setter: - (void)setFMFActionButtonsDelegate:(id)delegate;	// 0x3095b585
// declared property setter: - (void)setHighlightedValueIdentifier:(int)identifier;	// 0x3095d30d
// declared property setter: - (void)setHighlightedValuePerson:(void *)person;	// 0x3095b595
// declared property setter: - (void)setHighlightedValueProperty:(int)property;	// 0x3095d2dd
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x308e56e1
- (void)shareContactButtonClicked:(id)clicked;	// 0x3095c3d5
- (BOOL)shouldShowAction:(id)action excludingProperty:(int)property excludedPropertyGroupContext:(void *)context;	// 0x308ec501
- (BOOL)shouldShowActionForProperty:(int)property propertyGroupContext:(void *)context;	// 0x308eb829
- (BOOL)shouldShowActionForProperty:(int)property propertyGroupContext:(void *)context assumeThatPropertyHasSection:(BOOL)section;	// 0x308eb84d
- (BOOL)shouldShowAddToFavoritesAction;	// 0x308f36ad
// declared property getter: - (id)styleProvider;	// 0x308ec4e9
- (void)tellDelegateAddToFavoriteWasSelectedForPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup entryType:(int)type;	// 0x3095ca41
// declared property getter: - (id)tinyActionCell;	// 0x308fd921
@end

