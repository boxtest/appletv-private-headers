/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRITunesUtilities.h"


__attribute__((visibility("hidden")))
@interface MEITunesUtilities : XXUnknownSuperclass <BRITunesUtilities> {
}
+ (void)_writeJournal:(id)journal;	// 0xbd7d
+ (void)checkInJournaledEntries;	// 0xabd9
+ (void)initialize;	// 0xa9b9
+ (id)journalObjectForAsset:(id)asset;	// 0xae5d
+ (void)removeJournalForRentalID:(unsigned long long)rentalID;	// 0xb295
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0xb549
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0xb76d
- (void)deleteImportedKeybagData;	// 0xbca9
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0xb84d
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0xb945
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0xbbb5
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0xbb75
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0xbb6d
- (id)rentalGUID;	// 0xb511
- (id)sortStringForString:(id)string;	// 0xba05
- (id)urlSuitableForPlayback:(id)playback;	// 0xbb59
@end

