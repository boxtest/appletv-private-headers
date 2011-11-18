/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSMutableArray, NSTimer, NSArray, BRMarimbaMenuView;

@interface BRSlideshowSettingsController : BRViewController {
@private
	BRMarimbaMenuView *_marimbaMenuView;	// 84 = 0x54
	NSMutableArray *_menuHistory;	// 88 = 0x58
	NSArray *_musicServers;	// 92 = 0x5c
	NSArray *_musicPlaylists;	// 96 = 0x60
	ATVDataServerRef _defaultMusicServer;	// 100 = 0x64
	ATVMediaQueryRef _playlistsQuery;	// 104 = 0x68
	NSTimer *_randomThemeSwappingTimer;	// 108 = 0x6c
	int _currentMenuType;	// 112 = 0x70
	BOOL _ignoreFocusMessages;	// 116 = 0x74
	BOOL _playlistQueryInProgress;	// 117 = 0x75
	BOOL _updateDefaultMusicMenuAfterPlaylistQueryCompletes;	// 118 = 0x76
	BOOL _memoryWarningAlreadyReceived;	// 119 = 0x77
}
+ (id)randomTransitionIDs;	// 0x35e64d41
+ (id)randomlySelectedSlideshowThemeIdentifier;	// 0x35e64b99
+ (id)slideshowIdentifierForTitle:(id)title;	// 0x35e64abd
+ (id)slideshowThemeTitles;	// 0x35e649d1
+ (id)slideshowTransitionTitles;	// 0x35e64c2d
+ (id)timePerSlideValues;	// 0x35e64f15
+ (id)transitionIdentifierForTitle:(id)title;	// 0x35e64ccd
- (id)init;	// 0x35e64fd1
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x35e64fe5
- (id)_allSharedComputers;	// 0x35e67b29
- (id)_currentPlaylistName;	// 0x35e66579
- (ATVDataClientRef)_dataClient;	// 0x35e684b9
- (void)_dataClientStatusChanged:(id)changed;	// 0x35e68171
- (int)_indexOfStringItem:(id)stringItem inArray:(id *)array itemCount:(int)count;	// 0x35e6566d
- (void)_initiatePlaylistsQuery;	// 0x35e67ff9
- (BOOL)_isCloudEnabled;	// 0x35e67a81
- (void)_lowMemoryNotification:(id)notification;	// 0x35e660bd
- (void)_mainSettingsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e66751
- (void)_mainSettingsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e668ed
- (id)_mainSettingsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e66139
- (long)_mainSettingsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x35e666b5
- (id)_mainSettingsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x35e66701
- (long)_mainSettingsMenuNumberOfSectionsInList:(id)list;	// 0x35e666b1
- (void)_musicLibraryMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e67669
- (void)_musicLibraryMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e6766d
- (id)_musicLibraryMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e673d5
- (long)_musicLibraryMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x35e675c1
- (id)_musicLibraryMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x35e67619
- (long)_musicLibraryMenuNumberOfSectionsInList:(id)list;	// 0x35e675bd
- (id)_musicServerSettingForIndexPath:(id)indexPath musicServer:(ATVDataServerRef *)server;	// 0x35e67891
- (void)_playlistMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e67e05
- (void)_playlistMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e67e09
- (id)_playlistMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e67b89
- (long)_playlistMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x35e67d81
- (id)_playlistMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x35e67db5
- (long)_playlistMenuNumberOfSectionsInList:(id)list;	// 0x35e67d41
- (void)_playlistsQueryComplete;	// 0x35e6851d
- (void)_returnToPreviousMenu;	// 0x35e65995
- (void)_runPlaylistsQuery;	// 0x35e6829d
- (void)_setDefaultMusicServerSetting:(id)setting defaultMusicServer:(ATVDataServerRef)server;	// 0x35e67a15
- (void)_setPlaylistsQuery:(ATVMediaQueryRef)query;	// 0x35e68485
- (void)_swapSlideshowTheme:(id)theme;	// 0x35e668a1
- (void)_switchToMenuType:(int)menuType rememberCurrentMenu:(BOOL)menu;	// 0x35e656b1
- (void)_themeDetailsMenuList:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e66f09
- (void)_themeDetailsMenuList:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e66f91
- (id)_themeDetailsMenuList:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e66d11
- (long)_themeDetailsMenuList:(id)list numberOfRowsInSection:(long)section;	// 0x35e66ead
- (id)_themeDetailsMenuList:(id)list sectionHeaderForSection:(long)section;	// 0x35e66eb9
- (long)_themeDetailsMenuNumberOfSectionsInList:(id)list;	// 0x35e66ea9
- (void)_toggleTimePerSlide;	// 0x35e6715d
- (void)_updateListFocusOnMenuSwitch;	// 0x35e65c65
- (BOOL)brEventAction:(id)action;	// 0x35e652f5
- (void)dealloc;	// 0x35e651f9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x35e655b5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x35e65611
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x35e655a9
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x35e65561
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x35e653e5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x35e654a1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x35e65501
- (long)numberOfSectionsInList:(id)list;	// 0x35e65445
@end

