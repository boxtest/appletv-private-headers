/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library
#import "ABPropertyEditingTableViewCellDelegate.h"

@class NSString;
@protocol ABSimpleTextInputViewControllerDelegate, ABStyleProvider;

@interface ABSimpleTextInputViewController : UITableViewController <ABPropertyEditingTableViewCellDelegate> {
	id<ABSimpleTextInputViewControllerDelegate> _delegate;	// 212 = 0xd4
	id _value;	// 216 = 0xd8
	NSString *_placeholder;	// 220 = 0xdc
	id<ABStyleProvider> _styleProvider;	// 224 = 0xe0
}
@property(assign, nonatomic) id<ABSimpleTextInputViewControllerDelegate> delegate;	// G=0x376774d9; S=0x376774e9; @synthesize=_delegate
@property(copy, nonatomic) NSString *placeholder;	// G=0x3767751d; S=0x37677531; @synthesize=_placeholder
@property(copy, nonatomic) NSString *stringValue;	// G=0x376774f9; S=0x3767750d; @synthesize=_value
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x37677541; S=0x37677551; @synthesize=_styleProvider
- (id)init;	// 0x37676e59
- (BOOL)_allowsAutorotation;	// 0x37677055
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x37677099
- (float)ab_heightToFitForViewInPopoverView;	// 0x376770c5
- (void)cancel:(id)cancel;	// 0x3767732d
- (void)dealloc;	// 0x37676f8d
// declared property getter: - (id)delegate;	// 0x376774d9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x376773c1
// declared property getter: - (id)placeholder;	// 0x3767751d
- (void)propertyEditingTableViewCell:(id)cell valueDidChange:(id)value;	// 0x37677391
- (void)save:(id)save;	// 0x37677351
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x376774e9
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x37677531
// declared property setter: - (void)setStringValue:(id)value;	// 0x3767750d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x37677551
- (void)setTitleLocalizationKey:(id)key;	// 0x37677005
// declared property getter: - (id)stringValue;	// 0x376774f9
// declared property getter: - (id)styleProvider;	// 0x37677541
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x376773c9
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x376774ad
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x376773c5
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x376774a9
- (void)updateSaveButton;	// 0x376772c1
- (void)viewDidLoad;	// 0x37677159
- (void)viewWillAppear:(BOOL)view;	// 0x37677239
- (void)viewWillDisappear:(BOOL)view;	// 0x37677255
@end
