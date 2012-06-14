/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"

@class BRWaitPromptControl, NSTimer, NSDictionary, ATVURLDocument;

@interface ATVMusicStoreMoviePreviewController : BRController {
@private
	BRWaitPromptControl *_waitPrompt;	// 80 = 0x50
	NSTimer *_timer;	// 84 = 0x54
	NSDictionary *_dictionary;	// 88 = 0x58
	ATVURLDocument *_document;	// 92 = 0x5c
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x33134be5
- (id)init;	// 0x33134c31
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x33134c35
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x331351ed
- (void)_showPromptTimer:(id)timer;	// 0x33135521
- (BOOL)brEventAction:(id)action;	// 0x33135559
- (void)controlWasActivated;	// 0x33134fad
- (void)controlWasDeactivated;	// 0x331354ad
- (void)dealloc;	// 0x33134f09
@end
