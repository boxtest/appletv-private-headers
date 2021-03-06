/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetResourceLoaderInternal;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject {
	AVAssetResourceLoaderInternal *_resourceLoader;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) id<AVAssetResourceLoaderDelegate> delegate;	// G=0x302f1aed; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x302f1b0d; 
- (id)initWithAsset:(id)asset;	// 0x302f1531
- (void)_addFigAssetNotifications;	// 0x302f1815
- (BOOL)_attemptDelegateHandlingOfRequestWithDictionary:(id)dictionary;	// 0x302f1b2d
- (OpaqueFigAsset *)_figAsset;	// 0x302f1f4d
- (void)_removeFigAssetNotifications;	// 0x302f1855
- (id)_weakReference;	// 0x302f17f5
- (id)asset;	// 0x302f1f21
- (void)dealloc;	// 0x302f16b9
// declared property getter: - (id)delegate;	// 0x302f1aed
// declared property getter: - (id)delegateQueue;	// 0x302f1b0d
- (void)finalize;	// 0x302f1769
- (void)setDelegate:(id)delegate queue:(id)queue;	// 0x302f1895
- (id)stateQueue;	// 0x302f1acd
@end

