/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x3035e5a1; converted property
+ (id)allDownloads;	// 0x3035d89d
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x3035de15
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x3035d9e9
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3035dbcd
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x3035d5ed
+ (id)downloadTestManager;	// 0x3035d77d
+ (BOOL)downloadsInProgress;	// 0x3035d83d
+ (void)initialize;	// 0x3035d3d5
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x3035d439
+ (void)registerDownloadTestManager:(id)manager;	// 0x3035d6bd
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x3035d521
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x3035dae5
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3035dcf9
- (id)init;	// 0x3035e0a1
- (void)_assetPlayable:(id)playable;	// 0x3035e789
- (void)addDownload:(id)download;	// 0x3035e20d
- (void)cancelNetworkSpeedTest;	// 0x3035e9b9
- (void)dealloc;	// 0x3035e17d
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x3035e591
// converted property getter: - (id)downloads;	// 0x3035e5a1
- (id)downloadsWithQualifiedState:(int)qualifiedState;	// 0x30156a75
- (BOOL)networkDiagnosticsAvailable;	// 0x3035e9a9
- (BOOL)networkTestInProgress;	// 0x3035e9ad
- (void)pauseCurrentDownloads;	// 0x30156b39
- (void)prioritizeDownload:(id)download;	// 0x3035e675
- (void)removeDownload:(id)download;	// 0x3035e385
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x3035e9b5
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x3035e9b1
@end

