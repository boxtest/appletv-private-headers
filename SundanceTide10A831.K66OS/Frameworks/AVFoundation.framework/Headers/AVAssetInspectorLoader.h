/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSURL, AVAssetCache, AVWeakReference, NSArray, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3423868d; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x342386f1; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x342386ed; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x342386e9; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x342386e5; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x34238701; 
@property(readonly, assign, nonatomic) unsigned long long downloadToken;	// G=0x34238705; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3423869d; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x342386dd; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x34238695; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x34238691; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x3423870d; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x342386d5; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x342386d9; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x34238699; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x342386e1; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x34238781; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x342386fd; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x342386f5; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x342386f9; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x34238711; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x342385b1; 
+ (void)initialize;	// 0x34238511
- (id)init;	// 0x3423852d
- (id)initWithURL:(id)url;	// 0x34238541
// declared property getter: - (id)URL;	// 0x3423868d
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x34238715
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x34238695
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x34238691
// declared property getter: - (BOOL)_isStreaming;	// 0x34238711
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x3423872d
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x34238699
- (void)_serverHasDied;	// 0x34238785
// declared property getter: - (id)_weakReference;	// 0x342385b1
// declared property getter: - (id)assetCache;	// 0x342386f1
- (id)assetInspector;	// 0x34238685
- (void)cancelLoading;	// 0x34238689
// declared property getter: - (id)chapterGroupInfo;	// 0x342386ed
- (id)copyWithZone:(NSZone *)zone;	// 0x3423860d
- (void)dealloc;	// 0x342385c1
// declared property getter: - (id)downloadDestinationURL;	// 0x34238701
// declared property getter: - (unsigned long long)downloadToken;	// 0x34238705
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3423869d
// declared property getter: - (BOOL)hasProtectedContent;	// 0x3423870d
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x342386e9
// declared property getter: - (BOOL)isComposable;	// 0x342386e5
// declared property getter: - (BOOL)isExportable;	// 0x342386dd
// declared property getter: - (BOOL)isPlayable;	// 0x342386d9
// declared property getter: - (BOOL)isReadable;	// 0x342386e1
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x34238651
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x34238719
// declared property getter: - (id)lyrics;	// 0x342386d5
// declared property getter: - (unsigned)referenceRestrictions;	// 0x34238781
// declared property getter: - (id)resolvedURL;	// 0x342386fd
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x342386f5
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x342386f9
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3423861d
@end
