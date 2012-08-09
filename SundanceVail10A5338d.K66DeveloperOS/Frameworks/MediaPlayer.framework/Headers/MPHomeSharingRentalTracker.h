/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "SSRequestDelegate.h"

@class NSMutableDictionary;

@interface MPHomeSharingRentalTracker : NSObject <SSRequestDelegate> {
	NSMutableDictionary *_rentals;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x341f941d
- (id)init;	// 0x341f9489
- (id)_init;	// 0x341f94d5
- (void)_loadRentals;	// 0x341fa79d
- (void)_saveRentals;	// 0x341fa8b1
- (void)addRentalWithItemID:(unsigned long long)itemID databaseID:(id)anId;	// 0x341f9565
- (void)dealloc;	// 0x341f9519
- (void)removeAllRentalsForDatabaseID:(id)databaseID;	// 0x341f9c99
- (void)removeRentalWithItemID:(unsigned long long)itemID;	// 0x341f9785
- (void)request:(id)request didFailWithError:(id)error;	// 0x341f9fc5
- (void)requestDidFinish:(id)request;	// 0x341f9ff5
@end
