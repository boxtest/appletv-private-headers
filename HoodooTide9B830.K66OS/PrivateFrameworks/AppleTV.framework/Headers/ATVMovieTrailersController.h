/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class NSArray, BRMovieTrailersProvider, BRScrollControl, BRCursorControl, BRAlertControl, BRPanelControl, BRWaitPromptControl;

@interface ATVMovieTrailersController : BRController {
@private
	NSArray *_trailers;	// 84 = 0x54
	BRPanelControl *_panel;	// 88 = 0x58
	BRMovieTrailersProvider *_trailersProvider;	// 92 = 0x5c
	BRWaitPromptControl *_loadingControl;	// 96 = 0x60
	BRScrollControl *_scroller;	// 100 = 0x64
	BRCursorControl *_cursor;	// 104 = 0x68
	BRAlertControl *_errorControl;	// 108 = 0x6c
}
- (id)init;	// 0x32956381
- (void)_addErrorControlWithError:(id)error;	// 0x32957021
- (void)_addLoadingControl;	// 0x32956a49
- (void)_addTrailersMediaControl;	// 0x32956b81
- (id)_movieTrailers:(id *)trailers;	// 0x32956965
- (void)_movieTrailersLoadFailed:(id)failed;	// 0x329573bd
- (void)_movieTrailersLoaded:(id)loaded;	// 0x32957189
- (void)_movieTrailersLoading:(id)loading;	// 0x32957351
- (id)_movieTrailersTitle;	// 0x32956945
- (void)_objectSelected:(id)selected;	// 0x32957471
- (void)_passErrorControlWithError:(id)error;	// 0x329570a5
- (void)_passLoadingControl:(id)control;	// 0x32956b71
- (void)_passRemoveControls:(id)controls;	// 0x32956a35
- (void)_passTrailersMediaControl:(id)control;	// 0x32957011
- (id)_providers;	// 0x329570b5
- (void)_removeControls;	// 0x32956975
- (id)accessibilityLabel;	// 0x32956955
- (BOOL)brEventAction:(id)action;	// 0x329567c9
- (void)controlWasActivated;	// 0x329565e5
- (void)dealloc;	// 0x329564d1
- (BOOL)isNetworkDependent;	// 0x32956651
- (void)layoutSubcontrols;	// 0x32956655
@end

