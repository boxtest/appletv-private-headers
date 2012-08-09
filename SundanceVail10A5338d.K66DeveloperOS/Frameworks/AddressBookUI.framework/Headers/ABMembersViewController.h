/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABViewControllerBannerViewProtocol.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "ABMembersControllerDelegate.h"
#import "ABPersonEditDelegate.h"
#import "ABAbstractViewController.h"
#import "AddressBookUI-Structs.h"

@class ABMembersController;

@interface ABMembersViewController : ABAbstractViewController <ABNewPersonViewControllerDelegate, ABMembersControllerDelegate, ABViewControllerBannerViewProtocol, ABPersonEditDelegate> {
	ABMembersController *_membersController;	// 192 = 0xc0
	int _insertionProperty;	// 196 = 0xc4
	id _insertionValue;	// 200 = 0xc8
	id _insertionLabel;	// 204 = 0xcc
	int _rightButtonBehavior;	// 208 = 0xd0
	int _leftButtonBehavior;	// 212 = 0xd4
	BOOL _shouldHandleExternalChangeOnPersonViewControllers;	// 216 = 0xd8
}
@property(readonly, assign) BOOL allowsCancel;	// G=0x37056ac1; 
@property(readonly, assign) BOOL allowsCardEditing;	// G=0x37056ae9; 
@property(readonly, retain) ABMembersController *membersController;	// G=0x3705a825; converted property
@property(readonly, assign) BOOL shouldShowGroups;	// G=0x37056b35; 
@property(retain) id styleProvider;	// G=0x37054d31; S=0x37054ead; converted property
- (id)initWithModel:(id)model;	// 0x370549f5
- (void)_applicationEnteringBackground;	// 0x3705a83d
- (void)_applicationEnteringForeground;	// 0x3709fda9
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x370a0011
- (void)_updateForModel;	// 0x370a03e1
- (int)abViewControllerType;	// 0x370a000d
- (void)addPerson:(id)person;	// 0x37083351
// declared property getter: - (BOOL)allowsCancel;	// 0x37056ac1
// declared property getter: - (BOOL)allowsCardEditing;	// 0x37056ae9
- (BOOL)allowsShowingPersonsCards;	// 0x370a0139
- (void)applicationDidResume;	// 0x370a0051
- (void)applicationWillSuspend;	// 0x3705a7fd
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x37092985
- (void)cancel:(id)cancel;	// 0x370a00d9
- (void)cancelRefreshingAccount;	// 0x3705a84d
- (void)cancelSearching:(id)searching;	// 0x370a03a1
- (void)dealloc;	// 0x3709fb79
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3709fd65
- (id)defaultPNGName;	// 0x3709fcb9
- (void)didReceiveMemoryWarning;	// 0x370a0091
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x3709fd39
- (void)handleExternalChangeOnPersonViewControllers;	// 0x3709141d
- (void)insertProperty:(int *)property insertValue:(id *)value insertLabel:(id *)label;	// 0x370619d9
- (BOOL)isNavigationButtonEnabled:(int)enabled;	// 0x370a00d5
- (void)linksUpdatedForPerson:(void *)person;	// 0x370a0531
- (void)loadState;	// 0x37054f15
- (void)loadView;	// 0x37055381
// converted property getter: - (id)membersController;	// 0x3705a825
- (void)membersController:(id)controller needsTitleUpdate:(id)update;	// 0x370a0301
- (void)membersController:(id)controller needsTitleViewUpdate:(id)update;	// 0x370a034d
- (BOOL)membersController:(id)controller shouldAllowSelectingPersonWithRecordID:(int)recordID;	// 0x37058cc1
- (void)membersControllerDidEndServerSearch:(id)membersController;	// 0x370a0379
- (void)membersControllerWillEndSearching:(id)membersController;	// 0x37085179
- (void)membersControllerWillStartSearching:(id)membersController;	// 0x370846c1
- (id)model;	// 0x37055cad
- (void)modelDatabaseChange:(id)change;	// 0x370913ed
- (void)nameUpdatedForPerson:(void *)person;	// 0x370a04b5
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x3708429d
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson informDelegate:(BOOL)delegate;	// 0x370842c1
- (void)peoplePickerNavigationControllerNavigationBarStoppedAnimating:(id)animating;	// 0x3705a7c9
- (BOOL)personViewController:(id)controller shouldContinueAfterEditingConfirmed:(BOOL)confirmed forPerson:(void *)person;	// 0x3707f34d
- (void)personWasDeleted;	// 0x37092939
- (void)personWasSelected:(void *)selected;	// 0x370a03dd
- (void)preferredPersonDidChangeToPerson:(void *)preferredPerson;	// 0x370a05ad
- (void)presentGroupsViewController;	// 0x3709fe19
- (void)reallyHandleExternalChangeOnPersonViewControllers;	// 0x370914a9
- (void)refreshEverythingNow;	// 0x370a0105
- (void)resetInsertionData;	// 0x3709fc55
- (void)resetStateForDisplayedFilterChange;	// 0x370a0479
- (void)searchCurrentContactsGroupForWords:(id)words animated:(BOOL)animated;	// 0x370db91d
- (void)setAddressBook:(void *)book;	// 0x3709fcf1
- (void)setBannerTitle:(id)title value:(id)value;	// 0x370564b5
- (void)setSearchCompletionDelegate:(id)delegate;	// 0x370db8f1
// converted property setter: - (void)setStyleProvider:(id)provider;	// 0x37054ead
// declared property getter: - (BOOL)shouldShowGroups;	// 0x37056b35
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate;	// 0x370908ad
- (BOOL)showCardForPerson:(void *)person animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person3;	// 0x370a0161
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate;	// 0x3705ba79
- (BOOL)showCardForPerson:(void *)person withMemberCell:(id)memberCell animate:(BOOL)animate selectAndScrollToPerson:(BOOL)person4;	// 0x3705ba9d
- (void)showInsertEditorForPerson:(void *)person animate:(BOOL)animate;	// 0x370a0185
- (void)startRefreshingAccount;	// 0x37057919
// converted property getter: - (id)styleProvider;	// 0x37054d31
- (void)updateLeftNavigationButtonAnimated:(BOOL)animated;	// 0x3709fe41
- (void)updateNavigationButtonsAnimated:(BOOL)animated;	// 0x370567b9
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode;	// 0x370846d5
- (void)updateNavigationButtonsInSearchMode:(BOOL)searchMode animated:(BOOL)animated;	// 0x37056855
- (void)viewDidAppear:(BOOL)view;	// 0x37057a1d
- (void)viewDidDisappear:(BOOL)view;	// 0x3705acc5
- (void)viewWillAppear:(BOOL)view;	// 0x37056749
- (void)viewWillDisappear:(BOOL)view;	// 0x3705a9e9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3709fdb9
@end
