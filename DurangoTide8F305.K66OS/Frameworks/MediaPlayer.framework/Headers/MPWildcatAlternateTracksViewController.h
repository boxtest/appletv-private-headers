/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAbstractAlternateTracksViewController.h"

@class UITableView;

@interface MPWildcatAlternateTracksViewController : MPAbstractAlternateTracksViewController {
@private
	UITableView *_tableView;	// 176 = 0xb0
}
- (id)init;	// 0x33794b21
- (void)dealloc;	// 0x33794ab1
- (void)loadView;	// 0x33794bd1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33794a01
- (void)reloadData;	// 0x33794705
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3379489d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33794745
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x337949dd
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x33794c9d
- (void)viewDidUnload;	// 0x33794a3d
@end
