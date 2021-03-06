/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBackgroundTask.h"

@class ATVStoreFavorite, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
@private
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x32faa861
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x32faab11
- (void)_checkForPurchasesComplete:(id)purchasesComplete;	// 0x32faadcd
- (void)_finalizePageRefresh:(id)refresh;	// 0x32faae51
- (void)dealloc;	// 0x32faa8d9
- (void)disable:(id)disable;	// 0x32faaa91
- (BOOL)perform:(id)perform;	// 0x32faa955
- (void)stop;	// 0x32faaad1
@end

