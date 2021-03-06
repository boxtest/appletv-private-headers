/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AFContextProvider.h"
#import <UIViewController.h> // Unknown library
#import "AddressBookUI-Structs.h"
#import "UIViewControllerRestoration.h"

@class ABPersonTableViewActionsDelegate, ABPersonViewControllerHelper, ABPersonTableViewSharingDelegate, NSTimer, NSString, AFContextManager, ABPersonTableViewDataSource, NSArray, UIFont, UIImage, UIView;
@protocol ABPersonViewControllerDelegate, ABStyleProvider, ABPersonEditDelegate;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration> {
	id<ABPersonViewControllerDelegate> _personViewDelegate;	// 196 = 0xc4
	id _helper;	// 200 = 0xc8
	id _internal;	// 204 = 0xcc
	BOOL _internal2;	// 208 = 0xd0
	NSTimer *_editAnimationTimer;	// 212 = 0xd4
	ABPersonTableViewDataSource *_dataSource;	// 216 = 0xd8
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 220 = 0xdc
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 224 = 0xe0
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x3092c819; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x308e4edd; S=0x308e4b59; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x308edb85; S=0x308ea2fd; 
@property(assign, nonatomic) BOOL allowsAddToFavorites;	// G=0x3092bee9; S=0x3092bebd; 
@property(assign, nonatomic) BOOL allowsCancel;	// G=0x3092bf11; S=0x308e4e4d; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x3092bf89; S=0x308ec9d5; 
@property(assign, nonatomic) BOOL allowsDeletion;	// G=0x308edb5d; S=0x308eca65; 
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x3092be41; S=0x308ea271; 
@property(assign, nonatomic) BOOL allowsSettingAsPreferredCardForName;	// G=0x3092bfb1; S=0x30912741; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x3092be69; S=0x3092be91; 
@property(assign, nonatomic) BOOL allowsSounds;	// G=0x3092bf35; S=0x308ed755; 
@property(assign, nonatomic) BOOL allowsVibrations;	// G=0x3092bf61; S=0x308ed791; 
@property(assign, nonatomic) BOOL appearsInLinkingPeoplePicker;	// G=0x3092bd31; S=0x308ed959; 
@property(copy, nonatomic) NSString *attribution;	// G=0x3092c311; S=0x3092c339; 
@property(assign, nonatomic) BOOL badgeEmailPropertiesForMailVIP;	// G=0x3092c6b5; S=0x3092c6dd; 
@property(readonly, assign, nonatomic) AFContextManager *contextManager;	// G=0x308fc781; 
@property(retain, nonatomic) UIView *customFooterView;	// G=0x3092c2e9; S=0x3092c2bd; 
@property(retain, nonatomic) UIView *customHeaderView;	// G=0x3092c295; S=0x3092c269; 
@property(retain, nonatomic) UIView *customMessageView;	// G=0x3092c125; S=0x3092c14d; 
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x308e55c1; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x308edb3d; S=0x308e9775; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x30912881; S=0x308ea131; 
@property(assign, nonatomic) id<ABPersonEditDelegate> editDelegate;	// G=0x3092be1d; S=0x308ed84d; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x308e5431; 
@property(copy, nonatomic) NSString *message;	// G=0x3092c001; S=0x3092bfd5; 
@property(copy, nonatomic) NSString *messageDetail;	// G=0x3092c0a9; S=0x3092c07d; 
@property(retain, nonatomic) UIFont *messageDetailFont;	// G=0x3092c0d1; S=0x3092c0f9; 
@property(retain, nonatomic) UIFont *messageFont;	// G=0x3092c055; S=0x3092c029; 
@property(assign, nonatomic) BOOL observesExternalChanges;	// G=0x308e4e15; S=0x308e4e81; 
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x3092c1ed; S=0x3092c1c1; 
@property(assign, nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;	// G=0x308f9969; S=0x308ed839; 
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;	// G=0x3092c58d; S=0x3092c5b5; 
@property(copy, nonatomic) NSString *shareLocationURL;	// G=0x3092c539; S=0x3092c561; 
@property(copy, nonatomic) NSString *shareMessageBody;	// G=0x3092c491; S=0x3092c4b9; 
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;	// G=0x3092c43d; S=0x3092c465; 
@property(copy, nonatomic) NSString *shareMessageSubject;	// G=0x3092c4e5; S=0x3092c50d; 
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x3092c829; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x3092c241; S=0x3092c215; 
@property(assign, nonatomic) BOOL shouldShowLinkedPeople;	// G=0x3092bcf9; S=0x308e5941; 
@property(assign) BOOL shouldShowLinkingUIOnCard;	// G=0x3092bd6d; S=0x3092bda5; converted property
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x30912921; S=0x308eda89; 
@property(readonly, assign, nonatomic) UIView *tableHeaderView;	// G=0x3092c199; 
@property(copy, nonatomic) id willTweetLocationCallback;	// G=0x3092c5e1; S=0x3092c609; 
@property(copy, nonatomic) id willWeiboLocationCallback;	// G=0x3092c635; S=0x3092c65d; 
+ (id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;	// 0x3092b3bd
- (id)init;	// 0x3092b0b1
- (id)initWithAddressBook:(void *)addressBook;	// 0x308e4599
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x3092b16d
- (id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void *)book;	// 0x308e45b9
- (id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void *)book style:(int)style;	// 0x308e45dd
- (id)initWithStyle:(int)style;	// 0x3092b191
- (BOOL)_allowsAutorotation;	// 0x3092b83d
- (void)_editAnimationTimerFired:(id)fired;	// 0x3092ba35
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3092b881
- (void)_handleLocalChange:(CFDictionaryRef)change;	// 0x3092b7ad
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x309128d1
- (void)_removeContextProviderOnMainThread;	// 0x3090a0c5
- (BOOL)_updateAllDataForExternalChange;	// 0x3092c3f5
- (BOOL)_updatePeopleDataForExternalChange;	// 0x3092c3b1
- (void)_updateTableDataForExternalChange;	// 0x3092c3d5
- (int)abViewControllerType;	// 0x3092ba31
- (float)ab_heightToFitForViewInPopoverView;	// 0x308fb305
// declared property getter: - (id)actionsDelegate;	// 0x3092c819
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x30943d35
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x30943c49
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x30943c79
// declared property getter: - (void *)addressBook;	// 0x308e4edd
- (void)addressBookChangedLocally:(CFDictionaryRef)locally;	// 0x3092c391
- (BOOL)allowContextProvider:(id)provider;	// 0x3092bb59
// declared property getter: - (BOOL)allowsActions;	// 0x308edb85
// declared property getter: - (BOOL)allowsAddToFavorites;	// 0x3092bee9
// declared property getter: - (BOOL)allowsCancel;	// 0x3092bf11
// declared property getter: - (BOOL)allowsConferencing;	// 0x3092bf89
// declared property getter: - (BOOL)allowsDeletion;	// 0x308edb5d
// declared property getter: - (BOOL)allowsEditing;	// 0x3092be41
// declared property getter: - (BOOL)allowsSettingAsPreferredCardForName;	// 0x3092bfb1
// declared property getter: - (BOOL)allowsSharing;	// 0x3092be69
// declared property getter: - (BOOL)allowsSounds;	// 0x3092bf35
// declared property getter: - (BOOL)allowsVibrations;	// 0x3092bf61
// declared property getter: - (BOOL)appearsInLinkingPeoplePicker;	// 0x3092bd31
- (void)applicationDidResume;	// 0x3092b9ed
- (void)applicationWillSuspend;	// 0x30913ef5
- (void)applicationWillTerminate:(id)application;	// 0x3092b159
// declared property getter: - (id)attribution;	// 0x3092c311
// declared property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x3092c6b5
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x3092b9bd
- (void)cancelEditing:(BOOL)editing;	// 0x3092b931
// declared property getter: - (id)contextManager;	// 0x308fc781
// declared property getter: - (id)customFooterView;	// 0x3092c2e9
// declared property getter: - (id)customHeaderView;	// 0x3092c295
// declared property getter: - (id)customMessageView;	// 0x3092c125
// declared property getter: - (id)dataSource;	// 0x308e55c1
- (void)dealloc;	// 0x30909f35
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3092b379
- (void)dismissModalViewControllerAnimated:(BOOL)animated;	// 0x3092b1b9
// declared property getter: - (void *)displayedPerson;	// 0x308edb3d
// declared property getter: - (id)displayedProperties;	// 0x30912881
- (void)editCancel:(id)cancel;	// 0x3092b91d
// declared property getter: - (id)editDelegate;	// 0x3092be1d
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x3092b231
- (void)forceUseLinkedInfos:(id)infos currentIndexInLinkedInfos:(int)linkedInfos;	// 0x3091279d
- (id)getCurrentContext;	// 0x3092bb5d
- (BOOL)handleExternalChange;	// 0x3092b701
// declared property getter: - (id)helper;	// 0x308e5431
- (void)helper:(id)helper didToggleEditingWhileInViewMode:(BOOL)viewMode;	// 0x3092bb31
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)helper;	// 0x308e9729
- (BOOL)isDelayingChangeNotifications;	// 0x308e4e25
- (BOOL)isReadonly;	// 0x3092b695
- (void)loadView;	// 0x308edaad
- (BOOL)makeFirstFieldBecomeFirstResponder;	// 0x3092c419
- (BOOL)manuallyLinkPerson:(void *)person;	// 0x3092bde1
// declared property getter: - (id)message;	// 0x3092c001
// declared property getter: - (id)messageDetail;	// 0x3092c0a9
// declared property getter: - (id)messageDetailFont;	// 0x3092c0d1
// declared property getter: - (id)messageFont;	// 0x3092c055
- (id)newActionButton;	// 0x30943d0d
// declared property getter: - (BOOL)observesExternalChanges;	// 0x308e4e15
- (void)peoplePickerLinkButtonTapped;	// 0x3092b635
// declared property getter: - (id)personHeaderView;	// 0x3092c1ed
// declared property getter: - (id)personViewDelegate;	// 0x308f9969
- (void)pickerCancel:(id)cancel;	// 0x3092b899
- (id)prepareViewWithPerson:(void *)person;	// 0x3092b97d
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x30943cb1
- (void)saveChanges;	// 0x309144c9
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x30943ce1
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x308e4b59
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x308ea2fd
// declared property setter: - (void)setAllowsAddToFavorites:(BOOL)favorites;	// 0x3092bebd
// declared property setter: - (void)setAllowsCancel:(BOOL)cancel;	// 0x308e4e4d
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x308ec9d5
// declared property setter: - (void)setAllowsDeletion:(BOOL)deletion;	// 0x308eca65
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x308ea271
// declared property setter: - (void)setAllowsSettingAsPreferredCardForName:(BOOL)name;	// 0x30912741
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x3092be91
// declared property setter: - (void)setAllowsSounds:(BOOL)sounds;	// 0x308ed755
// declared property setter: - (void)setAllowsVibrations:(BOOL)vibrations;	// 0x308ed791
// declared property setter: - (void)setAppearsInLinkingPeoplePicker:(BOOL)linkingPeoplePicker;	// 0x308ed959
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x3092c339
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x3092c359
// declared property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x3092c6dd
- (void)setCardContentProvider:(id)provider;	// 0x3092c179
- (void)setCustomAppearanceProvider:(id)provider;	// 0x30957db5
// declared property setter: - (void)setCustomFooterView:(id)view;	// 0x3092c2bd
// declared property setter: - (void)setCustomHeaderView:(id)view;	// 0x3092c269
// declared property setter: - (void)setCustomMessageView:(id)view;	// 0x3092c14d
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x308e9775
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x308ea131
// declared property setter: - (void)setEditDelegate:(id)delegate;	// 0x308ed84d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x3092bab1
- (void)setEditing:(BOOL)editing saveChanges:(BOOL)changes animated:(BOOL)animated;	// 0x30914179
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x3092c709
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x3092c745
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person;	// 0x3092c785
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x3092c7a9
// declared property setter: - (void)setMessage:(id)message;	// 0x3092bfd5
// declared property setter: - (void)setMessageDetail:(id)detail;	// 0x3092c07d
// declared property setter: - (void)setMessageDetailFont:(id)font;	// 0x3092c0f9
// declared property setter: - (void)setMessageFont:(id)font;	// 0x3092c029
// declared property setter: - (void)setObservesExternalChanges:(BOOL)changes;	// 0x308e4e81
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x3092c1c1
// declared property setter: - (void)setPersonViewDelegate:(id)delegate;	// 0x308ed839
// declared property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x3092c5b5
// declared property setter: - (void)setShareLocationURL:(id)url;	// 0x3092c561
// declared property setter: - (void)setShareMessageBody:(id)body;	// 0x3092c4b9
// declared property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x3092c465
// declared property setter: - (void)setShareMessageSubject:(id)subject;	// 0x3092c50d
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x3092c215
// declared property setter: - (void)setShouldShowLinkedPeople:(BOOL)showLinkedPeople;	// 0x308e5941
// converted property setter: - (void)setShouldShowLinkingUIOnCard:(BOOL)showLinkingUIOnCard;	// 0x3092bda5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x308eda89
// declared property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x3092c609
// declared property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x3092c65d
- (void)shareContactByEmail:(id)email;	// 0x3092c689
// declared property getter: - (id)shareLocationSnapshotImage;	// 0x3092c58d
// declared property getter: - (id)shareLocationURL;	// 0x3092c539
// declared property getter: - (id)shareMessageBody;	// 0x3092c491
// declared property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x3092c43d
// declared property getter: - (id)shareMessageSubject;	// 0x3092c4e5
// declared property getter: - (id)sharingDelegate;	// 0x3092c829
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x3092c241
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x308fc805
// declared property getter: - (BOOL)shouldShowLinkedPeople;	// 0x3092bcf9
// converted property getter: - (BOOL)shouldShowLinkingUIOnCard;	// 0x3092bd6d
- (void)startDelayingChangeNotifications;	// 0x3092b69d
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)now;	// 0x3090a0f5
// declared property getter: - (id)styleProvider;	// 0x30912921
// declared property getter: - (id)tableHeaderView;	// 0x3092c199
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x3092bb01
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x3092bad1
- (void)updateNavigationButtons;	// 0x308fa641
- (void)updateNavigationButtonsAnimated:(BOOL)animated;	// 0x308fa659
- (void)updateRecord;	// 0x3092bca5
- (void)updateTitle;	// 0x308e95f9
- (void)viewDidAppear:(BOOL)view;	// 0x30909159
- (void)viewDidDisappear:(BOOL)view;	// 0x30909ee1
- (void)viewDidLoad;	// 0x308fa8b1
- (void)viewDidUnload;	// 0x3092b99d
- (void)viewWillAppear:(BOOL)view;	// 0x308fb9e5
- (void)viewWillDisappear:(BOOL)view;	// 0x3090998d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3092c7e5
// declared property getter: - (id)willTweetLocationCallback;	// 0x3092c5e1
// declared property getter: - (id)willWeiboLocationCallback;	// 0x3092c635
@end

