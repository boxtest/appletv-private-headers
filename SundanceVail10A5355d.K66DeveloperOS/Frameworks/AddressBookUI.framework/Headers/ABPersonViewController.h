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

@class ABPersonViewControllerHelper, ABPersonTableViewActionsDelegate, ABPersonTableViewSharingDelegate, NSTimer, NSString, AFContextManager, ABPersonTableViewDataSource, NSArray, UIFont, UIImage, UIView;
@protocol ABPersonViewControllerDelegate, ABStyleProvider, ABPersonEditDelegate;

@interface ABPersonViewController : UIViewController <AFContextProvider, UIViewControllerRestoration> {
	id<ABPersonViewControllerDelegate> _personViewDelegate;	// 192 = 0xc0
	id _helper;	// 196 = 0xc4
	id _internal;	// 200 = 0xc8
	BOOL _internal2;	// 204 = 0xcc
	NSTimer *_editAnimationTimer;	// 208 = 0xd0
	ABPersonTableViewDataSource *_dataSource;	// 212 = 0xd4
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 216 = 0xd8
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 220 = 0xdc
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x34fb6b09; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x34f6e185; S=0x34f6de01; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x34f72cfd; S=0x34f7078d; 
@property(assign, nonatomic) BOOL allowsAddToFavorites;	// G=0x34fb61c9; S=0x34fb619d; 
@property(assign, nonatomic) BOOL allowsCancel;	// G=0x34fb61f1; S=0x34f6e0f5; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x34fb6269; S=0x34f71c95; 
@property(assign, nonatomic) BOOL allowsDeletion;	// G=0x34f72cd5; S=0x34f71d25; 
@property(assign, nonatomic) BOOL allowsEditing;	// G=0x34fb6121; S=0x34f6eea9; 
@property(assign, nonatomic) BOOL allowsSettingAsPreferredCardForName;	// G=0x34fb6291; S=0x34f98e11; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x34fb6149; S=0x34fb6171; 
@property(assign, nonatomic) BOOL allowsSounds;	// G=0x34fb6215; S=0x34f72a0d; 
@property(assign, nonatomic) BOOL allowsVibrations;	// G=0x34fb6241; S=0x34f72a51; 
@property(assign, nonatomic) BOOL appearsInLinkingPeoplePicker;	// G=0x34fb6049; S=0x34f72b49; 
@property(copy, nonatomic) NSString *attribution;	// G=0x34fb65f1; S=0x34fb6619; 
@property(assign, nonatomic) BOOL badgeEmailPropertiesForMailVIP;	// G=0x34fb6995; S=0x34fb69bd; 
@property(readonly, assign, nonatomic) AFContextManager *contextManager;	// G=0x34f7fb91; 
@property(retain, nonatomic) UIView *customFooterView;	// G=0x34fb65c9; S=0x34fb659d; 
@property(retain, nonatomic) UIView *customHeaderView;	// G=0x34fb6575; S=0x34fb6549; 
@property(retain, nonatomic) UIView *customMessageView;	// G=0x34fb6405; S=0x34fb642d; 
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34fb6af9; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x34f72ca5; S=0x34f6ea3d; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x34f98dc1; S=0x34f6ed69; 
@property(assign, nonatomic) id<ABPersonEditDelegate> editDelegate;	// G=0x34fb60fd; S=0x34f72b0d; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x34f6e9e1; 
@property(copy, nonatomic) NSString *message;	// G=0x34fb62e1; S=0x34fb62b5; 
@property(copy, nonatomic) NSString *messageDetail;	// G=0x34fb6389; S=0x34fb635d; 
@property(retain, nonatomic) UIFont *messageDetailFont;	// G=0x34fb63b1; S=0x34fb63d9; 
@property(retain, nonatomic) UIFont *messageFont;	// G=0x34fb6335; S=0x34fb6309; 
@property(assign, nonatomic) BOOL observesExternalChanges;	// G=0x34f6e0bd; S=0x34f6e129; 
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x34fb64cd; S=0x34fb64a1; 
@property(assign, nonatomic) id<ABPersonViewControllerDelegate> personViewDelegate;	// G=0x34f7d739; S=0x34f72af9; 
@property(retain, nonatomic) UIImage *shareLocationSnapshotImage;	// G=0x34fb686d; S=0x34fb6895; 
@property(copy, nonatomic) NSString *shareLocationURL;	// G=0x34fb6819; S=0x34fb6841; 
@property(copy, nonatomic) NSString *shareMessageBody;	// G=0x34fb6771; S=0x34fb6799; 
@property(assign, nonatomic) BOOL shareMessageBodyIsHTML;	// G=0x34fb671d; S=0x34fb6745; 
@property(copy, nonatomic) NSString *shareMessageSubject;	// G=0x34fb67c5; S=0x34fb67ed; 
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x34fb6b19; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x34fb6521; S=0x34fb64f5; 
@property(assign, nonatomic) BOOL shouldShowLinkedPeople;	// G=0x34fb6011; S=0x34f6e1a9; 
@property(assign) BOOL shouldShowLinkingUIOnCard;	// G=0x34fb6085; S=0x34f72bb5; converted property
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34f7fc69; S=0x34f72bf1; 
@property(readonly, assign, nonatomic) UIView *tableHeaderView;	// G=0x34fb6479; 
@property(copy, nonatomic) id willTweetLocationCallback;	// G=0x34fb68c1; S=0x34fb68e9; 
@property(copy, nonatomic) id willWeiboLocationCallback;	// G=0x34fb6915; S=0x34fb693d; 
+ (id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;	// 0x34fb55b5
- (id)init;	// 0x34fb5351
- (id)initWithAddressBook:(void *)addressBook;	// 0x34f6d879
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x34fb537d
- (id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void *)book;	// 0x34f6d899
- (id)initWithNibName:(id)nibName bundle:(id)bundle addressBook:(void *)book style:(int)style;	// 0x34f6d8bd
- (id)initWithStyle:(int)style;	// 0x34fb53a1
- (BOOL)_allowsAutorotation;	// 0x34fa2365
- (void)_editAnimationTimerFired:(id)fired;	// 0x34fb5d6d
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x34fb5941
- (void)_handleLocalChange:(CFDictionaryRef)change;	// 0x34fa413d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x34f7fc19
- (void)_removeContextProviderOnMainThread;	// 0x34f9355d
- (BOOL)_updateAllDataForExternalChange;	// 0x34fb66d5
- (BOOL)_updatePeopleDataForExternalChange;	// 0x34fb6691
- (void)_updateTableDataForExternalChange;	// 0x34fb66b5
- (int)abViewControllerType;	// 0x34fb5d69
- (float)ab_heightToFitForViewInPopoverView;	// 0x34f7e74d
// declared property getter: - (id)actionsDelegate;	// 0x34fb6b09
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca601
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca515
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca545
// declared property getter: - (void *)addressBook;	// 0x34f6e185
- (void)addressBookChangedLocally:(CFDictionaryRef)locally;	// 0x34fb6671
- (BOOL)allowContextProvider:(id)provider;	// 0x34f98ef1
// declared property getter: - (BOOL)allowsActions;	// 0x34f72cfd
// declared property getter: - (BOOL)allowsAddToFavorites;	// 0x34fb61c9
// declared property getter: - (BOOL)allowsCancel;	// 0x34fb61f1
// declared property getter: - (BOOL)allowsConferencing;	// 0x34fb6269
// declared property getter: - (BOOL)allowsDeletion;	// 0x34f72cd5
// declared property getter: - (BOOL)allowsEditing;	// 0x34fb6121
// declared property getter: - (BOOL)allowsSettingAsPreferredCardForName;	// 0x34fb6291
// declared property getter: - (BOOL)allowsSharing;	// 0x34fb6149
// declared property getter: - (BOOL)allowsSounds;	// 0x34fb6215
// declared property getter: - (BOOL)allowsVibrations;	// 0x34fb6241
// declared property getter: - (BOOL)appearsInLinkingPeoplePicker;	// 0x34fb6049
- (void)applicationDidResume;	// 0x34fb5d25
- (void)applicationWillSuspend;	// 0x34fb5cc5
- (void)applicationWillTerminate:(id)application;	// 0x34fb5369
// declared property getter: - (id)attribution;	// 0x34fb65f1
// declared property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x34fb6995
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x34fb5a1d
- (void)cancelEditing:(BOOL)editing;	// 0x34f90441
// declared property getter: - (id)contextManager;	// 0x34f7fb91
// declared property getter: - (id)customFooterView;	// 0x34fb65c9
// declared property getter: - (id)customHeaderView;	// 0x34fb6575
// declared property getter: - (id)customMessageView;	// 0x34fb6405
// declared property getter: - (id)dataSource;	// 0x34fb6af9
- (void)dealloc;	// 0x34f933cd
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x34fb5571
- (void)dismissModalViewControllerAnimated:(BOOL)animated;	// 0x34fb53c9
// declared property getter: - (void *)displayedPerson;	// 0x34f72ca5
// declared property getter: - (id)displayedProperties;	// 0x34f98dc1
- (void)editCancel:(id)cancel;	// 0x34f9042d
// declared property getter: - (id)editDelegate;	// 0x34fb60fd
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x34fb5429
- (void)forceUseLinkedInfos:(id)infos currentIndexInLinkedInfos:(int)linkedInfos;	// 0x34f98e5d
- (id)getCurrentContext;	// 0x34fb5e75
- (BOOL)handleExternalChange;	// 0x34fb5891
// declared property getter: - (id)helper;	// 0x34f6e9e1
- (void)helper:(id)helper didToggleEditingWhileInViewMode:(BOOL)viewMode;	// 0x34fb5e49
- (void)helperDidReloadAfterChangingDisplayedPeople:(id)helper;	// 0x34f6e9f1
- (BOOL)isDelayingChangeNotifications;	// 0x34f6e0cd
- (BOOL)isReadonly;	// 0x34fb588d
- (void)loadView;	// 0x34f72c15
- (BOOL)makeFirstFieldBecomeFirstResponder;	// 0x34fb66f9
- (BOOL)manuallyLinkPerson:(void *)person;	// 0x34fb60c1
// declared property getter: - (id)message;	// 0x34fb62e1
// declared property getter: - (id)messageDetail;	// 0x34fb6389
// declared property getter: - (id)messageDetailFont;	// 0x34fb63b1
// declared property getter: - (id)messageFont;	// 0x34fb6335
- (id)newActionButton;	// 0x34fca5d9
// declared property getter: - (BOOL)observesExternalChanges;	// 0x34f6e0bd
- (void)peoplePickerLinkButtonTapped;	// 0x34fb582d
// declared property getter: - (id)personHeaderView;	// 0x34fb64cd
// declared property getter: - (id)personViewDelegate;	// 0x34f7d739
- (void)pickerCancel:(id)cancel;	// 0x34fb5959
- (id)prepareViewWithPerson:(void *)person;	// 0x34fb59dd
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x34fca57d
- (void)saveChanges;	// 0x34fb5a49
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x34fca5ad
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x34f6de01
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x34f7078d
// declared property setter: - (void)setAllowsAddToFavorites:(BOOL)favorites;	// 0x34fb619d
// declared property setter: - (void)setAllowsCancel:(BOOL)cancel;	// 0x34f6e0f5
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x34f71c95
// declared property setter: - (void)setAllowsDeletion:(BOOL)deletion;	// 0x34f71d25
// declared property setter: - (void)setAllowsEditing:(BOOL)editing;	// 0x34f6eea9
// declared property setter: - (void)setAllowsSettingAsPreferredCardForName:(BOOL)name;	// 0x34f98e11
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x34fb6171
// declared property setter: - (void)setAllowsSounds:(BOOL)sounds;	// 0x34f72a0d
// declared property setter: - (void)setAllowsVibrations:(BOOL)vibrations;	// 0x34f72a51
// declared property setter: - (void)setAppearsInLinkingPeoplePicker:(BOOL)linkingPeoplePicker;	// 0x34f72b49
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x34fb6619
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x34fb6639
// declared property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x34fb69bd
- (void)setCardContentProvider:(id)provider;	// 0x34fb6459
- (void)setCustomAppearanceProvider:(id)provider;	// 0x34fdb471
// declared property setter: - (void)setCustomFooterView:(id)view;	// 0x34fb659d
// declared property setter: - (void)setCustomHeaderView:(id)view;	// 0x34fb6549
// declared property setter: - (void)setCustomMessageView:(id)view;	// 0x34fb642d
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x34f6ea3d
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x34f6ed69
// declared property setter: - (void)setEditDelegate:(id)delegate;	// 0x34f72b0d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34f8bfc1
- (void)setEditing:(BOOL)editing saveChanges:(BOOL)changes animated:(BOOL)animated;	// 0x34f8bfe1
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x34fb69e9
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x34fb6a25
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person;	// 0x34fb6a65
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x34fb6a89
// declared property setter: - (void)setMessage:(id)message;	// 0x34fb62b5
// declared property setter: - (void)setMessageDetail:(id)detail;	// 0x34fb635d
// declared property setter: - (void)setMessageDetailFont:(id)font;	// 0x34fb63d9
// declared property setter: - (void)setMessageFont:(id)font;	// 0x34fb6309
// declared property setter: - (void)setObservesExternalChanges:(BOOL)changes;	// 0x34f6e129
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x34fb64a1
// declared property setter: - (void)setPersonViewDelegate:(id)delegate;	// 0x34f72af9
// declared property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x34fb6895
// declared property setter: - (void)setShareLocationURL:(id)url;	// 0x34fb6841
// declared property setter: - (void)setShareMessageBody:(id)body;	// 0x34fb6799
// declared property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x34fb6745
// declared property setter: - (void)setShareMessageSubject:(id)subject;	// 0x34fb67ed
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x34fb64f5
// declared property setter: - (void)setShouldShowLinkedPeople:(BOOL)showLinkedPeople;	// 0x34f6e1a9
// converted property setter: - (void)setShouldShowLinkingUIOnCard:(BOOL)showLinkingUIOnCard;	// 0x34f72bb5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34f72bf1
// declared property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x34fb68e9
// declared property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x34fb693d
- (void)shareContactByEmail:(id)email;	// 0x34fb6969
// declared property getter: - (id)shareLocationSnapshotImage;	// 0x34fb686d
// declared property getter: - (id)shareLocationURL;	// 0x34fb6819
// declared property getter: - (id)shareMessageBody;	// 0x34fb6771
// declared property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x34fb671d
// declared property getter: - (id)shareMessageSubject;	// 0x34fb67c5
// declared property getter: - (id)sharingDelegate;	// 0x34fb6b19
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x34fb6521
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x34f7fc65
// declared property getter: - (BOOL)shouldShowLinkedPeople;	// 0x34fb6011
// converted property getter: - (BOOL)shouldShowLinkingUIOnCard;	// 0x34fb6085
- (void)startDelayingChangeNotifications;	// 0x34f8c25d
- (void)stopDelayingChangeNotificationsAndDeliverNow:(BOOL)now;	// 0x34f90885
// declared property getter: - (id)styleProvider;	// 0x34f7fc69
// declared property getter: - (id)tableHeaderView;	// 0x34fb6479
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;	// 0x34fb5e19
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;	// 0x34fb5de9
- (void)updateNavigationButtons;	// 0x34f7e371
- (void)updateNavigationButtonsAnimated:(BOOL)animated;	// 0x34f7e389
- (void)updateRecord;	// 0x34fb5fbd
- (void)updateTitle;	// 0x34f6e8e1
- (void)viewDidAppear:(BOOL)view;	// 0x34f8bce9
- (void)viewDidDisappear:(BOOL)view;	// 0x34f93379
- (void)viewDidLoad;	// 0x34f7e5e1
- (void)viewDidUnload;	// 0x34fb59fd
- (void)viewWillAppear:(BOOL)view;	// 0x34f7ed3d
- (void)viewWillDisappear:(BOOL)view;	// 0x34f92e55
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x34fb6ac5
// declared property getter: - (id)willTweetLocationCallback;	// 0x34fb68c1
// declared property getter: - (id)willWeiboLocationCallback;	// 0x34fb6915
@end

