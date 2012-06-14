/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewDelegate.h"
#import "AppleTV-Structs.h"
#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class ATVSearchView, NSCache, NSTimer, NSString;

@interface ATVSearchViewController : BRViewController <ATVSearchViewDelegate, BRTextFieldDelegate> {
@private
	NSTimer *_delayedLoadTimer;	// 88 = 0x58
	NSCache *_resultsCache;	// 92 = 0x5c
	NSString *_latestSearchString;	// 96 = 0x60
	BOOL _textDidEndEditing;	// 100 = 0x64
	NSString *_latestSearchStringWithResults;	// 104 = 0x68
}
@property(readonly, assign) NSString *latestSearchStringWithResults;	// G=0x32ac3259; @synthesize=_latestSearchStringWithResults
@property(readonly, assign) ATVSearchView *searchView;	// G=0x32ac2f85; @dynamic
- (id)init;	// 0x32ac2e19
- (void)_handleDelayedLoad:(id)load;	// 0x32ac33f9
- (id)_latestSearchString;	// 0x32ac3269
- (id)_latestSearchStringWithResults;	// 0x32ac3471
- (void)_restoreLatestSearchStringWithResults;	// 0x32ac353d
- (void)_setDelayedLoadTimer:(id)timer;	// 0x32ac33cd
- (void)_setLatestSearchString:(id)string;	// 0x32ac3279
- (void)_setResults:(id)results forSearch:(id)search;	// 0x32ac31d1
- (void)_updateLatestSearchStringWithResults:(id)results;	// 0x32ac3481
- (void)dealloc;	// 0x32ac2efd
// declared property getter: - (id)latestSearchStringWithResults;	// 0x32ac3259
// declared property getter: - (id)searchView;	// 0x32ac2f85
- (void)searchView:(id)view focusDidChangeToControl:(int)focus;	// 0x32ac3011
- (void)searchWithString:(id)string;	// 0x32ac2f95
- (void)textDidChange:(id)text;	// 0x32ac3049
- (void)textDidEndEditing:(id)text;	// 0x32ac312d
@end
