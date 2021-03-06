/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAssetReaderInternal, NSError, NSArray, AVAsset;

@interface AVAssetReader : NSObject {
@private
	AVAssetReaderInternal *_priv;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) AVAsset *asset;	// G=0x3146205d; 
@property(readonly, assign) NSError *error;	// G=0x31463111; 
@property(readonly, assign, nonatomic, getter=_figAssetReader) OpaqueFigAssetReader *figAssetReader;	// G=0x314620f5; 
@property(readonly, assign, nonatomic) NSArray *outputs;	// G=0x31462245; 
@property(readonly, assign) int status;	// G=0x3146331d; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x314620a5; S=0x314623bd; 
+ (id)assetReaderWithAsset:(id)asset error:(id *)error;	// 0x3146236d
+ (void)initialize;	// 0x31462c51
- (id)init;	// 0x31462115
- (id)initWithAsset:(id)asset error:(id *)error;	// 0x31462735
- (BOOL)_canAddOutput:(id)output exceptionReason:(id *)reason;	// 0x3146228d
// declared property getter: - (OpaqueFigAssetReader *)_figAssetReader;	// 0x314620f5
- (void)_handleServerDiedNotification;	// 0x314626f9
- (void)_tearDownFigAssetReader;	// 0x31463431
- (void)_transitionToStatus:(int)status failureError:(id)error;	// 0x31463259
- (void)addOutput:(id)output;	// 0x31462511
// declared property getter: - (id)asset;	// 0x3146205d
- (BOOL)canAddOutput:(id)output;	// 0x314624a1
- (void)cancelReading;	// 0x31462c7d
- (void)dealloc;	// 0x31463569
- (id)description;	// 0x31462675
// declared property getter: - (id)error;	// 0x31463111
- (void)finalize;	// 0x314634f9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31462ff9
// declared property getter: - (id)outputs;	// 0x31462245
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x314623bd
- (BOOL)startReading;	// 0x31462d85
// declared property getter: - (int)status;	// 0x3146331d
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x314620a5
@end

