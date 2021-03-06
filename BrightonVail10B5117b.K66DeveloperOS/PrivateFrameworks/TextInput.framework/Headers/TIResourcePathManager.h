/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSOperationQueue, NSDictionary;

@interface TIResourcePathManager : NSObject {
	void *_mobileAssetFrameworkFileHandle;	// 4 = 0x4
	NSMutableDictionary *_resourcePaths;	// 8 = 0x8
	NSOperationQueue *_operationQueue;	// 12 = 0xc
	NSDictionary *_inputModeAssets;	// 16 = 0x10
}
@property(retain, nonatomic) NSDictionary *inputModeAssets;	// G=0x35b88c59; S=0x35b88c69; @synthesize=_inputModeAssets
@property(readonly, assign, nonatomic) NSOperationQueue *operationQueue;	// G=0x35b88c49; @synthesize=_operationQueue
+ (id)sharedInstance;	// 0x35b879b1
- (id)init;	// 0x35b87a1d
- (id)assetQueryForType:(id)type;	// 0x35b8815d
- (void)clearPathsForType:(int)type;	// 0x35b87e71
- (void)dealloc;	// 0x35b87bcd
- (void)didFetchAssets;	// 0x35b88241
- (void)fetchAssets;	// 0x35b88255
- (oneway void)fetchAssetsForQueryResults:(id)queryResults withError:(id)error updatingArray:(id)array continuation:(id)continuation;	// 0x35b88a1d
- (oneway void)fetchAssetsWithName:(id)name continuation:(id)continuation;	// 0x35b889a5
- (oneway void)fetchAssetsWithNames:(id)names forInputModes:(id)inputModes updatingDictionary:(id)dictionary continuation:(id)continuation;	// 0x35b8870d
- (oneway void)handleUninstalledAsset:(id)asset withError:(id)error continuation:(id)continuation;	// 0x35b88c41
// declared property getter: - (id)inputModeAssets;	// 0x35b88c59
- (BOOL)loadMobileAssetLibrary;	// 0x35b880a5
- (id)mobileAssetConstant:(const char *)constant;	// 0x35b88111
// declared property getter: - (id)operationQueue;	// 0x35b88c49
- (id)pathsOfType:(int)type;	// 0x35b87c91
- (void)postNotification:(id)notification;	// 0x35b87f71
- (void)postNotification:(id)notification forType:(int)type;	// 0x35b87ff9
- (void)postNotificationForType:(int)type;	// 0x35b88089
- (void)pushPath:(id)path forType:(int)type;	// 0x35b87dc1
- (void)resendNotification:(id)notification;	// 0x35b87ed5
// declared property setter: - (void)setInputModeAssets:(id)assets;	// 0x35b88c69
- (void)setupMobileAssets;	// 0x35b87bbd
- (void)setupNotifications;	// 0x35b87ae5
- (void)unloadMobileAssetLibrary;	// 0x35b880ed
- (id)versionString;	// 0x35b8812d
@end

