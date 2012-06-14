/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

#import "MobileAsset-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDictionary;

@interface ASAsset : NSObject {
@private
	NSString *_assetType;	// 4 = 0x4
	NSDictionary *_attributes;	// 8 = 0x8
	NSDictionary *_downloadOptions;	// 12 = 0xc
	NSString *_clientName;	// 16 = 0x10
	NSString *_identifier;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	MobileAsset *_cfAsset;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *assetType;	// G=0x34dd82e1; @synthesize=_assetType
@property(readonly, assign, nonatomic) NSDictionary *attributes;	// G=0x34dd74b5; 
@property(retain, nonatomic) NSString *clientName;	// G=0x34dd83ed; S=0x34dd8425; 
@property(retain, nonatomic) NSDictionary *downloadOptions;	// G=0x34dd82c1; S=0x34dd82d1; @synthesize=_downloadOptions
@property(readonly, assign, nonatomic) NSDictionary *fullAttributes;	// G=0x34dd8469; 
@property(assign, nonatomic) int garbageCollectionBehavior;	// G=0x34dd76ed; S=0x34dd77c5; 
@property(readonly, retain) NSString *identifier;	// G=0x34dd84f5; converted property
@property(readonly, assign, nonatomic) NSURL *localURL;	// G=0x34dd7499; 
@property(copy, nonatomic) id progressHandler;	// G=0x34dd82f1; S=0x34dd8305; @synthesize=_progressHandler
@property(readonly, assign, nonatomic) int state;	// G=0x34dd75f5; 
- (id)initWithAssetType:(id)assetType attributes:(id)attributes;	// 0x34dd8315
- (void)_downloadWithOptions:(id)options shouldFireCallback:(BOOL)callback;	// 0x34dd7875
- (id)_getLocalAttribute:(id)attribute;	// 0x34dd81f1
- (void)adjustDownloadOptions:(id)options completion:(id)completion;	// 0x34dd7851
// declared property getter: - (id)assetType;	// 0x34dd82e1
// declared property getter: - (id)attributes;	// 0x34dd74b5
- (void)beginDownloadWithOptions:(id)options;	// 0x34dd7d4d
- (void)cancelDownload:(id)download;	// 0x34dd7fa1
- (BOOL)cancelDownloadAndReturnError:(id *)error;	// 0x34dd805d
// declared property getter: - (id)clientName;	// 0x34dd83ed
- (void)dealloc;	// 0x34dd7379
- (id)description;	// 0x34dd7445
// declared property getter: - (id)downloadOptions;	// 0x34dd82c1
// declared property getter: - (id)fullAttributes;	// 0x34dd8469
// declared property getter: - (int)garbageCollectionBehavior;	// 0x34dd76ed
// converted property getter: - (id)identifier;	// 0x34dd84f5
- (BOOL)isPresentOnDisk;	// 0x34dd8669
// declared property getter: - (id)localURL;	// 0x34dd7499
- (MobileAsset *)mobileAsset;	// 0x34dd81e1
- (void)pauseDownload:(id)download;	// 0x34dd7d61
- (BOOL)pauseDownloadAndReturnError:(id *)error;	// 0x34dd7e1d
// declared property getter: - (id)progressHandler;	// 0x34dd82f1
- (void)purge:(id)purge;	// 0x34dd80c1
- (BOOL)purgeAndReturnError:(id *)error;	// 0x34dd817d
- (BOOL)requiredDiskSpaceIsAvailable:(long long *)available error:(id *)error;	// 0x34dd7811
- (void)resumeDownload:(id)download;	// 0x34dd7e81
- (BOOL)resumeDownloadAndReturnError:(id *)error;	// 0x34dd7f3d
// declared property setter: - (void)setClientName:(id)name;	// 0x34dd8425
// declared property setter: - (void)setDownloadOptions:(id)options;	// 0x34dd82d1
// declared property setter: - (void)setGarbageCollectionBehavior:(int)behavior;	// 0x34dd77c5
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x34dd8305
// declared property getter: - (int)state;	// 0x34dd75f5
@end
