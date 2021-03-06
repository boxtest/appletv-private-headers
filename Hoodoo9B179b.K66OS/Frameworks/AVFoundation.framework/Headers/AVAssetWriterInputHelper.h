/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVWeakReference, NSArray, AVAssetWriterInputConfigurationState, AVOutputSettings, NSString;

@interface AVAssetWriterInputHelper : NSObject {
@private
	AVAssetWriterInputConfigurationState *_configurationState;	// 4 = 0x4
	AVWeakReference *_weakReferenceToAssetWriterInput;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) AVAssetWriterInputConfigurationState *configurationState;	// G=0x30adbf49; @synthesize=_configurationState
@property(assign, nonatomic) BOOL expectsMediaDataInRealTime;	// G=0x30adbbc9; S=0x30adbbf1; 
@property(assign, nonatomic) int mediaTimeScale;	// G=0x30adbb11; S=0x30adbb39; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x30adb88d; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x30adba5d; S=0x30adba85; 
@property(readonly, assign, nonatomic) AVOutputSettings *outputSettings;	// G=0x30adb8b5; 
@property(readonly, assign, nonatomic) CVPixelBufferPoolRef pixelBufferPool;	// G=0x30adbf45; 
@property(readonly, assign, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;	// G=0x30adbbc5; 
@property(retain, nonatomic) opaqueCMFormatDescription *sampleBufferFormatHint;	// G=0x30adb8dd; S=0x30adb905; 
@property(copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;	// G=0x30adbeb5; S=0x30adbedd; 
@property(readonly, assign, nonatomic) int status;	// G=0x30adb775; 
@property(assign, nonatomic) CGAffineTransform transform;	// G=0x30adb991; S=0x30adb9d1; 
@property(retain) AVWeakReference *weakReferenceToAssetWriterInput;	// G=0x30adbf59; S=0x30adbf6d; @synthesize=_weakReferenceToAssetWriterInput
- (id)initWithConfigurationState:(id)configurationState;	// 0x30adb631
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x30adbd95
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x30adbd09
// declared property getter: - (id)configurationState;	// 0x30adbf49
- (void)dealloc;	// 0x30adb715
// declared property getter: - (BOOL)expectsMediaDataInRealTime;	// 0x30adbbc9
// declared property getter: - (BOOL)isReadyForMoreMediaData;	// 0x30adbbc5
- (void)markAsFinished;	// 0x30adbe29
// declared property getter: - (int)mediaTimeScale;	// 0x30adbb11
// declared property getter: - (id)mediaType;	// 0x30adb88d
// declared property getter: - (id)metadata;	// 0x30adba5d
// declared property getter: - (id)outputSettings;	// 0x30adb8b5
// declared property getter: - (CVPixelBufferPoolRef)pixelBufferPool;	// 0x30adbf45
- (void)prepareToEndSession;	// 0x30adbe21
- (BOOL)prepareToFinishWritingReturningError:(id *)finishWritingReturningError;	// 0x30adbe25
- (void)requestMediaDataWhenReadyOnQueue:(dispatch_queue_s *)queue usingBlock:(id)block;	// 0x30adbc7d
// declared property getter: - (opaqueCMFormatDescription *)sampleBufferFormatHint;	// 0x30adb8dd
// declared property setter: - (void)setExpectsMediaDataInRealTime:(BOOL)realTime;	// 0x30adbbf1
// declared property setter: - (void)setMediaTimeScale:(int)scale;	// 0x30adbb39
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30adba85
// declared property setter: - (void)setSampleBufferFormatHint:(opaqueCMFormatDescription *)hint;	// 0x30adb905
// declared property setter: - (void)setSourcePixelBufferAttributes:(id)attributes;	// 0x30adbedd
// declared property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x30adb9d1
// declared property setter: - (void)setWeakReferenceToAssetWriterInput:(id)assetWriterInput;	// 0x30adbf6d
// declared property getter: - (id)sourcePixelBufferAttributes;	// 0x30adbeb5
// declared property getter: - (int)status;	// 0x30adb775
// declared property getter: - (CGAffineTransform)transform;	// 0x30adb991
- (void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)error;	// 0x30adb851
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x30adb7a9
// declared property getter: - (id)weakReferenceToAssetWriterInput;	// 0x30adbf59
@end

