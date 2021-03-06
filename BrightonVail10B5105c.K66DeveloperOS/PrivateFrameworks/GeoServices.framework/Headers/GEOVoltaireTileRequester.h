/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOVoltaireMultiTileDownloaderDelegate.h"
#import "GEOTileRequesterDelegate.h"
#import "GEOTileRequester.h"
#import "GeoServices-Structs.h"

@class GEOVoltaireSimpleTileRequester, NSMutableArray, NSThread, NSTimer;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate> {
	NSMutableArray *_activeDownloads;	// 32 = 0x20
	NSThread *_startThread;	// 36 = 0x24
	NSTimer *_activeTileGroupTimeoutTimer;	// 40 = 0x28
	NSMutableArray *_errors;	// 44 = 0x2c
	GEOVoltaireSimpleTileRequester *_simpleRequester;	// 48 = 0x30
}
+ (XXStruct_nbUehC *)expiringTilesets;	// 0x3395223d
+ (unsigned)expiringTilesetsCount;	// 0x33952239
+ (Class)multiDownloaderClass;	// 0x339523f5
+ (Class)simpleRequesterClass;	// 0x339523d9
+ (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x33952315
+ (unsigned char)tileProviderIdentifier;	// 0x33952211
- (void)_didReceiveActiveTileGroup:(id)group;	// 0x33952809
- (void)_failedToReceiveActiveTileGroup:(id)receiveActiveTileGroup;	// 0x339526f1
- (void)_startWithTileKeys:(id)tileKeys;	// 0x339528ed
- (void)cancel;	// 0x339534a5
- (void)cleanup;	// 0x33953429
- (void)dealloc;	// 0x33952129
- (id)multiTileURLStringForTileKey:(GEOTileKey *)tileKey useStatusCodes:(BOOL *)codes;	// 0x339528b1
- (void)start;	// 0x33952411
- (void)tileDownload:(id)download didFailWithError:(id)error;	// 0x33953a51
- (void)tileDownload:(id)download didReceiveData:(id)data edition:(unsigned)edition forKey:(GEOTileKey)key;	// 0x3395390d
- (void)tileDownloadFinished:(id)finished;	// 0x33953a15
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x33953ad5
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x33953b31
- (void)tileRequesterFinished:(id)finished;	// 0x33953bb1
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x33952215
- (void)tryFinish;	// 0x339535c5
@end

